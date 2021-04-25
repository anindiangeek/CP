#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
};
Node *head = nullptr;

void reverse() {
}

void display() {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *NewNodemaker(int x) {
    Node *temp = new Node;
    temp->data = x;
    temp->next = nullptr;
    return temp;
}
/* 
    -1 is default -> It Pushes back
    (val,0) --> pushes at front or wherever you specify.
*/
void insert(int x, int i = -1) {
    Node *nodemanager = NewNodemaker(x);
    if (i == 0) {
        nodemanager->next = head;
        head = nodemanager;
        return;
    } else if (i < 0) {
        Node *temp2 = head;
        if (head == nullptr) {
            insert(x, 0);
            return;
        } else {
            while (temp2->next != nullptr) {
                temp2 = temp2->next;
            }
            temp2->next = nodemanager;
        }
    } else {
        Node *temp = head;
        for (int j = 0; j < (i - 1); j++) {
            temp = temp->next;
        }
        nodemanager->next = temp->next;
        temp->next = nodemanager;
    }
}
int main() {
    display();
}