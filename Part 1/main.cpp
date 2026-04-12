#include <iostream>
#include <string> 

/* 
    This task was given by Claude AI to help me to understand how C++ works at the entry level.
    So with that, I was able to build the basic C++ program to build the personal Info Card.
    So it was sucessfully! Proud of me. 
*/

int main() {
    std::string name = "Kemoy"; 
    std::cout << "Student: " << name << std::endl; 
    
    int grade = 95; 
    std::cout << "Grade: " << grade << std::endl; 



    if (grade >= 50){
        std::cout << "Passed: " << "Yes" << std::endl; 
    }
    else{
        std::cout << " Passed: " << "No" <<  std::endl; 
    }
    return 0; 
}
