
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertathead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}
void insertatend(node* &head,int val){
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deletionatkey(node* &head,int key){
    node*p=head;
    node*q=head->next;
    while(q->data!=key){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete(q);

}
void deletionatindex(node* &head,int ind){
    node*p=head;
    node*q=head->next;
    for(int i=0; i<ind-1; i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete(q);
}
void deletionatstart(node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
    deletionatstart(head);
    }

    node*ptr=head;
    head=head->next;
    delete ptr;
}
void deletion(node* &head, int key){
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* ptr=temp->next;
    temp->next=temp->next->next;
    delete ptr;

    
}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main(){
    node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    
    insertathead(head,4);
    deletion(head,1);
    insertatend(head,1);
   // deletionatstart(head);
    //deletionatindex(head,3);
    deletionatkey(head,2);
    display(head);

    
    return 0;
}