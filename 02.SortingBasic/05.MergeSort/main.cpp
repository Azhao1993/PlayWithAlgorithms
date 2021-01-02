//
// Created by Azhao1993 on 2020/12/26.
//

#include <vector>
#include "../SortTestHelper.h"
#include "../02.InsertionSort/InsertionSort.h"
#include "MergeSort.h"


int main()
{
    //测试归并排序
    int n = 8;
    int* f = SortTestHelper::GenerateRandomArray(n, 0, n);
    SortTestHelper::PrintArray(f, n);
    MergeSort(f, n);
    SortTestHelper::PrintArray(f, n);

    // 与选择排序比较
    n = 50000;
    int* f1 = SortTestHelper::GenerateRandomArray(n, 0, n);
    int* f2 = SortTestHelper::CopyIntArray(f1, n);
    SortTestHelper::TestSort("Insertion Sort Advance", InsertionSort_Advance, f1, n); //1.21s
    SortTestHelper::TestSort("Merge Sort", MergeSort, f2, n); //0.007s
    delete[] f1;
    delete[] f2;

    // 排序近乎有序的数组: 归并排序要比插入排序要慢
    n = 50000;
    int swapTimes = 10;
    f1 = SortTestHelper::GenerateNearlyOrderedArray(n, swapTimes);
    f2 = SortTestHelper::CopyIntArray(f2, n);
    SortTestHelper::TestSort("Insertion Sort Advance", InsertionSort_Advance, f1, n); //0.001s
    SortTestHelper::TestSort("Merge Sort", MergeSort, f2, n); //0.004s
    delete[] f1;
    delete[] f2;

    return 0;
}