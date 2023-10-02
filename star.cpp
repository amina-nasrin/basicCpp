#include<iostream>
using namespace std;

int main(){
    int i,j,k;

    cin>>j;
    for(i=j;i>0;i--){
        for(k=1;k<i;k++){
            cout<<" ";
     }  

    while((k-1)!=j) {
        cout<<"*";
        k++;
    }
    cout<<"\n";
    } 
    

}