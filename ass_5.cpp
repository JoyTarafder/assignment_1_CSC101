#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an five digit number: ";
    cin >> n;

    cout << "Number after incrementing each digit = " ;
    cout <<(n/10000)+1<<((n/1000)%10)+1<<((n/100)%10)+1<<((n/10)%10)+1<<(n%10)+1;
    return 0;
}
