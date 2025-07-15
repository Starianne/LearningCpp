#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 2 numbers: " << endl;
    cin >> num1 >> num2;
    cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
    cout << "The remainder of " << num1 << " and " << num2 << " is " << num1 % num2 << endl;
    return 0;
}