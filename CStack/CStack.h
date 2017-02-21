//
//  CStack.h
//  Template
//
//  Created by chentao on 17/1/23.
//  Copyright © 2017年 . All rights reserved.
//

#ifndef CStack_h
#define CStack_h
template<class T, unsigned long long int MAX_SIZE>
class CStack{
public:
    CStack();
    void Push(const T &item);
    void Pop();
    const bool Top(T &itm);
    bool IsEmpty();
    unsigned long long int Size();
    void Clear();
    
private:
    unsigned long long int m_size;
    T m_buffer[];
};

template<class T, unsigned long long int MAX_SIZE>
CStack<T, MAX_SIZE>::CStack() {
    m_size = 0;
    m_buffer[MAX_SIZE] = {0};
}

template<class T, unsigned long long int MAX_SIZE>
void CStack<T, MAX_SIZE>::Push(const T &item) {
    if (m_size < MAX_SIZE) {
        m_buffer[m_size] = item;
        m_size++;
    }
}

template<class T, unsigned long long int MAX_SIZE>
void CStack<T, MAX_SIZE>::Pop() {
    if(m_size>0) {
       m_size--;
    }
}

template<class T, unsigned long long int MAX_SIZE>
const bool CStack<T, MAX_SIZE>::Top(T &itm) {
    if (m_size>0) {
        itm = m_buffer[m_size-1];
        return true;
    }
    else {
        return false;
    }
}

template<class T, unsigned long long int MAX_SIZE>
bool CStack<T, MAX_SIZE>::IsEmpty() {
    return  m_size > 0 ? false : true;
}

template<class T, unsigned long long int MAX_SIZE>
unsigned long long int CStack<T, MAX_SIZE>::Size() {
    return m_size;
}

template<class T, unsigned long long int MAX_SIZE>
void CStack<T, MAX_SIZE>::Clear() {
    m_size = 0;
    m_buffer[MAX_SIZE] = {0};
}

#endif /* CStack_h */
