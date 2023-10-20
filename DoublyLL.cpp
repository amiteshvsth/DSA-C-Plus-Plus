#include<iostream>
using namespace std;
class Node{
public:
    
    int data;
    Node*  prev;
    Node* next;
    Node(int d){
        this-> data = d;
        this-> prev=NULL;
        this-> next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<< "memory free for node with data " << val<<endl;
    }
};
void printNode(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp= temp-> next; 
    }
    cout<< endl;
}

int getlength(Node* head){
    int len=0;
    Node* temp=head;
    int cnt=1;
    while(temp!=NULL){
        len++;
        temp= temp-> next; 
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail, int data){

    if(head==NULL){
        Node* temp= new Node(data);
        head= temp;
        tail=temp;
        return;
    }
    Node* node= new Node(data);
    node->next=head;
    head-> prev=node;
    head=node;
}
void insertAtTail(Node* &head,Node* &tail, int data){
    if(tail==NULL){
        Node* temp= new Node(data);
        tail= temp;
        head= temp;
        return;
    }    
    Node* node= new Node( data);
    tail->next=node;
    node->prev=tail;
    tail=node; 
}

void insertAtPos(Node* & tail,Node* &head, int pos, int data){
   if(pos==1){
    insertAtHead(head,tail,data);
    return; 
   }

   Node* temp=head;
   int cnt=1;
   while(cnt<pos-1){
    temp=temp->next;
    cnt++;
   }
   if(temp->next == NULL){
    insertAtTail(head,tail, data);
    return;
   }
   Node* node= new Node(data);
   node -> next = temp->next;
   temp->next->prev=node;
   temp->next=node;
   node->prev=temp;

}

void deleteNode(int pos, Node* & head, Node* & tail){
    //delete first or start node
    if(pos==1){
        Node* temp= head;
        temp->next->prev = NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr= curr -> next;
            cnt++;
        }
        if(curr==tail){
            tail=prev;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* head= NULL;
    Node* tail= NULL;

    cout<<getlength(head)<< endl;

    insertAtHead(head,tail, 11);
    printNode(head);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;

    insertAtHead(head,tail, 13);
    printNode(head);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;

    insertAtHead(head,tail, 8);
    printNode(head);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;


    insertAtTail(head,tail,25);
    printNode(head);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;

    insertAtPos(tail, head, 2,100);
    printNode(head);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;

    deleteNode(5,head,tail);
    cout<<"head "<<head -> data<<" ";
    cout<<"tail "<<tail -> data<<endl;

    return 0;
}