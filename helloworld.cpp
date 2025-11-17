#include <iostream>
#include <iomanip>

// define the global variables
double balance = 100.0;
double money = 2763.0;

// define the functions
void showBalance();
double deposit();
double withdraw();

// main function
int main(){

    // define your choice
    int choice;

    // welcome user
    std::cout << "Welcome to the C++ Bank!\n";

    // do all of this while user doesn't exit
    do {
        // show user their options
        std::cout << "************************\n";
        std::cout << "What do you want to do?\n";
        std::cout << "1. Show Balance\n" << "2. Deposit Money\n" << "3. Withdraw Money\n" << "4. Exit Bank\n";
        std::cout << "> ";
        std::cin >> choice;
        std::cout << '\n';

        // know what to do in each situation of the choice
        switch(choice){
            case 1:
                showBalance();
                break;
            case 2:
                deposit();
                break;
            case 3: {
                withdraw();
                 break;
            }
            case 4:
                std::cout << "Thanks for visiting!\n";
                break;
            
            default:
                std::cout << "Invalid choice.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

// show balance function
void showBalance(){
    // notify the user their balance and money
    std::cout << "Your balance is currently $" << std::setprecision(2) << std::fixed << balance << ".\n" << '\n';
    std::cout << "You have $" << std::setprecision(2) << std::fixed << money << " dollars.\n" << '\n';
}

// deposit function
double deposit(){
    double amount;

    // ask user for deposit amount
    std::cout << "How much would you like to deposit?\n" << "> ";
    std::cin >> amount;

    if (amount <= 0 || amount > money){
        std::cout << "Invalid deposit amount.\n\n";
        return 0.0;
    }
    else {
        money -= amount;
        balance += amount;
        std::cout << "Deposited $" << std::fixed << std::setprecision(2) << amount << ".\n";
        showBalance();

        // give the deposit amount to the function caller
        return amount;
    }
}

// withdraw function
double withdraw(){
    // define withdraw amount
    double amount_w;

    // ask user for withdraw amount
    std::cout << "How much will you be withdrawing?\n" << "> ";
    std::cin >> amount_w;

    if (amount_w <= 0 || amount_w > balance){
        std::cout << "Invalid withdraw amount.\n\n";

        // return nothing back to the function caller
        return 0.0;
    }
    else {
        money += amount_w;
        balance -= amount_w;
        std::cout << "Withdrew $" << std::fixed << std::setprecision(2) << amount_w << ". \n\n";
        std::cout << "Dollars: $" << std::fixed << std::setprecision(2) << money << ".\nBalance: $" << std::fixed << std::setprecision(2) << balance << ".\n\n";
        
        // give the withdraw amount back to the function caller
        return amount_w;
    }
}

/*  i did not use ai for this, please do not think it is ai
    just because of the comments, bad coding, and chatgpt-like text.
    cant a human do that too? cant a human add comments for people to understand the code?
    cant a beginner C++ programmer write bad-looking code?
    and cant a human write text similar to how ai writes?

    either way, thank you for reading all of this i wrote, and goodbye!
    may God bless you all a ton!
*/
