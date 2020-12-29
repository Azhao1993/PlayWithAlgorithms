//
// Created by wb.shixindong on 2020/12/28.
//

#ifndef PLAYWITHALGORITHMS_INSERTIONSORT_H
#define PLAYWITHALGORITHMS_INSERTIONSORT_H
#include <vector>



template<typename T>
void InsertionSort(T arr[], int n) {
    /*
    // 写法1
    for (int i = 1; i < n; i++) {
        for (int j = i ; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
            } else {
                break;
            }
        }
    }
    */

    // 写法2
    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {
            // 比较耗时，需要三次赋值
            std::swap(arr[j], arr[j - 1]);
            // n = 10000时 Selection Sort:0.09s ;Insertion Sort:0.242s
        }
    }
}


template<typename T>
void InsertionSort_Advance(T arr[], int n)
{
    // 写法3
    // 对插入排序进行改进，减少swap的操作
    for (int i = 0; i < n; i++) {
        T element = arr[i];
        int j; // j保存element应该插入的位置
        for (j = i; j > 0 && arr[j - 1] > element; j--) {
            arr[j] = arr[j - 1]; // 改进后，n = 10000 Selection Sort:0.091s Insertion Sort:0.048s
        }
        arr[j] = element;
    }
}
#endif //PLAYWITHALGORITHMS_INSERTIONSORT_H
