#include <iostream>
using namespace std;

long long power(int x, int n);

int main() {
	int x;
	int n;

	cout << "Input number: ";
	cin >> x;

	do {
		cout << "Input n: ";
		cin >> n;
	} while (n < 0);

	cout << x << "^" << n << " = " << power(x, n) << endl;
	return 0;
}