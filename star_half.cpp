#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        for(int star =1; star<=i; star++){
            cout<<"*";
        }
        cout<<"\n";
    }
}