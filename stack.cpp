#include <bits/stdc++.h>
  
using namespace std;
  
#define MAX 2
  
class Stack {
    int top;
  
public:
     // Maximum size of Stack
  int a[MAX];
       
    Stack() {
         top = -1; 
    }
    void push(int x){
    if (top <= MAX) {
        top++;
        a[top] = x;
        cout << x << " pushed into stack\n";
       /** return true;
        cout << "\nStack Overflow\n\n";
        return false;
    }
    else {     cout << "\nStack Overflow\n\n";
        return false;
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
   **/ }
}
    int pop(){
    if (top < 0) {
        cout << "Stack Underflow";
        return -1;
    }
    else {
        int x = a[top];
        top--;
        return x;
    }
}
    int peek(){
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
    bool isEmpty(){
        if(top<0)
            return 1;
        else return 0;
}
};
  
/**bool Stack::push(int x){
    if (top >= (MAX-1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
  
int Stack::pop(){
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek(){
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
  
bool Stack::isEmpty(){
    return (top < 0);
}
 **/ 
// Driver program to test above functions
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    
    //print top element of stack after poping
    cout << "Top element is : " << s.peek() << endl;
    
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
  
    return 0;
}