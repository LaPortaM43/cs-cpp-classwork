// InvestmentCalc.cpp
// Matthew LaPorta, s1359142

#include <iostream> 
#include <iomanip> 
using namespace std; 


/*

Interest rate is 5 percent
Current balance is $1000 
Initial balance - 1000 * 5% + 10000 

*/


int numberOfYears(double& accountBalance, double interestRate, 
double investmentGoal) { 

    int numOfYears = 0; 

    while (accountBalance != investmentGoal) {
        if (accountBalance <= investmentGoal) {
            accountBalance = accountBalance * interestRate + accountBalance; 
            numOfYears = numOfYears + 1; 
            continue;
        }
        else if (accountBalance >= investmentGoal) {
            break;
        }
    }
    return numOfYears;

}


int main() {

    double currentBalance = 1000;
    cout << "Number of years required for investment goal: " << numberOfYears(currentBalance, 0.05, 1500) << endl;
    cout << "The current balance: " << currentBalance << endl;
    return 0;

}