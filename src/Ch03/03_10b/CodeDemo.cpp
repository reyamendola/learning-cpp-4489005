// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty",6,cow_purpose::meat));
    cattle.push_back(cow("Cloud",7,cow_purpose::dairy));
    cattle.push_back(cow("America",8,cow_purpose::pet));
    cattle.push_back(cow("Taaia",9,cow_purpose::hide));

    //iterators (eg .begin()) are pointers, so access class members with ->
    std::cout<<"The first cow is "<<cattle.begin()->get_name()<<std::endl;
    //cattle[1] is an object, not an iterator, so use dot notation
    std::cout<<"cow at index 1 is "<<cattle[1].get_name()<<std::endl;
    // prev format is prev(iterator,number of indices to go back)
    std::cout<<"The next to last cow is "<<prev(cattle.end(),2)->get_name()<<std::endl;
    // .end()returns an index one beyond the last index, which is outside the vector.
    // note that (cattle.end()-1) is equivalent to prev(cattle.end(),1)
    std::cout<<"The last cow is "<<(cattle.end()-1)->get_name()<<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
