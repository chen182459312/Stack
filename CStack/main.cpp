//
//  main.cpp
//  CStack
//
//  Created by chentao on 17/2/6.
//  Copyright © 2017年 . All rights reserved.
//

#include <iostream>
#import"CStack.h"

int main(int argc, const char * argv[]) {
    CStack<int, 5> stack;
    for (int index = 0; index < 5; index++) {
        stack.Push(index);
    }
    int size = stack.Size();
    bool empty = stack.IsEmpty();
    stack.Pop();
    int item = 0;
    stack.Top(item);
    return 0;
}
