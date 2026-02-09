#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<int>& a, int n, int i) {
    int mx = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && a[l] > a[mx]) mx = l;
    if (r < n && a[r] > a[mx]) mx = r;

    if (mx != i) {
        swap(a[i], a[mx]);
        heapify(a, n, mx);
    }
}

void heapSort(vector<int>& a) {
    int n = a.size();

    // build heap
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // extract elements
    for (int i = n-1; i > 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    vector<int> a = {4, 10, 3, 5, 1};
    heapSort(a);

    for (int x : a) cout << x << " ";
}
