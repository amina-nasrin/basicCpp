#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head, *temp;

    public:

    LinkedList(){
        head = NULL;
    }
    void push(int input){
        Node* cur;
        cur = new Node();
        cur->data = input;
        cur->next = NULL;

        if(head == NULL)
            head = cur;
        else{
            Node* temp;
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;
            temp->next = cur;
        }
    }

    void printList(){
        cout<<"\nPRINTING LIST\n";
        temp = head;
        while(temp->next!=NULL){
            cout<<temp<<"\t"<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<temp<<"\t"<<temp->data;
    }

    void del(int position){
        temp = head;
        if(position == 1){
            head = head->next;
            free(temp);
        } else{
            int j = 1;
            Node* beforeNode;
            do{
                beforeNode = temp;
                temp = temp->next;//3
                j++;//3
            } while(j != position);

            if(temp->next == NULL){
                beforeNode->next = NULL;
                free(temp);
            }
            else{
                Node* afterNode;
                afterNode = temp->next;
                beforeNode->next = afterNode;
                free(temp);
            }
        }
    }
};

int main(){
    LinkedList l;
    
    //l.push(10);
    int yes;
    cout<<"Enter 0 to terminate:\n";
    cin>>yes;
    
    while(yes!=0){
        l.push(yes);
        cin>>yes;
    } 

    cout<<"Print List? (0/1)";
    cin>>yes;
    if(yes==1)
        l.printList();

    cout<<"\nDelete? (0/1)";
    cin>>yes;
    if(yes=1)
        cout<<"Position: ";
    cin>>yes;
    l.del(yes);

    cout<<"Print New List? (0/1)";
    cin>>yes;
    if(yes==1)
        l.printList();

    cout<<"\nDelete Again? (0/1)";
    cin>>yes;
    if(yes=1)
        cout<<"Position: ";
    cin>>yes;
    l.del(yes);

    cout<<"Print New List? (0/1)";
    cin>>yes;
    if(yes==1)
        l.printList();
}