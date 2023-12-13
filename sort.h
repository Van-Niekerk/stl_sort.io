/*************************************************************************
	> File Name: sort.h
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:18:49 2023
 ************************************************************************/

#ifndef _SORT_H
#define _SORT_H

void sort(RandomIter head, RandomIter tail, function<bool(int&, int&)> point = less());

#endif
