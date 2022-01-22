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
void makecycle(node* &head,int pos){
    node*temp=head;
    int count=1;
    node*cycle;
    while(temp->next!=NULL){
        if(pos==count){
            cycle=temp;
                     
        }
        temp=temp->next;  
        count++;
    }
    temp->next=cycle;
}
bool iscycle(node* &head){
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }       
    }
    return false;
}
void removecycle(node* &head){
    node*fast;
    node*slow;
    do{
        fast=fast->next->next;
        slow=slow->next;
    }while(slow!=fast);
    fast=head;
    while(fast->next!=slow->next){
        fast=fast->next;
        slow=slow->next;
        
    }
    slow->next=NULL;
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
    node*head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    makecycle(head,3);
    //display(head);
    cout<<iscycle(head);
    
    removecycle(head);
    cout<<iscycle(head);
    
    return 0;
}