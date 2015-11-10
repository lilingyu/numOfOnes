//
//  main.cpp
//  numOfOne
//
//  Created by LiLingyu on 15/11/10.
//  Copyright © 2015年 LiLingyu. All rights reserved.
//

#include <iostream>


int numOfOnes(int n)
{
    int count = 0;
    
    while (n!=0) {
        count++;
        n = (n-1)&(n);
    }
    
    return count;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    int n = 2;//-1 3
    
    int count = numOfOnes(n);
    
    printf("%d\n", count);
    
    return 0;
}
