#include <iostream>
using namespace std;

int main ()
{
    int far;
    cout << "Enter the temperature in Fahrenheit: " << endl;
    cin >> far;
    cout << "In celsius that is: " << 5*(far-32)/9 << endl;
}