#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balanceAmount;

public:
    // Constructor
    BankAccount(string name, int accountNum, string type, double balance) {
        depositorName = name;
        accountNumber = accountNum;
        accountType = type;
        balanceAmount = balance;
    }

    // Getters
    string getDepositorName() {
        return depositorName;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getAccountType() {
        return accountType;
    }

    double getBalanceAmount() {
        return balanceAmount;
    }

    // Setters
    void setDepositorName(string name) {
        depositorName = name;
    }

    void setAccountNumber(int accountNum) {
        accountNumber = accountNum;
    }

    void setAccountType(string type) {
        accountType = type;
    }

    void setBalanceAmount(double balance) {
        balanceAmount = balance;
    }

    // Deposit and Withdraw methods
    void deposit(double amount) {
        balanceAmount += amount;
    }

    void withdraw(double amount) {
        if (balanceAmount < amount) {
            cout << "Insufficient balance." << endl;
        } else {
            balanceAmount -= amount;
        }
    }

    // Display account information
    void displayAccountInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance Amount: " << balanceAmount << endl;
    }
};

int main() {
    // Creating a new BankAccount object and initializing it with values
    BankAccount myAccount("maulik", 123456, "Savings", 1000.0);

    // Displaying account information
    myAccount.displayAccountInfo();

    // Depositing and Withdrawing amounts
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying updated account information
    myAccount.displayAccountInfo();

    return 0;
}
