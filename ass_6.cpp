#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount to be dispatched: ";
    cin >> amount;

    cout << "Number of 1000 notes: " << amount / 1000 <<endl;
    cout << "Number of 500 notes: " << (amount % 1000)/500 <<endl;
    return 0;
}
