#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertion(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node*curr=head;
    node*prevptr=NULL;
    node*nextptr;

    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prevptr;

        
        prevptr=curr;
        curr=nextptr;
    }
    return prevptr;
}
int main(){
    node*head=NULL;
    insertion(head,1);
    insertion(head,3);
    insertion(head,4);
    insertion(head,2);
    cout<<"linked list before reversal is"<<endl;
    display(head);
    
    node* newhead=reverse(head);
    cout<<"linked list after reversal is"<<endl;
    display(newhead);
    

    
    return 0;
}