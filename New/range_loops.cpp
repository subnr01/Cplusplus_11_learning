//
//  4.cpp
//  chapter1
//
//  Created by Subbu on 9/7/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

/* RANGE BASED LOOPS */


#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


void PrintArrRange() {
    int array[] = { 11, 22, 33, 44, 55 };
    auto sum = 0; //NEED TO INITIALISE
    for (auto x : array) {  //THIS IS SO COOL
        cout<<x <<endl;
        sum += x;
    }
}


void printVecRange() {
    std::vector<double> coll { 1, 2, 3};
    
    cout<<" Printing elements of a vector \n";
    
    /*
     Declaring elem is important, otherwise
     elem will act as a local copy of the elements
     in the vector.
     */
    for ( auto& elem : coll ) {
        elem *= 3;
        cout<<elem<<endl;
    }
    
    
   
    
    /* the same without range based loops */
    cout<<" Printing elements of a vector without range based loops \n";
    for (auto _pos=coll.begin(); _pos != coll.end(); ++_pos ) {
        const auto& elem = *_pos;
        std::cout << elem << std::endl;
    }
    
    
    
}



int main6()
{
    for ( int i : { 2, 3, 5, 7, 9, 13, 17, 19 } ) {
        std::cout << i << std::endl;
    }
    
    printVecRange();
    cout<<"\n Printing array with range \n";
    PrintArrRange();
    return 0;
    
    
    
}
