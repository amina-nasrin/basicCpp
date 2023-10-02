#include<iostream>
using namespace std;
int main(){
    for(int row=1; row<=5; row++){
        for(int space=5; space>row; space--){
            cout<<" ";
        }
        for(int star=1; star<=(2*row-1); star++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}