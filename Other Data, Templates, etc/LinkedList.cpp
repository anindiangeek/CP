
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = nullptr; // global dec

void eb(int n)
{
    node *temp = head;
    if (head == nullptr)
    {
        node *temp2 = new node();
        temp2->data = n;
        temp2->next = nullptr;
        head = temp2;
        return;
    }
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *temp2 = new node();
    temp2->data = n;
    temp2->next = nullptr;
    temp->next = temp2;
}
void print()
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    eb(2);
    eb(5);     // //==========>>
    print();
    return 0;
}
