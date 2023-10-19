#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    // node type ka pointer qki node ko point krna hai agr 
    // int ko point krna hota to int type ka pointer bnate 
    Node* next; 

    //constructor
    Node(int d){
        this -> data = d;
        // starting me head node ko null se point kra dia
        // qki vhi pehla or akhri node hai starting me
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value= this -> data;
        if(this -> next!=NULL){
            delete next;
            this-> next = NULL;
        }
        cout<<"Memory is free for node with data " << value << endl;
    }
    
};

void insertAtHead(Node* &head, int data){
    //creating new node
    Node* temp= new Node(data);
    // new node k pointer ko head se point kra dia
    temp -> next = head;
    // or head ko update krke new node par la lia
    head= temp;
}

void insertAtTail(Node* &tail, int data){
    //creating new node
    Node* temp= new Node(data);
    // last node k pointer ko new node se point kra dia
    // or new node ka pointer automatically NULL ko point krega kyuki constructor me already likha h
    tail -> next =temp;
    //ab tail ko update krke new node par kar  dia
    tail = temp;
}

void insertAtPosititon(Node* &tail,Node* &head, int pos, int data){
    if (pos==1){
       insertAtHead(head,data);
       return;
    }
    
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp= temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail,data);
        return;
    }
    // creating a node for data
    Node* nodetoInsert = new Node(data);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}
void deleteNode(int pos, Node* & head, Node* & tail){
    //delete first or start node
    if(pos==1){
        Node* temp= head;
        head= head-> next;
        temp->next = NULL;
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
        prev -> next =curr -> next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}
int main(){
    //created a new node
    Node* node1=new  Node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;
    
    //head pointed to new node
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(head,12);
    insertAtTail(tail ,15);
    insertAtPosititon(tail,head,3,67);
    print(head);
    cout << head -> data <<" ";
    cout << tail -> data<<endl;
    deleteNode(4,head,tail);
    print(head);
    cout << head -> data <<" ";
    cout << tail -> data <<endl;
    return 0; 
}