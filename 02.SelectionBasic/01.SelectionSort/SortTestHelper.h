//
// Created by Azhao1993 on 2020/12/26.
//

#ifndef SELECTIONSORT_SORETESTHELPER_H
#define SELECTIONSORT_SORETESTHELPER_H


#include <crtdbg.h>
#include <ctime> // clock
#include <cstdlib>
#include <cassert>
#include <vector>
#include <iostream>

namespace SortTestHelper{
    // 生成n个元素，每个元素随机范围[l,r]
    int* GenerateRandomArray(int n, int l, int r)
    {
        assert( l <= r);
        int *arr = new int[n];
        //随机种子设置
        std::srand(std::time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (r - l + 1) + l;
            // (r - l + 1)     -> [0, r - l]
            // (r - l + 1) + l -> [l, r]
        }
        return arr;
    }
    // 打印vector
    template <typename T>
    void PrintVector(std::vector<T>& arr, int n)
    {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i != n - 1) {
                std::cout << ",";
            } else {
                std::cout << std::endl;
            }
        }
        std::cout << "----------------------"  << std::endl;
    }

    // 打印array[]
    template <typename T>
    void PrintArray(T arr[], int n)
    {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i != n - 1) {
                std::cout << ",";
            } else {
                std::cout << std::endl;
            }
        }
        std::cout << "----------------------"  << std::endl;
    }
    // 判断数组是否有序
    template <typename T>
    bool IsSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
    // 计算排序算法的运行时间
    template <typename T>
    void TestSort(std::string sortName, void(*sort)(T[] , int), T arr[] , int n) {
        clock_t start = clock();
        sort(arr, n);
        clock_t end = clock();
        assert(IsSorted(arr, n)); // 自动中断
        std::cout << sortName << ":" << double (end - start) / CLOCKS_PER_SEC << "s" << std::endl;
    }

}


#endif //SELECTIONSORT_SORETESTHELPER_H
