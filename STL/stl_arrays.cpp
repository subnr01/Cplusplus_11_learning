//
//  main.cpp
//  stl_arrays
//
//  Created by Subbu on 9/14/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

#include <iostream>
#include <array>
#include <string>
#include <algorithm>
#include <numeric>


using namespace std;

template <typename T>
inline void PRINT_ELEMENTS (const T& coll,
                            const std::string& optstr="")
{
    std::cout << optstr;
    for (const auto&  elem : coll) {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
    cout<<endl;
}


//c style operations with arrays
void array2() {
    array<char, 20> a1 = {"hello, world"};
   // cout<<a1; // does not work, need to be string
    printf("\n %s \n", a1.data());
    cout<<endl<<a1.size()<<endl;
    strcpy(a1.data(),"hello, boss");
    printf("\n %s \n", a1.data());
    cout<<endl<<a1.size()<<endl;
    
    array<char,20> s1;
    //Move operation
    s1 = move(a1);
    s1[5] = 'b';
    printf("\n %s \n", a1.data());
    printf("\n %s \n", s1.data());
    cout<<endl<<a1.size()<<endl;
    
}

void array1() {
    
    array<int,10> a1 = {1,2,3,4,5,6,7,8,9,10};
    PRINT_ELEMENTS(a1);
    cout<<a1.size()<<endl;
    
    
    //Modify the last element
    a1.back() = 1234;
    a1[a1.size() - 2] = 4567;
    PRINT_ELEMENTS(a1);
    
    //print sum of all elements
    cout<<endl<<accumulate(a1.begin(), a1.end(), 0)<<endl;
    
    //negate all elements****
    transform(a1.begin(), a1.end(), a1.begin(), negate<int>());
    PRINT_ELEMENTS(a1);
}


int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    array1();
    array2();
    return 0;
}
