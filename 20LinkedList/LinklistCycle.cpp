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

void createCycle(node* head){
    node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = head->next->next;
}

bool isCycle(node*head){
    node* slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}

void breakCycle(node*head){
    node* slow=head;
    node*fast=head;
    while(fast){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }

    //NOW fast and slow point at one point 
    slow=head;
    node* p=head;
    while(p->next!=fast){
        p=p->next;
    }
    while(fast!=slow){
        slow=slow->next;
        p=fast;
        fast=fast->next;
    }
    p->next=NULL;
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

    createCycle(head);

    if(isCycle(head)){
        cout<<"cycle";
    }
    else{
        cout<<"No not a cycle";
    }

    breakCycle(head);
    cout<<endl;
    print(head);
}