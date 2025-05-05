#define SIZE 300000
#define SEED 12345
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int a[SIZE];
void insertion_sort(int arr[], int size);

int main() {
	time_t start, end;

	srand(SEED);
	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 500000 + 1;

	start = clock();

	insertion_sort(a, SIZE);

	end = clock();

	double time = (double)(end - start) / CLOCKS_PER_SEC;

	cout << "������ ���� �� a[99999] : " << a[99999] << "\n";
	cout << "����ð� : " << time << "��";
}

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			int res = arr[j];

			if (res < arr[j - 1]) {
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}