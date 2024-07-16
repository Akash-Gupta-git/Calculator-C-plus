#include <iostream>
#include <limits>
using namespace std;

void calculateFun(int num1, int num2) {
    char symbol;
    int result;
    cout << "Enter you choice :\n"
                "\tfor ADD         '+'\n"
                "\tfor SUBTRACT    '-'\n"
                "\tfor MULTIPLY    '*'\n"
                "\tfor DIVISION    '/'\n"
                "\tfor MODULO      '%'\n";


    // cout << "\n\nEnter what you want\n\t ('+', '-', '*', '/', '%'): " << endl;
    cout << "\nChoose one: \t";
    cin >> symbol;

    // Check for valid input
    if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/' && symbol != '%') {
        cout << "Invalid symbol!" << endl;
        return;
    }
    

    // Use a switch statement for efficiency and clarity
    switch (symbol) {
        case '+':
             result = num1 + num2 ;
            break;
        case '-':
             result = num1 - num2 ;
            break;
        case '*':
            result = num1 * num2 ;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Division by zero error!" << endl;

            } else {
                 result = num1 / num2 ;
            }
            break;
        case '%':
            if (num2 == 0) {
                cout << "Modulo by zero error!" << endl;
            } else {
                result = num1 % num2 ;
            }
            break;
    }
            cout << "----------------------------------"<<endl;
            cout << "\tResult is : "<<result<<endl;
            cout << "----------------------------------\n\n"<<endl;
}

int main() {
  system("cls");
  cout << "\n\n\t\t==========&-Akash-Calculator-Zone-&&===========\n\n";
    int num1 , num2;
     cout << "Enter number 1: \t";
    while (!(cin >> num1)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter number 2: \t";
    while (!(cin >> num2)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    calculateFun(num1, num2);

    return 0;
}