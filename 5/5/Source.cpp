#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		cout << "YES";
	}
	else cout << "NO";
	cin.get();
	cin.get();
	return 0;
}