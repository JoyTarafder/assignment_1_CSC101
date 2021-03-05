#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount to be dispatched: ";
    cin >> amount;

    cout << "Number of notes required of 1000 denomination:  " << amount / 1000 <<endl;
    cout << "Number of notes required of  500 denomination:  " << (amount%1000)/500 <<endl;
    cout << "Number of notes required of  100 denomination:  " << ((amount%1000)%500)/100 <<endl;
    cout << "Number of notes required of   50 denomination:  " << (((amount%1000)%500)%100)/50 <<endl;
    cout << "Number of notes required of   20 denomination:  " << ((((amount%1000)%500)%100)%50)/20 <<endl;
    cout << "Number of notes required of   10 denomination:  " << (((((amount%1000)%500)%100)%50)%20)/10 <<endl;
    cout << "Number of notes required of    5 denomination:  " << ((((((amount%1000)%500)%100)%50)%20)%10)/5 <<endl;
    cout << "Number of notes required of    1 denomination:  " << (((((((amount%1000)%500)%100)%50)%20)%10)%5)/1 <<endl;
    return 0;
}
