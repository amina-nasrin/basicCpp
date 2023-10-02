#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        int space=i;
        while(space<5){
            cout<<" ";
            space++;
        }
        for(int star=1; star<=i; star++){
            cout<<"*";
        }
        cout<<"\n";
    }
}