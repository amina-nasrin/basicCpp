#include<iostream>
using namespace std;

int Partition(int arrP[], int startP, int endP){
    int pivot = arrP[endP],i;
    int pIndex = startP;

    for(i=startP;i<endP;i++){
        if(arrP[i]<pivot){
            swap(arrP[i], arrP[pIndex]);
            pIndex++;
        }
    }

    swap(arrP[endP], arrP[pIndex]);

    return pIndex;
    
}

int QuickSort(int arrb[], int start, int end){
    if(start<end){
        int p = Partition(arrb, start, end);
        QuickSort (arrb,start,(p-1));
        QuickSort(arrb, (p+1),end);
    }
    return 1;
}

int main(){
    int size = 0, i;
    cout<<"Size of the datasize: ";
    cin>>size;
    int  arr[size];
    cout<<"Input Elements: ";
    for(i=0;i<size;i++)
        cin>>arr[i];

    cout<<"Before Sort:\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";

    QuickSort(arr,0, size-1);

    cout<<"\nAfter Sort:\n";
    for(i=0;i<size;i++)
        cout<<arr[i]<<" ";
}