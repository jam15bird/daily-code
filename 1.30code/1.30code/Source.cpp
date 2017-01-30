#include <iostream>
using namespace std;

int main() {
	double input1;
	double input2;
	cout << "how much do you have in your bank account?" << endl;
	cin >> input1;
	cout << "how much money do you want to withdraw from your bank account??" << endl;
	cin >> input2;
	cout << "you have" << (input1 - input2) << "!!!" << endl;
}