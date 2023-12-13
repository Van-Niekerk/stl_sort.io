/*************************************************************************
	> File Name: insert_sort.cpp
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:22:14 2023
 ************************************************************************/

#include "head.h"

void insert_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point) {
    RandomIter ind = head;
    for (RandomIter i = head + 1; i != tail; ++i) {
        if (point(*i, *ind))  ind = i;
    }
    swap(*head, *ind);
    for (RandomIter i = head + 2; i != tail; ++i) {
        for (RandomIter j = i; point(*j, *(j - 1)); --j) {
            swap(*j, *(j - 1));
        }
    }
    return ;
}
