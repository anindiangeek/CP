
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node *head = nullptr;

void display()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void pushfirst(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}
void pushback(int x)
{
    Node *temp2 = head;
    Node *temp = new Node;
    temp->data = x;
    temp->next = nullptr;
    if (head == nullptr)
    {
        pushfirst(x);
        return;
    }
    else
    {
        while (temp2->next != nullptr)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
void insert(int x, int i = -1)
{
    if (i == 0)
    {
        pushfirst(x);
    }
    else if (i < 0)
    {
        pushback(x);
    }
    else
    {
        Node *temp = head;
        Node *newnode = new Node;
        newnode->data = x;
        newnode->next = nullptr;
        for (int j = 0; j < (i - 1); j++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
int main()
{
    pushback(3);
    pushback(30);
    pushback(300);
    pushback(3000);
    pushback(30000);
    display();
    insert(4,0);
    insert(4,3);
    display();
}