#include<iostream>
using namespace std;

void sel(int arr_new[], int size){
    int min_index=0;

    for(int i=0;i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr_new[min_index]>arr_new[j])
                min_index = j;

            if(min_index != i)
                swap(arr_new[min_index], arr_new[i]);
        }
    }
}

int main(){
    int a[5] = {5, 4, 3, 2, 1};

    sel(a, 5);

    for(int i=0; i<5; i++)
        cout<<a[i]<<" ";

}