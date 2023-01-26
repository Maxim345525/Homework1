#include<iostream>
using namespace std;
int main()
{
	int UAH, kop, p;
	cout << "Enter UAH:";
	cin >> UAH;
	cout << "Enter kop:";
	cin >> kop;
	p = kop % 100 + UAH;
	cout << "Pravilno:" << p << endl;
	system("pause");
}