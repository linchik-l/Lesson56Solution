long long power(int x, int n) {
	if (n < 0) {
		return 0;
	}

	if (n == 0) {
		return 1;
	}

	return x * power(x, n - 1);
}