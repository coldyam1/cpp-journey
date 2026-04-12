/*
    Author: Cold Id-deen
    Date: 4-12-2026
    Activity: The practical midterm was given by Cladue AI that I had to build the C++ program;
    For the Student Registration System: 

    The orginal grade based on this was C+ 
    *Revised*
    Now current based on (A) 90/100.

*/

#include <iostream>
#include <string>


/*
    Set the function to show the display info with the name, age and ID:
    With that, ask the user to type their name, age, and ID before going into the requirement of the age. 
*/
void displayInfo(std::string name, int age, int ID){
    std::cout << "Name: " << name << std::endl; 
    std::cout << "Age: " << age << std::endl; 
    std::cout << "ID: " << ID << std::endl; 
}

/*
    Set the function to set the Eligibity that only 18 years and above can be eligibe to enroll the RIT.
    Otherwise, if they're under 18, reject them to prevent the users to enroll the RIT.
*/
void checkEligibility(int age){
    if (age >= 18 ){
        std::cout << "Status: Eligibe to enroll! Welcome to the RIT! "; 
    }
    else{
        std::cout << "Status: Too young to enroll! Rejected! "; 
    }
       

}

/*
    In the int main, ask the user:
    Name
    Age
    ID
    then call the functions to check the valid requiremnts and age to see if they're to be able Eligibe or not.
*/
int main(){
    std::string name;
    std::cout << "What's your name?: "; 
    std::cin >> name; 

    int age; 
    std::cout << "What's your age?:  ";
    std::cin >> age; 

    int ID; 
    std::cout << "What's your student ID?: ";
    std::cin >> ID; 
    
    displayInfo(name, age, ID); 
    checkEligibility(age);

    return 0; 
}