bool equals(int n, int s) {
	if (s < 0) {
		return false;
	}

	if (n < 0) {
		n = -n;
	}
	if (n == s) {
		return true;
	}
	if (n == 0 || s == 0) {
		return false;
	}

	int digit = n % 10;
	return equals(n / 10, s - digit);
}