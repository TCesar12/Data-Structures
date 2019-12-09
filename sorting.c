#include <stdio.h>

void sort_array(int array[], int arr_len);
void print_array(int array[], int arr_len);

int main(int argc, char const *argv[])
{
	int array[] = {12,92,7,30,26,89};
	int arr_len = sizeof(array) / sizeof(int);
	print_array(array, arr_len);
	sort_array(array, arr_len);
	print_array(array, arr_len);
	return 0;
}

void sort_array(int array[], int arr_len) {
	int i, j;
	int num;

	for (j=1; j < arr_len; j++) {
		num = array[j];
		i = j - 1;

		while (i >= 0 && array[i] > num) {
			array[i + 1] = array[i];
			i--;
		}

		array[i + 1] = num;
	}
}

void print_array(int array[], int arr_len) {
	int i;

	for (i = 0; i < arr_len; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}