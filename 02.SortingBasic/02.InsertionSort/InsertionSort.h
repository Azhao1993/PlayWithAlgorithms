//
// Created by wb.shixindong on 2020/12/28.
//

#ifndef PLAYWITHALGORITHMS_INSERTIONSORT_H
#define PLAYWITHALGORITHMS_INSERTIONSORT_H
template<typename T>
void InsertionSort(std::vector<T>& arr, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]); // 比较耗时，需要三次赋值
            } else {
                break;
            }
        }
    }
}

// 对插入排序的改进:减少Swap
template<typename T>
void InsertionSort(std::vector<T>& arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        T temp = arr[i];
        int j ; //j位置表示temp 应该插入的位置
        for (j = i ; j > 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                arr[j + 1] = temp;
                break;
            }
        }
    }
}


template<typename T>
void InsertionSort(T arr[], int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j > 0 && arr[j - 1] > arr[j]; j--) {
            swap(arr[j - 1], arr[j]);
        }
    }
}
#endif //PLAYWITHALGORITHMS_INSERTIONSORT_H
