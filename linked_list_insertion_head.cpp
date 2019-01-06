#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void insert_head(node* &head,int data)
{
    node* n = new node(data);
    n->next=head;
    head=n;
}

void print_list(node* head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node* head = NULL;
    insert_head(head,5);
    insert_head(head,10);
    insert_head(head,15);
    print_list(head);
}