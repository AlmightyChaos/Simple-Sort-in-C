#include <stdio.h>
#define LEN(x) (sizeof(x)/sizeof(typeof(x[0])))
void swap(int*, int*);
void insertionSort(int [], int);
void printSortedArray(int [], int);

int main(void){
	int a [] = {17,55,91,86,75,35,31,43,36,67};
	insertionSort(a, LEN(a));
	printSortedArray(a, LEN(a));
	return 0;
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void insertionSort(int arr[], int size){
	for (int i = 0;i < size;++i)
		for(int j = i;j > 0;--j)
			if(arr[j] < arr[j-1])
				swap(&arr[j], &arr[j-1]);
			else
				break;
}

void printSortedArray(int arr[], int size){
	for(int i = 0;i < size;++i)
		printf("%d\n", arr[i]);
}
