#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d){
        this-> data=d;
        this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<< "memory is free for node with data "<< val<< endl;
    }
};

void insertNode(Node* &tail, int elem, int d){

    //empty list
    if(tail==NULL){
        Node* newnode= new Node(d);
        tail=newnode;
        newnode -> next = newnode;
        return;
    }
    //asssuming that the element is present in the list
    Node*curr= tail;
    while(curr->data != elem){
        curr=curr->next;
    }
    Node* temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
}

void deleteNode(Node* & tail,int val){
    //empty list
    if(tail==NULL){
        cout<< "List is empty Please check again";
    }else{
        //non empty
        // assuming value is present in list
        Node*prev =tail;
        Node* curr=prev->next;
        while(curr->data!=val){
            prev=curr;
            curr=curr->next;
        }
    prev->next=curr->next;
    //1 node linked list
    if(curr==prev) tail=NULL;
    //<=2 node linked list
    else if(tail==curr)tail=prev;
    curr->next=NULL;
    delete curr;
    }
    
}

void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    } 
    do{
        cout<< tail-> data << " ";
        tail=tail-> next;
    }while(tail!=temp);
    cout<<endl;
}
int main(){
    Node* tail=NULL;
    //empty list
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}