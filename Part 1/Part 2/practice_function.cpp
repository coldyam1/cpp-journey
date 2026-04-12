#include <iostream>
#include <string>


void roast(std::string name, int age){
    if (age < 18){
        std::cout << "You're too young to even here, go do homework! " << name;
    }
    else if(age >= 18 && age <= 30){
        std::cout << "You're young but still clueless! " << name; 
    }
    else{
        std::cout << "Yikes...you're getting old! "; 
    }

}


int main(){
    std::string name; 
    std::cout << "Enter your name: "; 
    std::cin >> name; 
    
    int age; 
    std::cout << "Enter your age: ";
    std::cin >> age; 
    roast(name, age); 
    return 0; 
}