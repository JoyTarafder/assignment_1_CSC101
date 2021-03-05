#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter any alphabet in uppercase: "; 
    cin>>ch;
    
    ch = ch + 32;
	cout<<"In lowercase it is "<<ch;
	return 0;
}