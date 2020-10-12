#include<iostream>
using namespace std;
class dll {
	struct node
	{
		int data;
		node* next;
		node *prev;
		node *front;
	}*start;
public:
	dll() {
		start = NULL;
	}

	void add_front(){
			int d;
			node *temp;
			node *end;
			node *front;
			int ans;
			do{
				temp=new node();
				temp->data=d;
				temp->prev=NULL;
				temp->next = front;
				if(front==NULL)
					end=temp;
				else
					front->prev=temp;
				front=temp;
				cout<<"\n add more nodes ?: ";
				cin >> ans;
			}while(ans==1);
	}

	void add_before(){
		node *n;
		int d;
		node *front;
		node *temp;
		temp=new node();
		temp->data=d;
		temp->next=n;
		temp->prev=n->prev;
		n->prev=temp;
		if(n->prev==NULL)
			front=temp;
	}
	void after(){
		node *n;
		int d;
		node *temp;
		node*end;
		temp=new node();
		temp->data=d;
		temp->prev=n;
		temp->next=n->next;
		n->next=temp;
		if(n->next==NULL)
			end=temp;
	}
	void end(){
		int d;
		node *temp;
		node *front;
		node *end;
		temp=new node();
		temp->data=d;
		temp->prev=end;
		temp->next=NULL;
		if(end==NULL)
			front=temp;
		else
			end->next=temp;
		end=temp;
	}
	void disp() {
			node* t;
			if (start == NULL) {
				cout << "\n sll is empty";
				return;
			}
			else {
				t = start;
				while (t != NULL) {
					cout << t->data << " ";
					t = t->next;
				}
			}
		}

};
int main(){
	dll obj1;
	obj1.add_before();
	obj1.add_front();
	obj1.after();
	obj1.end();
	obj1.disp();
}
