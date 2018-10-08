#include <iostream>
using namespace std;

int main() {
	int a, b, n, o;
	cin >> a;
	cin >> b;
	cin >> n;
	o = 0;
	b = b * n;
	if (b > 99) {
		o = b / 100;
		b = b - (o * 100);
	}
	a = a * n;
	a = a + o;
	cout << a << " " << b;
	cin.get();
	cin.get();
	return 0;
}