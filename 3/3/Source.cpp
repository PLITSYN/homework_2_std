#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b && a > c) {
		cout << a;
	}
	if (b > a && b > c) {
		cout << b;
	}
	if (c > b && c > a) {
		cout << c;
	}
	cin.get();
	cin.get();
	return 0;
}