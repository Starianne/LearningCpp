#include <iostream>
using namespace std;

int main()
{
    int min, sec, min2, sec2, totalMins, totalSecs;
    cout << "Enter a period of time (min,sec): " << endl;
    cin >> min >> sec;
    cout << "Enter a period of time (min,sec): " << endl;
    cin >> min2 >> sec2;
    totalMins = min + min2;
    totalSecs = sec + sec2;
    cout << "Total time is: " << totalMins << " minutes and " << totalSecs << " seconds." << endl;
    return 0;
}