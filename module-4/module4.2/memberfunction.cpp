#include <iostream>
#include <string>

class BankAccount {
private:
    std::string name;
    double balance;
public:
    // Constructor to initialize the name and balance
    BankAccount(std::string n, double b) {
        name = n;
        balance = b;
    }
    
    // Member function to assign a new name to the account
    void assignName(std::string n) {
        name = n;
    }
    
    // Member function to deposit an amount into the account
    void deposit(double amount) {
        balance += amount;
        std::cout << "Successfully deposited $" << amount << ". New balance is $" << balance << "." << std::endl;
    }
    
    // Member function to withdraw an amount from the account after checking balance
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Successfully withdrew $" << amount << ". New balance is $" << balance << "." << std::endl;
        } else {
            std::cout << "Error: Insufficient balance. Current balance is $" << balance << "." << std::endl;
        }
    }
    
    // Member function to display the name and balance of the account
    void display() {
        std::cout << "Account name: " << name << std::endl;
        std::cout << "Current balance: $" << balance << std::endl;
    }
};

int main() {
    // Create a new bank account with initial balance of $1000 and name "maulik "
    BankAccount account("maulik", 1000);
    
    // Display initial account details
    account.display();
    
    // Deposit $500 into the account
    account.deposit(500);
    
    // Withdraw $200 from the account
    account.withdraw(200);
    
    // Change the account name to "Jane Smith"
    account.assignName("maulik m. mendpara");
    
    // Display updated account details
    account.display();
    
    return 0;
}
