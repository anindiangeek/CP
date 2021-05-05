#include <iostream>
#include <list>
std::list<int> l;

using namespace std;
class LinkedList {
};

class Node {
   public:
    int data;
    Node *next;
};
Node *head = nullptr;
Node *tail = nullptr;

void display() {
    Node *temp = head;
    int i = 0;
    while (temp != nullptr) {
        cout << temp->data << " "
             << "<-" << i;
        cout << endl;
        temp = temp->next;
        i++;
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
// creating a function named finsert (forced insert)
// It will insert the data at any index entered and will fill up the not avaible gaps with garbage or defined values.
// I want eachvalue to be optional and not mandatory to give and also I dont want to make it a default arguement.
void insert(int x, int i = -1) {
    // making and getting a new node in Heap.
    // I have made a node in here and that was causing memory leak issues so created in indivusal places.
    //checking where to insert.
    //Pushing in beginning
    if (i == 0) {
        Node *nodemanager = NewNodemaker(x);
        nodemanager->next = head;
        head = nodemanager;
        if (tail == nullptr) {
            tail = nodemanager;
        }
        return;
    }
    //Pushing Back
    else if (i < 0) {
        // checking if it's the first push.
        if (head == nullptr) {
            insert(x, 0);
            return;
        }
        //not a first push, so pushing in back.
        else {
            Node *nodemanager = NewNodemaker(x);
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
                }
            }
            Node *nodemanager = NewNodemaker(x);
            nodemanager->next = temp->next;
            temp->next = nodemanager;
        }
    }
}

void fInsert(int data, signed pos, bool override, int eachvalue) {
    if (head == tail and pos > 1) {
        insert(eachvalue);
        fInsert(data, pos, override, eachvalue);
        return;
    }
    Node *nodemanager = NewNodemaker(data);
    Node *temp = head;
    for (size_t i = 0; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == tail) {
            insert(eachvalue, -1);
        }
    }
    nodemanager->next = temp->next;
    temp->next = nodemanager;
    return;
}

int main() {
    freopen("//Users//anindiangeek//Documents//CP//o.txt", "w+", stdout);
    fInsert(5, 7, true, 0);
    display();
}
