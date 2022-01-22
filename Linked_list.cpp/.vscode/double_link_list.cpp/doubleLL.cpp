#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev = NULL;
    node *next = NULL;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertattail(node *&head, int val)
{
    
    node *n = new node(val);
    if (head == NULL)
    {
        insertathead(head, val);
    }
    else{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev=temp;
    }
}
void deleteathead(node* &head){
    node*headtodelete=head;
    head=head->next;
    head->prev=NULL;
    delete headtodelete;
}
void deleteattail(node* &head,int pos){
    
    if(pos==1){
        deleteathead(head);
        return;
    }
    node * temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }
    delete temp; 

}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertathead(head,5);
    cout<<"double linked list before deletion is"<<endl;
    display(head);  
    deleteattail(head,5);
    cout<<"double linked list after deletion is"<<endl;
    display(head);

    return 0;
}