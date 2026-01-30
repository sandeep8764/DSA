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

int Delete(Node* p, int index)
{
    Node* q;
    int x = -1;

    if (index < 1 || index > length(first))
        return -1;

    // Delete first node
    if (index == 1)
    {
        q = first;
        first = first->next;

        if (first != NULL)
            first->prev = NULL;

        x = q->data;
        delete q;
    }
    // Delete node at given index
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;

        q = p;

        p->prev->next = p->next;

        if (p->next != NULL)
            p->next->prev = p->prev;

        x = p->data;
        delete p;
    }

    return x;
}

int main ()
{
     int A[]={11,22,33,44,55};
     create(A,5);
     
     // Code For Deletion of DLL 
     
     Delete(first,4);
     
     
     
     
     Display(first);
     
     
    return 0;
    
}