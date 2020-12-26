//
// Created by Azhao1993 on 2020/12/26.
//

#include <vector>
#include <ostream>
#include "Student.h"
#include "SortTestHelper.h"

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
    return 0;
}