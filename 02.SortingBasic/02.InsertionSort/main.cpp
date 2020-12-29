//
// Created by Azhao1993 on 2020/12/26.
//

#include <vector>
#include "InsertionSort.h"
#include "../SortTestHelper.h"
#include "../01.SelectionSort/SelectionSort.h"


int main()
{
    //测试插入排序
    int n = 10;
    int* f = SortTestHelper::GenerateRandomArray(n, 0, n);
    InsertionSort(f, n);
    SortTestHelper::PrintArray(f, n);
    delete[] f;
    //与选择排序比较
    n = 10000;
    int* f1 = SortTestHelper::GenerateRandomArray(n, 0, n);
    int* f2 = SortTestHelper::CopyIntArray(f1, n);
    SortTestHelper::TestSort("Selection Sort", SelectionSort, f1, n);
    SortTestHelper::TestSort("Insertion Sort", InsertionSort, f2, n);
    delete[] f1;
    delete[] f2;

    return 0;
}