//
//  3.cpp
//  chapter1
//
//  Created by Subbu on 9/7/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;


class temp {
public:
    int a;
    int b;
    int c;
    
    temp () {}
    temp(int aa, int bb) :a(aa), b(bb) {}
    
    explicit temp(int aa, int bb, int cc) :a(aa), b(bb), c(cc) {}
    
};


void fp(const temp& t)
{
    cout<<"hello "<<t.a;
}

int main5()
{
    temp t1;
    temp t2 {1,2};
    temp t3 {1,2,3};
    
    temp t4 = {1,2};
    //temp t5 = {1,2,3}; // WHY IS THIS ERROR, FIND OUT
    cout<<"hello";
    
    fp({47,11}); // OK, implicit conversion of {47,11} into temp
    
    \
    //fp({47,11,3}); // ERROR due to explicit
    
    fp(temp{47,11});  // OK, explicit conversion of {47,11} into temp
    
    fp(temp{47,11,3});// OK, explicit conversion of {47,11,3} into temp
    
    
    
    
    
    return 0;
    
}
