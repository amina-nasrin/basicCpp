#include<iostream>

using namespace std;

void bubbleSort(int arrb[], int size){
    int i,j;
    
    for(i=0;i<size-1;i++)
        for(j=0;j<size-i-1;j++){
            if(arrb[j]>arrb[j+1])
                swap(arrb[j], arrb[j+1]);
        }
}

int main(){
    int size;
    cin>>size;
    int i, j, arr[size];

    for(i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Before Sort:\n";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";

    bubbleSort(arr, size);

    cout<<"\nAfter Sort:\n";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";    
}