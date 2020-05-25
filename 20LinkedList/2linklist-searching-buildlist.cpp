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
void InsertAtEnd(node* &head,node* &tail,int data){
    if(head==NULL){
        head=tail=new node(data);
    }
    else{
        node* n=new node(data);
        tail->next=n;
        tail=n;
    }
}
void Print(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

bool searchrecursive(node* head,int key){
    if(head==NULL){
        return false;
    }
    //rec case
    node * temp=head;
    if(temp->data == key){
        return true;
    }
    else{
        return searchrecursive(temp->next,key);
    }
}

bool searchIterative(node* head, int key){
    node * temp=head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }
}

void buildlist(node*&head,node *&tail){
    int data;
    cin>>data;

    while(data!=-1){
        InsertAtEnd(head,tail,data);
        cin>>data;
    }
}
int main(){
    node* head=NULL,*tail=NULL;
    buildlist(head,tail);

	Print(head);
    cout<<endl;
    cout<<searchrecursive(head,5)<<endl;
    cout<<searchrecursive(head,10)<<endl;
    cout<<searchIterative(head,5);
    
}