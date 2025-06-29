#ifndef BUBBLE_SORT_HEADER
#define BUBBLE_SORT_HEADER

void BubbleSort (int a[], int n) {
    for (int i = 0; i < n; i ++) {
        for (int j = i; j < n; j ++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
} 

void OptimizedBubbleSort(int a[], int n) {
    bool swapped;
    for (int i = 0; i < n; i ++) {
        swapped = false;
        for (int j = i; )
    }
}

#endif