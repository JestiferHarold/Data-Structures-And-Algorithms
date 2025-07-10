#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

#include <iostream>
#include <string>

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n; i ++) {
        for (int j = i; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }

            for (int i = 0; i < n; i++) {
                std::cout << std::to_string(a[i]) + "  ";
            }
            std::cout << std::endl;

        }
    }
}

void OptimizedBubbleSort(int a[], int n) {
    bool swapped;
    for (int i = 0; i < n; i ++) {
        swapped = true;
        for (int j = i; j < n - 1; j ++) {
            if (a[j] < a[j + 1]) {
                swapped = !swapped;
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }

        if (swapped) return;
    }
}

#endif