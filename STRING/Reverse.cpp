// Reversing An string

#include <iostream>
using namespace std;

int main()
{
    char A[] = "PYTHON\0";
    char temp;
    int i, j;
    for (j = 0; A[j] != '\0'; j++)
    {
        cout << j << endl;
    }
    j = j - 1;
    for (i = 0; i <= j; i++, j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    cout << A << endl;

    return 0;
}