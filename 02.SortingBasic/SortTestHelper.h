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

    //Copy 整型数组
    int * CopyIntArray(int arr[], int n) {
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = arr[i];
        }
        //std::copy(arr, arr + n, a);
        return a;
    }

    // 生成一个近乎有序的数组
    // 首先生成一个含有[0...n-1]的完全有序数组, 之后随机交换swapTimes对数据
    // swapTimes定义了数组的无序程度
    int *GenerateNearlyOrderedArray(int n, int swapTimes){

        int *arr = new int[n];
        for(int i = 0 ; i < n ; i ++ ) {
            arr[i] = i;
        }

        srand(time(NULL));
        for( int i = 0 ; i < swapTimes ; i ++ ){
            int posx = rand()%n;
            int posy = rand()%n;
            std::swap( arr[posx] , arr[posy] );
        }

        return arr;
    }

}


#endif //SELECTIONSORT_SORETESTHELPER_H
