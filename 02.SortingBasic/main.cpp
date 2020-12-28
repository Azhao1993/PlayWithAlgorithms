//
// Created by Azhao1993 on 2020/12/26.
//

#include <vector>
#include <ostream>
#include "01.SelectionSort/Student.h"
#include "SortTestHelper.h"


int main()
{
    std::vector<int> arr = {95, 23, 5, 126, 5426, 58};
    SortTestHelper::PrintVector(arr,arr.size());
    SelectionSort(arr, arr.size());
    SortTestHelper::PrintVector(arr,arr.size());

    // 测试模板函数，传入字符串数组
    std::vector<std::string> c = {"D","C","B","A"};
    SelectionSort(c,4);
    SortTestHelper::PrintVector(c,4);

    // 测试模板函数，传入自定义结构体Student数组
    std::vector<Student> d = { {"D",90} , {"C",100} , {"B",95} , {"A",95} };
    SelectionSort(d,4);
    SortTestHelper::PrintVector(d, 4);

    // 测试生成随机数
    int n = 100000;
    int *e = SortTestHelper::GenerateRandomArray(n, 0, n);
    //SelectionSort(e,n);
    //SortTestHelper::PrintArray(e,n);
    //测试选择排序的运行效率
    SortTestHelper::TestSort("Selection Sort", SelectionSort, e, n);

    delete[] e; // GenerateRandomArray中 使用new int[];


    //测试插入排序，并与选择排序比较
    int n = 10000;
    int* f1 = SortTestHelper::GenerateRandomArray(n, 0, n);
    int* f2 = SortTestHelper::CopyIntArray(f1, n);

    delete[] f1;
    delete[] f2;

    return 0;
}