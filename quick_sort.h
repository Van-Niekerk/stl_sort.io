/*************************************************************************
	> File Name: quick_sort.h
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:24:50 2023
 ************************************************************************/

#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

void quick_sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> &point, int depth_limit);

#endif
