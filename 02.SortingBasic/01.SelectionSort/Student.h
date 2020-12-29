//
// Created by Azhao1993 on 2020/12/26.
//
#ifndef SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <string>
#include <ostream>

struct Student {
    std::string name;
    int sorce;

    bool operator<(const Student& other) {
        // 分数从大到小的排列
        //return this->sorce > other.sorce;
        // 分数从大到小，名字从小到大
        return this->sorce == other.sorce ? this->name < other.name : this->sorce > other.sorce;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Student:" << student.name << " Sorce:" << student.sorce ;
        return os;
    }
};

#endif //SELECTIONSORT_STUDENT_H
