//
// Created by wb.zhangzhao on 2020/12/29.
//

#ifndef INC_02_INSERTIONSORT_MERGESORT_H
#define INC_02_INSERTIONSORT_MERGESORT_H
// 时间复杂度 : n * log n
// 空间复杂度 ：O(n)


template<typename T>
void Merge(T arr[], int left, int mid, int right)
{
    int length = right - left + 1;
    T aux[length];
    for (int i = left; i <= right; i++) {
        aux[i - left] = arr[i];
    }
    int i = left;
    int j = mid + 1;
    for (int k = left; k <= right; k++) {
        if (i > mid) {
            arr[k] = aux[j - left];
            j++;
        } else if (j > right) {
            arr[k] = aux[i - left];
            i++;
        } else if (aux[i - left] < aux[j - left]) {
            arr[k] = aux[i - left];
            i++;
        } else {
            arr[k] = aux[j - left];
            j++;
        }
    }
}
// 递归归并， arr[l,r]范围内进行排序
template<typename T>
void MergeSort(T arr[], int left, int right)
{
//    if ( left >= right) {
//        return;
//    }

    // 递归到数据量比较少时，用插入
    if(right - left <= 15) {
        InsertionSort(arr, left, right);
        return;
    }

//    int mid = (left + right) / 2; //可能溢出
    int mid = left + (right - left) / 2;
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);
    // 优化
    if (arr[mid] > arr[mid + 1]) {
        Merge(arr, left, mid, right);
    }
}

template<typename T>
void MergeSort(T arr[], int n)
{
    MergeSort(arr, 0, n - 1);
}

#endif //INC_02_INSERTIONSORT_MERGESORT_H
