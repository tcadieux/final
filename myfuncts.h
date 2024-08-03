/* Ted Cadieux

Final Exam

Summary
*/



// guard

#ifndef MYFUNCTS_H
#define MYFUNCTS_H

#include <iostream>
#include <string>
#include <iomanip>


// Declare Functions
double inputCostOfItem(std::string);

bool validatePurchase(double, double);
// balance, amount

double itemCost;
// Define Functions
double inputCostOfItem(std::string prompt){
    std::cout << prompt;
    std::cin >> itemCost;
    return itemCost;
}

double amount = 0;
double balance = balance - amount;

bool validatePurchase(double balance, double amount){
    

    if(balance < 0){
        return true;
    }
    else{
        return false;

    }

    
}









#endif