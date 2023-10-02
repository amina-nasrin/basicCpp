#include<iostream>
using namespace std;

int main(){
    int input=7;
   for(int row=1; row<=input; row++){
    for(int space=input; space>row; space--){
        cout<<" ";
    }
    for(int star=1; star<=(2*row-1); star++){
        cout<<"*";
    }
    cout<<"\n";
   }
}