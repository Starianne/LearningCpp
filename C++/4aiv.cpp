#include <iostream>
using namespace std;

int main()
{
    int secs, totalMins, totalSecs;
    cout << "Enter a large number of seconds" << endl;
    cin >> secs;
    totalMins = secs / 60;
    totalSecs = secs % 60;
    cout << "Total is: " << totalMins << " minutes and " << totalSecs << " seconds.";
}