#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3;
    
    // Input three numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    // Calculate the average
    double average = (num1 + num2 + num3) / 3.0;
    
    // Print the average
    cout << "Average is = " << average << endl;
    
    return 0;
}
