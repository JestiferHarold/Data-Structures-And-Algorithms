#ifndef SELECTION_SORT_HEADER
#define SELECTION_SORT_HEADER

#include <iostream>
#include <string>

void SelectionSort(int a[], int b) {
    for (int i = 0; i < b - 1; i ++) {
        int min = i;
        for (int j = i + 1; j < b; j ++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        for (int k = 0; k < b; k ++) {
           std::cout << std::to_string(a[k]) + "  ";  
        }
        
        std::cout << std::endl;
    }
}

#endif