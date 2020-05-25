#include<iostream>
#include"linklist.h"
using namespace std;

//mid element in ll
node* llmid(node*head){
    node*fast=head;
    node*slow=head;
    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

//Kth node from last
node* kthnode(node* head,int k){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* fast=head;
    node* slow=head;
    int count=0;
    while(count!=k){
        fast=fast->next;
        count++;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}

node* merge(node* a, node*b){
    //base case
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    //chota kaamkrte hai
    node* c=a;
    if(b->data<a->data){
        c=b;
        node* chote= merge(a,b->next);
        c->next=chote;
    }
    else{
        c=a;
        node* chote=merge(a->next,b);
        c->next=chote;
    }
    return c;
}


node* mergeSort(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid= llmid(head);
    node* a=head;
    node* b= mid->next;
    mid->next=NULL;
    //rec case
    a= mergeSort(a);
    b=mergeSort(b);
    //merge
    node* sorted=merge(a,b);
    return sorted;


    
}

int main(){
    node* head=NULL;
    node*tail = NULL;

    InsertAtFront(head,tail,8);
    InsertAtFront(head,tail,7);
    InsertAtFront(head,tail,6);
    InsertAtFront(head,tail,5);
    InsertAtFront(head,tail,4);
    InsertAtFront(head,tail,3);
    InsertAtFront(head,tail,2);
    InsertAtFront(head,tail,1);
    print(head);
    // node* mid= llmid(head);
    // cout<<endl<<mid->data;
    node* sorted= mergeSort(head);
    print(sorted);

}