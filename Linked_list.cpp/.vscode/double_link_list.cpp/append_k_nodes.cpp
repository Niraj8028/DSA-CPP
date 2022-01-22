
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
int length(node* &head){
int l=0;
node*temp=head;
while(temp!=NULL){
    l++;
    temp=temp->next;
}
return l;
}
node* append_k_nodes(node* &head,int k){
    node*newhead;
    node*newtail;    
    node*tail=head;  
    int l=length(head);  
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        count++;
        tail=tail->next;

    }
    tail->next=head;
    newtail->next=NULL;
    
    return newhead;


}
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
    insertatend(head,4);
    insertatend(head,5);
    insertatend(head,6w);
    display(head);
    //cout<<length(head);
    node*newhed=append_k_nodes(head,3);
    display(newhed);
    
    

    
    return 0;
}