#include <iostream>
using namespace std;

//node structure
struct Node {
    int data;
    Node* next;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }

    //Add new element at the end of the list
    void push_back(int input) {
      Node* cur;
      cur = new Node();
      cur->data = input;
      cur->next = NULL; 
      if(head == NULL) {
        //for first element in the list
        head = cur;
      } else {
        Node* temp;
        temp = head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = cur;
      }   
    }

    //Delete last node of the list
    void pop_back() {
      if(head != NULL) {
        if(head->next == NULL) {
          head = NULL;
        } else {
          Node* temp = head;
          while(temp->next->next != NULL)
            temp = temp->next;
          Node* lastNode;
          lastNode = temp->next;
          temp->next = NULL;
          free(lastNode); 
        }
      }
    }

    void pop_position(int b) {

      int j=1;
      if(j==b)
        head = head->next;        
      else {
        Node* temp = head;
        Node* temp2;
        while(j!=b){
        temp2=temp;
        temp=temp->next;
        j++;            
        } 
        temp2->next = temp->next;            
        free(temp);
      }

    }

    void insert(int pos, int elem) {

      Node* temp;
      Node* temp2;
      Node* afterNewElem;

      int j=2;        
      temp=head;
      
      Node* newElem = new Node();
      afterNewElem = temp->next;
      
      newElem->data = elem;
     // afterNewElem=temp->next;

      if(pos !=1){
        while(j!=pos){
        j++;
        temp=temp->next;
        afterNewElem=temp->next;
        }
        if(j==pos){
            temp->next=newElem;
            if(afterNewElem !=NULL){
            newElem->next=afterNewElem;
            } else{
                newElem->next=NULL;
            }
      }
      } else{
        newElem->next=temp;
        head= newElem;
      }
    }

    //display the content of the list
    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }    
};

// test the code  
int main() {

  int n,a,ii;

  LinkedList MyList;

  //Add four elements in the list.

    cout<<"Enter ";
    cin>>n;
    for(int i=1;i<=n;i++){
      MyList.push_back(i*10);

  }
  MyList.PrintList();
  
  //Delete the last node
  cout<<"Delete Last?\n";
  cin>>a;
  if(a){
      MyList.pop_back();
      MyList.PrintList();  
  } 
      
  cout<<"Delete Position? Enter Position ";
  cin>>a;  
  if(a!=0){    
    MyList.pop_position(a);
    MyList.PrintList();  
      }
  

  cout<<"Insert Element?";
  cin>>a;
  if(a){
    cout<<"\nEnter Position and element: ";
    cin>>a>>ii;
    MyList.insert(a, ii);
    MyList.PrintList();  

  }
//  MyList.PrintList();  
  return 0; 
}