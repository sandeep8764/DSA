#include<iostream>

#include <vector>
#include <algorithm>
using namespace std;
 


void insertHeap(vector<int>& h, int x) {
    h.push_back(x);
    int i = h.size() - 1;

    while (i > 0) {
        int p = (i - 1) / 2;
        if (h[p] < h[i]) {
            swap(h[p], h[i]);
            i = p;
        } else break;
    }
}

int main() {
    vector<int> h;
    insertHeap(h, 10);
    insertHeap(h, 20);
    insertHeap(h, 5);
    insertHeap(h, 30);

    for (int x : h) cout << x << " ";
}
