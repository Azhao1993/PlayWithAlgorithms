//
// Created by Azhao1993 on 2020/12/26.
//

#include <vector>


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
    int* f3 = SortTestHelper::CopyIntArray(f1, n);
    SortTestHelper::TestSort("Selection Sort", SelectionSort, f1, n); // 0.091
    SortTestHelper::TestSort("Insertion Sort", InsertionSort, f2, n); // 0.247
    SortTestHelper::TestSort("Insertion Sort Advance", InsertionSort_Advance, f3, n); //0.047
    delete[] f1;
    delete[] f2;
    delete[] f3;

    return 0;
}