#include <iostream>
using namespace std;

int main()
{
    int min, sec, min2, sec2, totalMin, totalSec;
    cout << "Enter a period of time (min,sec): " << endl;
    cin >> min >> sec;
    cout << "Enter a period of time (min,sec): " << endl;
    cin >> min2 >> sec2;
    totalMin = min + min2 + (sec+sec2)/60;
    totalSec = (sec + sec2)%60;
    cout << "Total time is: " << totalMin << " minutes and " << totalSec << " seconds.";


}