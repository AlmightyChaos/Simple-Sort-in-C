#include<stdio.h>
#define LEN(x) (sizeof(x)/sizeof(typeof(x[0])))

void swap(int*, int*);
void selectionSort(int [], int);
void printSortedArray(int [], int);


int main(void){
	int a[10] = {18,74,99,76,7,27,28,71,60,92};

	selectionSort(a, LEN(a));
	printSortedArray(a, LEN(a));
	return 0;
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int arr[], int size){
	int pos, min;
	for (int i = 0;i < size;++i){
		min = 0x7FFFFFFF;
		for (int j = i;j < size;++j){
			if (arr[j] < min){
				min = arr[j];
				pos = j;
			}
		}
		swap(&arr[i], &arr[pos]);
	}
}



void printSortedArray(int arr[], int size){
	for (int i=0; i < size;++i)
		printf("%d\n", arr[i]);
}
