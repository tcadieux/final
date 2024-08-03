// Final Exam
/* Todo Program Info */

#include <iostream> // input and output
#include <string>   // std::string
#include <iomanip>  // setprecision

#include "myfuncts.h"
int main()
{
    // Local Variables 
    double balance = 100.00;
    std::string purchasePrompt = "\nEnter cost of the item: ";

    // Print starting balance value
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Starting Balance: $" << balance << std::endl;
  
    // Withdraw funds and determine if overdrawn or not
    double amount = inputCostOfItem(purchasePrompt);
    if( ! validatePurchase(balance, amount) ) {
        std::cout << "\nAccount Overdrawn.\n";
    }
    else {
        std::cout << "\nFunds available.\n";
    }

    // Print final balance value
    std::cout << "Final Balance: $" << balance << "\n\n";
    return 0;
}

