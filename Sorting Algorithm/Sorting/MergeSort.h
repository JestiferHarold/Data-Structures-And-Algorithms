#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
#include <iostream>
//Uses divide and conquer method :: brits lmao    

class Sorter {
    private:
        std::vector<int>& vec;

    public:
        Sorter(std::vector<int>& vec) {
            this->vec = vec;
        }

        void Merge(int left_bound, int right_bound, int mid) {
            int first_sub_array = mid - left_bound + 1;
            int second_sub_array = right_bound - mid;

            std::vector<int> L(first_sub_array), R(second_sub_array);
        
            for (int i = 0; i < first_sub_array; i ++) {
                L[i] = (this->vec)[left_bound + i];
            }

            for (int j = 0; j < second_sub_array; j ++) {
                R[j] = (this->vec[mid + 1 + j]);
            }

            int i = 0, j = 0;
            int k = left_bound;

            while (i < first_sub_array && j < second_sub_array) {
                if (L[i] <= R[j]) {
                    this->vec[k] = L[i];
                    i ++;
                } else {
                    this->vec[k] = R[j];
                    j ++;
                }
                
                k ++;
            } 

            while (i < first_sub_array) {
                this->vec[k] = L[i];
                i ++;
                k ++; 
            }

            while (j < second_sub_array) {
                this->vec[k] = R[j];
                j ++;
                k ++;
            }
        }

        void MergeSort(int left_bound, int right_bound) {
            if (left_bound >= right_bound) return;

            int mid = left_bound + (right_bound - left_bound) / 2;

            this->MergeSort(left_bound, mid);
            this->MergeSort(mid + 1, right_bound);
            this->Merge(left_bound, right_bound, mid);
        }
};

#endif