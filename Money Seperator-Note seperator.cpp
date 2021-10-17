#include <iostream>
using namespace std;
int main()
{
	int amount,five_hnd,one_hnd,ten_rs,one_rs;
	cout << "Enter the total amount: \n";
	cin >> amount;
	five_hnd = amount / 500;
	amount = amount - (five_hnd * 500);
	one_hnd = (amount / 100);
	amount = amount - (one_hnd * 100);
	ten_rs = (amount / 10);
	amount = amount - (ten_rs * 10);
	one_rs = (amount / 1);
	cout << "500 notes= " << five_hnd << endl << "100 notes= " << one_hnd << endl << "10 RS notes= " << ten_rs << endl<<"1 Rs notes= "<<one_rs;
	return 0;
}