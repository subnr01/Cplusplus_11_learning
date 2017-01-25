//
//  main.cpp
//  stl_vectors
//
//  Created by Subbu on 9/14/16.
//  Copyright © 2016 Subbu. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


//Shrinking a vector
template<typename T>
inline void shrinkSpace( vector<T> & v1) {
    
    cout <<"\n Initial capacity\n"<<v1.capacity();
    cout <<"\n Initial size\n"<<v1.size();
    
    vector<T> temp(v1);
    v1.swap(temp);
    
    cout <<"\n final capacity\n"<<v1.capacity();
    cout <<"\n final size\n"<<v1.size();
    
}


//Insert increases the size
void vector_insert()
{
    cout<<"\n vector insert";
    vector<int> v2(5);
    int i = 0;
    cout<<"\n vector size "<<v2.size();
    cout<<endl;
    auto pos = v2.begin();
    v2.insert(pos+1, 2);
    cout<<"\n vector size "<<v2.size();
    cout<<endl;


    
    for (auto elem:v2) {
        cout<<" "<<elem;
    }
}


void vector_comparison()
{
    vector<int> v1{10,100};
    vector<int> v2{10, 100};
    
    if ( v1 == v2) {
        cout<<"\n v1 is equal than v2\n";
        return;
    }
    
    if ( v1 > v2) {
        cout<<"\n v1 is greater to v2\n";
        return;
    }
    
    if ( v1 < v2) {
        cout<<"\n v1 is less than v2\n";
        return;
    }
}

void vector_remove() {
    cout<<endl<<"in remove"<<endl;
    vector<int> v1 {10, 20, 30, 20, 40, 20 , 40, 20};
    
    auto start = v1.begin();
    auto end = v1.end();
    
    auto new_end = remove(start, end, 40);
    for (auto &i : v1) {
        std::cout << i << " ";
    }
    
}


void find_and_remove() {
    vector<int> v1 {1,2,3,4,5};
    
    auto pos = find(v1.begin(), v1.end(), 1);
    v1.erase(pos);
    
    for(const auto & elem:v1) {
        cout<<" "<<elem;
    }
    cout<<endl;
}

int vector_erase( )
{
    std::vector<int> c{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    
    c.erase(c.begin());
    
    for (auto &i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    
    c.erase(c.begin());
    
    for (auto &i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    
    c.erase(c.begin()+2, c.begin()+5);
    
    for (auto &i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
    
    
    std::vector<int> c1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<endl<<"shrinking space" <<endl;
    c1.erase(c1.begin());
    c1.erase(c1.begin());
    shrinkSpace(c1);
    
    return 0;
}

void book_example() {

    {
        // create empty vector for strings
        vector<string> sentence;
        
        // reserve memory for five elements to avoid reallocation
        sentence.reserve(5);
        
        // append some elements
        sentence.push_back("Hello,");
        sentence.push_back("how");
        sentence.push_back("are");
        sentence.push_back("you");
        sentence.push_back("?");
        
        // print elements separated with spaces
        copy (sentence.begin(), sentence.end(),
              ostream_iterator<string>(cout," "));
        cout << endl;
        
        // print ``technical data''
        cout << "  max_size(): " << sentence.max_size() << endl;
        cout << "  size():     " << sentence.size()     << endl;
        cout << "  capacity(): " << sentence.capacity() << endl;
        
        // swap second and fourth element
        swap (sentence[1], sentence[3]);
        
        // insert element "always" before element "?"
        sentence.insert (find(sentence.begin(),sentence.end(),"?"),
                         "always");
        
        // assign "!" to the last element
        sentence.back() = "!";
        
        // print elements separated with spaces
        copy (sentence.begin(), sentence.end(),
              ostream_iterator<string>(cout," "));
        cout << endl;
        
        // print ``technical data'' again
        cout << "  max_size(): " << sentence.max_size() << endl;
        cout << "  size():     " << sentence.size()     << endl;
        cout << "  capacity(): " << sentence.capacity() << endl;
    }
}
int main123(int argc, const char * argv[]) {
    // insert code here...
    vector<int> temp1;
    cout<<"\n"<<temp1.capacity()<<endl;
    temp1.push_back(1);
    cout<<"\n"<<temp1.capacity()<<endl;
    
    std::cout << "Erasing elements from a vector!\n";
    
    vector_erase();
    vector_comparison();
    vector_insert();
    vector_remove();
    find_and_remove();
    
    book_example();
    return 0;
}
