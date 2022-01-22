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
node*merge(node* &head1, node* &head2){
    node*p1=head1;
    node*p2=head2;
    node *dummy=new node(-1);
    node*p3=dummy;
    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
        while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        return dummy->next;
    

}
void insertathead(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;

}
void insertnode(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        insertathead(head,val);
    }
    else{
        node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    }
}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node*head1=NULL;
    node*head2=NULL;
    insertnode(head1,1);
    insertnode(head1,3);
    insertnode(head1,5);
    insertnode(head1,7);
    insertnode(head2,2);
    insertnode(head2,4);
    insertnode(head2,6);
    display(head1);
    display(head2);
    node* newnode=merge(head1,head2);
    display(newnode);
       
    
    return 0;
}