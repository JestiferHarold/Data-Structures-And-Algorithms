#ifndef INSERTION_SORT_HEADER
#define INSERTION_SORT_HEADER

#include <iostream>
#include <string>

void InsertionSort(int a[], int b) {
    for (int i = 1; i < b; i ++) {
        int key = a[i];
        int j = i - 1;

        for (; j >= 0 && a[j] > key; j --) {
            a[j + 1] = a[j];
        }

        a[j + 1] = key;

        for (int k = 0; k < b; k ++) {
            std::cout << std::to_string(a[k]) + "  ";
        }

        std::cout << std::endl;
    }
}

#endif