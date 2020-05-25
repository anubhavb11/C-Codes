#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;  //Self Refrential class

        node(int d){
            data=d;
            next=NULL;
        }
};

int lengthofLL(node* head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    
    return count;
}

void InsertAtFront(node* &head,node* &tail,int data){
    if(head==NULL){
        head=tail= new node(data);
    }
    else{
        node* n=new node(data);
        n->next=head;
        head=n;
    }
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}
