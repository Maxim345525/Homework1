#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "Year:";
	cin >> year;
	cout << (year % 4 == 0) + 365;
	return 0;
}