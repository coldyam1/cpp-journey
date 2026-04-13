/*
    Author: Cold Id-deen
    Date: 4-12-2026
    Activity: Practice using Pointer by using C++.
*/

#include <iostream>
#include <string>

int main(){
  int tmp = 98; 
  int* ptr = &tmp; 

  std::cout << "Temperature value: " << tmp << std::endl;
  std::cout << "Memory address: " << ptr << std::endl; 
  std::cout << "Value via pointer: " << *ptr << std::endl; 
  
  return 0;
}



