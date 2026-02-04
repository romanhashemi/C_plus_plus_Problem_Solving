#include <iostream>
using namespace std;


int add(int a, int b) 
{
    return a + b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int subtract(int a, int b) 
{
    return a - b;
}


int divide (int a, int b) 
{
    if (b == 0) 
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}


int main() 
{
    int choice;
    while (true) 
    {
        cout << "Select operation:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        if (choice == 5) 
        {
            break;
        }

        int num1, num2;
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
        
        switch (choice) 
        {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }



    return 0;
}