#include<iostream>
using namespace std;
class deque {
	struct node
	{
		int data;
		node* next;
	}* front, *rear;
public:
	deque() {
		front = NULL;
		rear=NULL;
	}
	void create_front() {
		node* temp;
		temp = new node;
		temp->next = NULL;
		cout << "enter data for front: ";
		cin>>temp->data;
		if (front == NULL){
			front = temp;
			rear = temp;
		}
		else{
			temp->next = front;
			front = temp;
		}
	}
	void create_rear(){
		node* temp;
		temp = new node;
		temp->next = NULL;
		cout << "enter data for rear: ";
		cin>>temp->data;
		if (front == NULL){
			front = temp;
			rear = temp;
		}
		else{
			rear->next = temp;
			rear = temp;
		}
	}
	void del_front(){
		node* temp;
		if (front == NULL){
			cout << "deque is empty";
		}
		else{
			temp = front;
			front = front->next;

			cout << "the deleted element is: " << temp->data << endl;
			delete temp;
		}
	}
	void del_rear(){
		node* temp;
		if (front == NULL){
			cout << "deque is empty";
		}
		else{
			temp = rear;
			rear = rear->next;

			cout << "the elemenet deleted is: " << temp->data << endl;
			delete temp;
		}
	}
	void Display() {
		node *temp;
	   temp = front;
	   if ((front == NULL) | (rear == NULL)) {
	      cout<<"Queue is empty"<<endl;
	      return;
	   }
	   cout<<"Queue elements are: ";
	   while (temp != NULL) {
	      cout<<temp->data<<" ";
	      temp = temp->next;
	   }
	   cout<<endl;
	}

};

int main() {
	deque obj1;
	obj1.create_front();
	obj1.create_rear();
	obj1.Display();
	obj1.del_front();
	obj1.del_rear();
	return 0;
}
