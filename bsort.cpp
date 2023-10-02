#include<iostream>
using namespace std;

void bubblesort(int arr_me[], int size){
    for(int i=0; i<size; i++)
        for(int j=0; j<(size-i-1); j++){
            if(arr_me[j]>arr_me[j+1])
                swap(arr_me[j], arr_me[j+1]);
        }
}

int main(){
    int s=5, a[s] = {9, 8, 5, 1, 0};
    
    bubblesort(a, 5);

    for(int i=0; i<s; i++)
            cout<<a[i]<<"\n";
    
}