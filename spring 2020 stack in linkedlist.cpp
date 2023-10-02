#include<iostream>
#include<stack>

using namespace std;

struct Node{
    int data;
    Node* next;
};

class IntStack{
    int top;
    Node* head;

    public:
        IntStack(){
            top = -1;
            head = NULL;
    }

    void insert(int x){
        Node* cur;
        cur = new Node();
        cur->data = x;
        cur->next = NULL;
        top++;
        top=cur->data;

        if(head==NULL)
            head = cur;
        else{
            Node* temp;
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next=cur;
        } 
        cout<<top<<endl;
    }

    int pop(){
        if(top<0)
            return -1;
        else{
            Node *temp;
            temp =head;

            while(temp->next->next!=NULL)
                temp =temp->next;
            Node* lastNode;
            lastNode = temp->next;
            temp->next = NULL;
            top = temp->data;
            return lastNode->data;
            free(lastNode);

            if(head == NULL)
                top--;

        }
    }

    bool isEmpty(){
        if(head == NULL)
            return 1;
        else return 0;
    }
    
};

int main(){
    IntStack s;

    for(int i=1 ;i<=0;i++){
        s.insert(i*10);
    }

    int k = s.pop();
    cout<<k<<endl;

    int l = s.isEmpty();
    cout<<l<<endl;
}
