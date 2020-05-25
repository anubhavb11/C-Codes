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
void DeleteAtEnd(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
		return;
	}
	node * temp = head;
	while(temp->next!=tail){
		temp = temp->next;
	}
	delete tail;
	temp->next = NULL;
	tail = temp;
}
void DeleteAtFront(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
		return;
	}
	node* temp = head;
	head = head->next;
	delete temp;
}



void DeleteAtMid(node* &head,node* &tail, int pos){
    if(pos==0){
        DeleteAtFront(head,tail);
        return;
    }
    if(pos>=lengthofLL(head)){
        DeleteAtEnd(head,tail);
        return;
    }
    int jump=1;
    node* temp=head;
    while(jump<=pos-1){
        temp=temp->next;
        jump++;
    }
    node* ptr=temp->next;
    temp->next=ptr->next;
    delete ptr;
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

void InsertAtMid(node* &head,node* &tail,int data,int pos){
	if( pos == 0){
		InsertAtFront(head,tail,data);
		return;
	}
	if(pos>=lengthofLL(head)-1){
		InsertAtEnd(head,tail,data);
		return;
	}

	node* temp = head;
	int jump = 1;
	while(jump<=pos-1){
		temp =temp->next;
		jump++;
	}
	node* n = new node(data);
	n->next=temp->next;
	temp->next = n;
}





void Print(node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}


int main(){

    node* head=NULL,*tail=NULL;

	for(int i=5;i>=0;i--){
		InsertAtFront(head,tail,i);
	}
	Print(head);
    DeleteAtMid(head,tail,4);
    Print(head);
    DeleteAtMid(head,tail,0);
    Print(head);
    DeleteAtMid(head,tail,78);
    Print(head);

}