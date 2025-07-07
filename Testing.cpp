#include "Sorting\BubbleSort.h"
#include "Sorting\SelectionSort.h"
#include "Sorting\InsertionSort.h"
#include <iostream>
#include <string>

using namespace std;

int main () {
    int a[] = {3, 37, 40, 1, 10, 34, 23, 16, 3, 31};

    cout << "BUBBLE SORT" << endl;
    for (int i = 0; i < 10; i ++) {
        cout << std::to_string(a[i]) + "  ";
    }

    cout << endl;
    BubbleSort(a, 10);
    
    for (int i = 0; i < 10; i++) {
        cout << std::to_string(a[i]) + "  ";
    }

    cout << endl;

    cout << "SELECTION SORT"  << endl;

    int b[] = {3, 37, 40, 1, 10, 34, 23, 16, 3, 31};
    for (int i = 0; i < 10; i ++) {
        cout << std::to_string(b[i]) + "  ";
    }

    cout << endl;
    SelectionSort(b, 10);

    for (int i = 0; i < 10; i++) {
        cout << std::to_string(b[i]) + "  ";
    }
    cout << endl;

    cout << "INSERTION SORT" << endl;

    int c[] = {3, 37, 40, 1, 10, 34, 23, 16, 3, 31};
    for (int i = 0; i < 10; i ++) {
        cout << std::to_string(b[i]) + "  ";
    }

    cout << endl;
    InsertionSort(c, 10);

    for (int i = 0; i < 10; i ++) {
        cout << std::to_string(b[i]) + "  ";
    }
}