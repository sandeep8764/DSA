// TAYLOR SERIES USING HARNOR's SERIES 


#include <iostream>
#include <stdio.h>
using namespace std;

double e(int x, int n) {
    static double s = 1;  // keeps track of result across recursive calls
    if (n == 0)
        return s;
    s = 1 + (x * s) / n;
    return e(x, n - 1);
}

int main() {
    printf("%lf\n", e(2, 10));  // Approximate e^2 using 10 terms
    return 0;
}
