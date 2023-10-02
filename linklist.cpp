#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

/**
int delete(){
    if(head != NULL){
        if(head->next == NULL){
            head = NULL;
        } else{
            Node* temp = head;
            while ((temp->next->next) != NULL)
            {
                temp = temp-> next;

                Node* lastNode = temp->next;
                temp->next = NULL;
                free(lastNode);
            }
            
        }
    }
}**/

void print (Node* c,int cd){
    cout<<c<<" "<<cd<<"\n";

}


int main(){

    int o,i;
    cout<<"Enter ";
    cin>>o;

    Node* head ;//= NULL;
    Node *curt;

    head = new Node();

    curt = head;
/**
    while(i<o){
        i++;
        curt->data = i;
        cout<<curt<<" "<<curt->data<<endl;
        curt = curt->next;
        cout<<curt<<endl;
        curt = new Node();
    }
        curt = NULL;

    cout<<curt<<" "<<endl;**/

    for(i=0;i<o;i++){
        curt->data = (i+1)*10;
        print(curt, curt->data);
        //cout<<curt<<" "<<curt->data<<endl;
        curt = curt->next;
        curt = new Node();

    }
    //cout<<"Cur "<<curt<<endl;
        curt = NULL;

    if(head != NULL){
        print(head, head->data);
        if(head->next == NULL){
            head = NULL;
            cout<<"Deleted";
        } else{
            curt = head;
            while ((curt->next->next) != NULL)
            {
                curt = curt-> next;
                print(curt, curt->data);
                Node* lastNode = curt->next;
                curt->next = NULL;
                free(lastNode);
            }
            
        }
    }

   /** 
    if(head == NULL)
        return;
        else {
        cout<<"Head "<<head<<endl;
        curt = head;
        cout<<"cur data "<<curt->data<<endl;
        curt = curt->next;
        cout<<"cur "<<curt<<endl;

        cout<<"Cur "<<curt<<endl;
    }**/
    
    return 0;

}
