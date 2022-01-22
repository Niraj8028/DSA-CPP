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
node* reverseknodes(node* &head,int k){
    node*curr=head;
    node*prev=NULL;
    node*nextptr;
    int count=0;
    while(curr!=NULL && count<k){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        
        count++;
    }
    if(nextptr!=NULL){
    head->next=reverseknodes(nextptr,k);
    }
    
    return prev;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    int k=2;
    node*newhead=reverseknodes(head,k);
    display(newhead);
   


    return 0;
}