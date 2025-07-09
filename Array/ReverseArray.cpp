#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void Reverse(struct Array *arr) {
    int *B = new int[arr->length];
    for (int i = arr->length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = arr->A[i];
    }
    for (int i = 0; i < arr->length; i++) {
        arr->A[i] = B[i];
    }
    delete[] B;
}

void Display(struct Array arr) {
    printf("elements are:\n");
    for (int i = 0; i < arr.length; i++) {
        printf("%d\n", arr.A[i]);
    }
}

int main() {
    // Proper aggregate initialization at the time of declaration
    struct Array arr = {{1, 2, 3, 4, 5, 6}, 10, 6};

    Reverse(&arr);
    Display(arr);

    return 0;
}
