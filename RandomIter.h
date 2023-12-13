/*************************************************************************
	> File Name: RandomIter.h
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:09:35 2023
 ************************************************************************/

#ifndef _RANDOMITER_H
#define _RANDOMITER_H

class RandomIter {
public:
    RandomIter(int *p) : data(p) {}
    RandomIter(const RandomIter &iter) : data(iter.data) {}
    bool operator==(const RandomIter &iter) { return data == iter.data; }
    bool operator!=(const RandomIter &iter) { return !(data == iter.data); }
    bool operator<(const RandomIter &iter) const {
        return data < iter.data;
    }
    bool operator>(const RandomIter &iter) const {
        //return data > iter.data;   //OK
        return iter < *this;
    }
    bool operator<=(const RandomIter &iter) const {
        //return data <= iter.data;  //OK
        return !(iter < *this);
    }
    bool operator>=(const RandomIter &iter) const {
        //return data >= iter.data;  //OK
        return !(*this < iter);
    }
    RandomIter& operator++() { ++data; return *this; }
    RandomIter& operator--() { --data; return *this; }
    RandomIter operator++(int) {
        RandomIter t(*this);
        ++data;
        return t;
    }
    RandomIter operator--(int) {
        RandomIter t(*this);
        --data;
        return t;
    }
    int operator-(const RandomIter &iter) { return data - iter.data; }
    RandomIter operator+(int step) { return RandomIter(data + step); }
    RandomIter operator-(int step) { return RandomIter(data - step); }
    int& operator*() { return *data; }
    int& operator[](int step) { return *(data + step); }
private:
    int *data;
};

#endif
