/*
    Author: Cold Id-deen
    Date: 4-10-2026
    Activity: Build a C++ Program for the ATM Machine at the entry level that was given an task by 
    Claude AI. 
*/

#include <iostream>
#include <string>


int main(){ /* Starting point */
    std::string name; /* Store the name.  */
    std::cout << "What is your full name? "; /* Ask the user to input their name. */
    std::getline(std::cin, name);  /* Show the full name on the screen after inputing. */

    std::cout << "Hello, " << name << "!" << std::endl; /* Greet the user by using their name. */
    std::cout << "Welcome to the ATM Bank, " << name << "!" << std::endl;  /* Make the user feel welcome by entering the ATM Bank. */


    int transactions = 1; 
    while (transactions == 1){
        double balance; /* Make the "Balance" as variable so the user can put the amout of the balance */
            std::cout << "Enter your balance: "; /* Ask the user to input their balance.  */
            std::cin >> balance; 

        double withdraw;
            std::cout << "Enter withdrawl amount: ";
            std::cin >> withdraw;
        const double LIMIT = 1000; 
        
        if (withdraw <= balance && withdraw <= LIMIT){
             std::cout << " Done! The remaining balance: " << balance - withdraw << std::endl; 
        }
        else{
            std::cout << "Insufficient funds OR You are over the limit of withdrawing of $1000 "; 
        }
        
        std::cout << " Another transaction? (1 = Yes, 0 = No:) "; 
        std::cin >> transactions;

     }
        std::cout << "Goodbye, " << name << "!" << std::endl;
       
    return 0; 
}
   