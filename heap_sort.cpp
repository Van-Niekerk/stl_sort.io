/*************************************************************************
	> File Name: heap_sort.cpp
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:11:30 2023
 ************************************************************************/

#include "head.h"

void downUpdate(RandomIter arr, int n, int ind, function<bool(int &, int &)> &point) {
    while((ind << 1) <= n) {
        int temp = ind, l = ind << 1, r = ind << 1 | 1;
        if((arr[l] != arr[temp]) && !point(arr[l], arr[temp]))  temp = l;
        if(r <= n && (arr[r] != arr[temp]) && !point(arr[r], arr[temp]))  temp = r;
        if(ind == temp)  break;
        swap(arr[temp], arr[ind]);
        ind = temp;
    }
    return ;
}

void heap_sort(RandomIter arr, int n, function<bool(int &, int &)> &point) {
    --arr;
    for(int i = n >> 1; i >= 1; --i) {
        downUpdate(arr, n, i, point);
    }
    for(int i = n; i > 1; --i) {
        swap(arr[i], arr[1]);
        downUpdate(arr, i - 1, 1, point);
    }
    return ;
}
