 // In C++

#include<iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;
};

Node* first = NULL;

void create(int A[], int n) {
    Node *t, *last;

    first = new Node;
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(Node* p) {
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int length(Node* p) {
    int l = 0;
    while (p != NULL) {
        l++;
        p = p->next;
    }
    return l;
}

// Code for reverse A DLL 

void Reverse(Node* p)
{
    Node* temp = NULL;

    while (p != NULL)
    {
        // Swap prev and next
        temp = p->prev;
        p->prev = p->next;
        p->next = temp;

        // Move to next node (which is previous before swap)
        p = p->prev;
    }

    // Fix first pointer
    if (temp != NULL)
        first = temp->prev;
}




int main ()
{
     int A[]={11,22,33,44,55};
     create(A,5);
     
    
     
    
     Reverse(first);
     
     
     
     Display(first);
     
     
    return 0;
    
}