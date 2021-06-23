//read here
// so the idea is the client wnats to know how long does it take for his/her mobile to fully charge and if they want n% charge then it will take them 0+1+...n (min)
// i know this programm dose not function for all situations but the idea was overloading and learning class -_*
#include <iostream>
#include <stdlib.h>
using namespace std;
class mobilecharge {
	friend istream& operator>>(istream&, mobilecharge&);// overloads cin
	
	int sum=0;
	int mobilecharge;
public:
	int charge();
	void input();


};
int mobilecharge::charge() {
	if (mobilecharge >100) {
		cout << "you cant reach more than 100% charge" << endl;

	}
	else {
		for (int x = 0; x <= mobilecharge; x++) {
			sum = sum + x;
		}
		return sum;
	}
};


int main()
{
	int result;
	mobilecharge number;
	cin >> number;
	cout << number.charge();
	number.charge();
//input 3----->result=6;
//input 100----->result=5050;
	return 0;

};
istream& operator>>(istream& p1, mobilecharge& p2) {
	cout << "enter the mobile charge" << endl;
	p1 >> p2.mobilecharge;
	
	return p1;

};
