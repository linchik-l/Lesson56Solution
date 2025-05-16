int sum_all_elements(int* array, int size) {
	if (array == nullptr || size < 0) {
		return 0;
	}

	if (size == 1) {
		return array[0];
	}

	return array[size - 1] + sum_all_elements(array, size - 1);
}