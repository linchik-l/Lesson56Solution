#include <iostream>
using namespace std;

bool equals(int, int);

int main() {
	int n, s;

	cout << "Input first number: ";
	cin >> n;

	do {
		cout << "Input second number: ";
		cin >> s;
	} while (s < 0);

	cout << "Result: " << (equals(n,s) ? "yes" : "no") << endl;
	return 0;
}