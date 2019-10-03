// Reverse the values in an array


#include <iostream>

int *reverse(int [], int);

int main () {
    int a[] = {8,7,100,5,4,3,80};
    int asize = sizeof(a)/sizeof(int);

    int *ra = reverse(a, asize);
    for (int i = 0; i < asize; i++) {
        std::cout << ra[i] << std::endl;
    }

    return 0;
}

int *reverse (int a[], int n) {
    int end = n - 1;
    for (int i = 0; i < n / 2; i++) {
        int iv = a[i];
        a[i] = a[end];
        a[end] = iv;
        end--;
    }

    return a;
}