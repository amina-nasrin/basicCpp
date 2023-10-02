#include<iostream>
#include<stack>

#define MAX 5;

using namespace std;

class IntStack{

    public:
    stack <int> a;

    void push(int x){
            a.push(x);
            cout<<"Stack Element "<<a.top()<<endl;
    }
/**
    int pop(){
        if(a.empty())
            return -1;
        else  {
            cout<<a.top();
            return (a.pop());
            cout<<" is popped\n";
        }
    }**/

    int pop(){
        if(a.empty())
            return -1;
        else {
            return (a.top());
            a.pop();
        }
    }

    bool isempty(){
        if(a.empty())
            return 1;
        else return 0;
    }


};


int main(){

    IntStack s;
    s.push(8);
    s.push(9);

    int o = s.pop();
    cout<<o<<" is popped\n";

    int p = s.isempty();

    if(p)
    cout<<"\nEmpty";
    else cout<<"\nNot Empty";
}