#include<iostream>
#include<stack>

using namespace std;

int main(){

     stack <int> age;
    int i,k;
    cin>>k;


    for(i=0;i<k;i++)
        age.push(rand());

    
    cout<<"Size of your Stack is: "<<age.size()<<"\n";
    
    while(!age.empty()){
        cout<<" "<<age.top()<<endl;
        age.pop();
    }

    return 0;
}