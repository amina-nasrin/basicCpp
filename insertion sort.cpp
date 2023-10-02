#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
	int minimum;
	for (int i = 0; i < size-1; i++){
		minimum =i;

		for (int j = i+1; j < size; j++){
		if(arr[j]<arr[minimum]){
			minimum = j;
		}
		}swap(arr[minimum], arr[i]);
	}
}

void printArray(int arr[], int n){
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, N);
	printArray(arr, N);

	return 0;
}
// This is code is contributed by rathbhupendra
