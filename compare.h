/*************************************************************************
	> File Name: compare.h
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:10:20 2023
 ************************************************************************/

#ifndef _COMPARE_H
#define _COMPARE_H

class greater {
    public:
    bool operator()(int &a, int &b) {
        return a > b;
    }
};

class less {
    public:
    bool operator()(int &a, int &b) {
        return a < b;
    }
};

#endif
