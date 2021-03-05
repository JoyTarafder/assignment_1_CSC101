#include <iostream>
using namespace std;

int main()
{
    int n,rev;
    cout << "Enter an four digit number: ";
    cin >> n;

    rev = (n%10)*1000 + ((n/10)%10)*100 + ((n/100)%10)*10 + (n/1000);
    cout << "Reversed number = " <<rev;
    return 0;
}
