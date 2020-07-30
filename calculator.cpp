#include<iostream>
using namespace std;
class calculator {
public:
	int add() {
		int a = 10,
		 b = 20;
		int c = a + b;
		return(c);
	}
	int sub() {
		int a = 10, b = 20;
		int c = a - b;
		return(c);
	}
};
int main() {
	calculator obj1;
	int res_add = obj1.add();
	int res_sub = obj1.sub();
	cout << res_add;
	cout << res_sub;
}
