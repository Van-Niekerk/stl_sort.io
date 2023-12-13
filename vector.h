/*************************************************************************
	> File Name: vector.h
	> Author: 隔壁老孙无敌 
	> Mail:1686169484@qq.com 
	> Created Time: Thu Aug 31 09:25:16 2023
 ************************************************************************/

#ifndef _VECTOR_H
#define _VECTOR_H

class vector {
public:
    vector(int n = 3) {
        data = (int *)malloc(sizeof(int) * n);	  
        __size = n;
        length = 0;
    }
    
    bool expand() {			   
        int extr_size = __size; 	   
        int *p = nullptr;
        while(extr_size) {
            p = (int *)realloc(data, sizeof(int) * (__size + extr_size));
            if(p)  break;              
            extr_size >>= 1;           
        }
        if(extr_size == 0)  return false; 
        data = p;                   
        __size += extr_size;          
        return true;
    }
    
    RandomIter begin() {
        return data;
    }
    RandomIter end() {
        return data + length;
    }
    
    bool insert(int ind, int val) {
        if (ind < 0 || ind > length) return false;
        if (length == __size) {            
            if (!expand())  return false;
        } 
        for (int i = length; i > ind; --i) { 
            data[i] = data[i - 1];
        }
        data[ind] = val;
        ++length;
        return 1;
    }
    bool insert(RandomIter it, int val) {
        return insert(it - data, val);
    }
    bool push_back(int val) {
        return insert(length, val);
    }
    
    int size() {
        return length;
    }

    bool erase(int ind) { 
        if(ind < 0 || ind >= length)  return false;
        for(int i = ind + 1; i < length; ++i) {
            data[i - 1] = data[i];
        }
        --length;
        return true;
    }
    bool erase(RandomIter it) {
        return erase(it - data);
    }

    void clear() {    
        free(data);
        return ;
    }

    int& operator[](int ind) {
        if (ind < 0 || ind >= length)  exit(1);
        return data[ind];
    }

private:
    int *data;                     
    int __size, length;              
};

#endif
