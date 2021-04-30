#include <bits/stdc++.h>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
};
Node *head = nullptr;
Node *tail = nullptr;

void reverse() {
}

void display() {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        cout << endl;
        temp = temp->next;
    }
}

Node *NewNodemaker(int x) {
    Node *temp = new Node;
    temp->data = x;
    temp->next = nullptr;
    // pointing tail to the newly made node
    // tail = temp;
    return temp;
}
/* 
    -1 is default -> It Pushes back
    (val,0) --> pushes at front or wherever you specify.
*/
void insert(int x, int i = -1) {
    // making and getting a new node in Heap.
    Node *nodemanager = NewNodemaker(x);
    //checking where to insert.
    //Pushing in beginning
    if (i == 0) {
        nodemanager->next = head;
        head = nodemanager;
        if (tail == nullptr) {
            tail = nodemanager;
        }
        return;
    }
    //Pushing Back
    else if (i < 0) {
        Node *temp2 = head;
        // checking if it's the first push.
        if (head == nullptr) {
            insert(x, 0);
            return;
        }
        //not a first push, so pushing in back.
        else {
            // for O(1) time
            tail->next = nodemanager;
            tail = nodemanager;
            //this method below takes O(n) time.
            /*
                // while (temp2->next != nullptr) {
                //     temp2 = temp2->next;
                // }
                // temp2->next = nodemanager;
            */
        }
    }
    //if pushing at a specfic location.
    else {
        // fixing first push issue.
        if (head == nullptr) {
            insert(x, 0);
            return;
        } else {
            // this function crashes when we try to push at a location that we don't have
            // so to avoid this we have to push at the end if the given location is out of bound
            Node *temp = head;
            for (int j = 0; j < (i - 1); j++) {
                temp = temp->next;
                // this is how I am solving this error.
                if (temp == tail) {
                    insert(x, -1);
                    return;
                    /* also if you see this code then I used break here before
                    instead of return
                    then I was getting two same value consecutively inserted
                    how is this possble? won't it directly go to the function and 
                    stop executing what's below?
                    I also want your thoughts wheather it is good to do this I mean pushing back
                    if that location does not exists or I should fill in the gaps in midlle with random
                    garbage values and push it in that specified location.
               */
                }
            }
            nodemanager->next = temp->next;
            temp->next = nodemanager;
        }
    }
}
int main() {
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
    insert(23, 15);
    insert(22);
    insert(3, 5);
    insert(53, -1);
    insert(263);
    insert(633, 0);
    insert(343, 3);
    display();
}