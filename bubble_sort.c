#include <stdio.h>
#define LEN(x) (sizeof(x)/sizeof(typeof(x[0])))

typedef enum{
	false = 0,
	true = 1
} bool;

void swap(int*, int*);
void bubbleSort(int [], int);
void printSortedArray(int [], int);

int main(void){
	int a[10] = {61,46,76,14,91,29,60,9,24,77};
	bubbleSort(a, LEN(a));
	printSortedArray(a, LEN(a));
	return 0;
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int size){
	bool flag = false;
	--size;//Avoid accessing memory out of bound.
	for (int i = 0;i < size;++i){
		for (int j = 0;j < size-i;++j)
			if (arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
				flag = true;
			}
		if (!flag)
			break;
		flag = false;
	}

}

void printSortedArray(int arr[], int size){
	for (int i=0; i < size; ++i)
		printf("%d\n", arr[i]);
}
