/*************************************************************************
	> File Name: sort.cpp
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:18:06 2023
 ************************************************************************/

#include "head.h"

void sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> point) {
    if (head >= tail)  return ;
    quick_sort(head, tail - 1, point, threshold);
    insert_sort(head, tail, point);
    return ;
}
