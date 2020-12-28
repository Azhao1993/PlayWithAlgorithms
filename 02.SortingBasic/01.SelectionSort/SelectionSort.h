//
// Created by wb.shixindong on 2020/12/28.
//

#ifndef PLAYWITHALGORITHMS_SELECTIONSORT_H
#define PLAYWITHALGORITHMS_SELECTIONSORT_H

void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// 选择排序模板方法
template<typename T>
void SelectionSort(std::vector <T> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n ; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // [i, n) 区间里的最小值
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}
#endif //PLAYWITHALGORITHMS_SELECTIONSORT_H
