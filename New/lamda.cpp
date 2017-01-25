//
//  lambda.cpp
//  chapter1
//
//  Created by Subbu on 9/7/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

//LAMBDA1
auto l1 = [] {
    cout<<"I am inside a lambda\n";
};


//LAMBDA2
auto l2 = [] (const std::string& str) { //lambda can take parameters
    cout<<str<<"\n";
};

//LAMBDA3
auto l3 = [] {
    return 42; //lambda can return
};


void lamdbaCapture() {
    cout<<"\ninside lambda capture\n";
    int x = 10;
    int y = 99;
    
    
    // x is not allowed to be modified inside the lamda, so its value will
    // be always be 10
    //auto qqq = [x, &y] {
    auto qqq = [=, &y] {
        cout<<x<<endl;
        cout<<y<<endl;
    };
    
    x=32;
    y=22;
    
    qqq();
    
    x=45;
    y=56;
    qqq();
    
    int a = 10;
    int b = 20;
    
    cout<<"\n mutable lambda\n";
    
    //MUTABLE LAMBDA
    auto bbb = [a, &b] () mutable {
        cout<<a++<<endl;
        cout<<b<<endl;
    };

    
    bbb();
    
    a=20; // the value of a is never reflected, the initial value takes forefront always.
    b=30;
    bbb();
    bbb();
    
}


//RETURING A LAMBDA
std::function<int(int,int)> returnLambda ()
{
    return [] (int x, int y) {
            return x*y;
    };
    
}



int main() {
    l1();
    l2("hello");
    cout<<l3();
    
    lamdbaCapture();


    //Returning a lamda
    
    auto lf = returnLambda();
    std::cout << lf(6,7) << std::endl;
    
}
