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
    node*temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
int intersection(node* &head1,node* &head2){
    node* ptr1;
    node* ptr2;
    int d=0;
    int l1=length(head1);
    int l2=length(head2);
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        
    }
    return -1;
    

}
int main(){
    
    return 0;
}