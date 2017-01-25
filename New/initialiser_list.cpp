//
//  2.cpp
//  chapter1
//
//  Created by Subbu on 9/7/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class A {
private:
    int a;
    int b;
    
public:
    
    A() {}
    
    A(int aa, int bb) : a(aa), b(bb) {}
};


/* print uses initializer list */
void print (std::initializer_list<int> vals) {

    for (auto p=vals.begin(); p!=vals.end(); ++p) {
        std::cout << *p << "\n";
    }
    
}


int main4()
{
    /* Array initialisation by new method */
    int values[] {1,2,3};
    
    
    vector<int> v1 {1,2,3,4,5};
    //vector<int> v2 {1,2.3,4,5.6};  //will not convert from double to int
    
    /* Initialised by nullptr */
    int* q{};
    q = values;
    
    
    /* object initialisation by new method */
    A a{1,2};
    
    for (auto i = 0; i < 3; i++) {
        cout<<values[i];
    }
    cout<<endl;

    
    /* Look at how print is intialised in the function */
    print ({12,3,5,7,11,13,17}); // pass a list of values to print()
    return 0;
}
