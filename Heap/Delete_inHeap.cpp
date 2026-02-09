#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<int>& h, int n, int i) {
    int mx = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && h[l] > h[mx]) mx = l;
    if (r < n && h[r] > h[mx]) mx = r;

    if (mx != i) {
        swap(h[i], h[mx]);
        heapify(h, n, mx);
    }
}

int delHeap(vector<int>& h) {
    int n = h.size();
    if (n == 0) return -1;

    int root = h[0];
    h[0] = h[n-1];
    h.pop_back();

    heapify(h, h.size(), 0);
    return root;
}

int main() {
    vector<int> h = {30, 20, 10, 5};
    cout << delHeap(h) << endl;

    for (int x : h) cout << x << " ";
}
