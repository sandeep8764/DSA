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

void insert(Node* p, int index, int x)
{
    if (index < 0 || index > length(first))
        return;

    Node* t = new Node;
    t->data = x;

    // Insert at beginning
    if (index == 0)
    {
        t->prev = NULL;
        t->next = first;

        if (first != NULL)
            first->prev = t;

        first = t;
    }
    // Insert at other positions
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;

        t->next = p->next;
        t->prev = p;

        if (p->next != NULL)
            p->next->prev = t;

        p->next = t;
    }
}


int main ()
{
     int A[]={11,22,33,44,55};
     create(A,5);
     
     insert(first,5,444);
     
     
     Display(first);
     
     
    return 0;
    
}