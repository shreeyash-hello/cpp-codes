#include<iostream>
using namespace std;
int main() {
	float num1, num2, num3;
	cout << "enter the three numbers  ";
	cin >> num1 >> num2 >> num3;
	if (num1 >= num2 && num1 >= num3) {
		cout << "largest number :" << num1;
	}
	if (num2 >= num1 && num2 >= num3) {
		cout << "largest number :" << num2;
	}
	if (num3 >= num1 && num3 >= num2) {
		cout << "largest number :" << num3;
	}
	return 0;
}
