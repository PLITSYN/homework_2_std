#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (!(a == b || b == c || a == c)) {
		cout << "0" << endl;
	}
	if (a == b && b == c && a == c) {
		cout << "3" << endl;
	}
	else if (a == b || b == c || a == c) {
		cout << "2";
	}
	cin.get();
	cin.get();
	return 0;
}