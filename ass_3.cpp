#include <iostream>
using namespace std;

int main()
{
    int n,sum;
    cout << "Enter an five digit number: ";
    cin >> n;

    sum = (n%10) + (n/10)%10 + (n/100)%10 + (n/1000)%10 + (n/10000)%10;
    cout << "The sum of digits = " <<sum;
    return 0;
}
