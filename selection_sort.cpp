#define SIZE 300000
#define SEED 12345
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int a[SIZE];
void selection_sort(int arr[], int size);

int main() {
	time_t start, end;

	srand(SEED);
	for (int i = 0; i < SIZE; i++)
		a[i] = rand() % 500000 + 1;

	start = clock();

	selection_sort(a, SIZE);

	end = clock();

	double time = (double)(end - start) / CLOCKS_PER_SEC;

	cout << "������ ���� �� a[99999] : " << a[99999] << "\n";
	cout << "����ð� : " << time << "��";
}

void selection_sort(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		int min = i;

		for (int j = i; j < size; j++) {
			if (arr[j] < arr[min])
				min = j;
		}

		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}