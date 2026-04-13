/*
    Author: Cold Id-deen
    Date: 4-12-2026
    Activity: The task was given by Claude AI to help me practice using Arrays which is for Student roster.
*/

#include <iostream>
#include <string>

void displayBooks(std::string bookTitles[], double book_prices[]){
    for(int i = 0; i < 3; i++){
        std::cout << i + 1 << "." << bookTitles[i] << "$" << book_prices[i] << std::endl;
    }

}


double findCheapest(double prices[]){
    double cheapest = prices[0];

    for(int i = 0; i < 3; i++){
        if(prices[i] < cheapest){
             cheapest = prices[i];
        }
    }
    return cheapest;
   
}


int main(){
    std::string bookTitles[3] = {" C++ Programming - ", " Linux Basics - ", " Network Security - "}; 
    double book_prices[3] = {29.99, 19.99, 39.99}; 
    double cheapest = findCheapest(book_prices);
    std::cout << "Cheapest book: $" << cheapest << std::endl;
    displayBooks(bookTitles, book_prices);

    return 0; 
}