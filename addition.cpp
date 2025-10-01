#include <iostream>
using namespace std;
 
int main() {
    cout << "===== Addition of Two Numbers =====" << endl;
    int num1, num2, sum;
    std::cout<<"for subnumber branch"<<std::endl;
    // Get input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // Calculate sum
    sum = num1 + num2;
    // Display result
    cout << "\nResult: " << num1 << " + " << num2 << " = " << sum << endl;
    return 0;
}