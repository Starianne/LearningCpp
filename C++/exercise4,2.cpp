#include <iostream>
using namespace std;

int main()
{
  int numItems, sizeBox;
  cout << "Enter the number of items and the number of items that can fit in a box" << endl;
  cin >> numItems;
  cin >> sizeBox;
  cout << "The amount boxes you will need is: " << numItems / sizeBox << endl;
  cout << "and the amount of items left over will be: " << numItems % sizeBox;

}