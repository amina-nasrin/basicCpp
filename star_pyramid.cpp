#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=5; i++){
        int space=i;
        while((5-space) >0){
            cout<<" ";
            space++;
        }
        for(int j=0;j<(2*i-1); j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}