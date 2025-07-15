#include <iostream>
using namespace std;

int main()
{
    int far,cel;
    cout << "Enter the temperature in Fahrenheit: " << endl;
    cin >> far;
    cel = 5*(far-32)/9;
    cout << "In celsius that is: " << cel << endl;
}