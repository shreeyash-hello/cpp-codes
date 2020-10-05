// Create, insert at start, insert at end, display linked list


#include<iostream>
using namespace std;
class sll {
	struct node
	{
		int data;
		node* next;
	}*start;
public:
	sll() {
		start = NULL;
	}
	void create() {
		node* temp;
		node* curr;
		int ans;
		do {
			temp = new node;
			temp->next = NULL;
			cout << "\n enter data: ";
			cin >> temp->data;
			if (start == NULL) {
				start = temp;
				curr = temp;


			}
			else {

				curr->next = temp;
				curr = temp;
			}
			cout << "\n add more nodes?(yes==1): ";
			cin >> ans;
		} while (ans == 1);
	}


	void insert_begin() {
		node* temp;
		temp = new node;
		temp->next = NULL;
		cout << "\n enter new data to insert at the start: ";
		cin >> temp->data;
		if (start == NULL)
			start = temp;
		else {
			temp->next = start;
			start = temp;
		}
	}
	void last_insert() {
		node* temp, * last;
		temp = new node;
		temp->next = NULL;
		cout << "\n enter new data to insert at the end: ";
		cin >> temp->data;
		if (start == NULL)
			start = temp;
		else {
			last = start;
			while (last->next != NULL)
				last = last->next;
			last->next = temp;
		}
	}
	void delete_pos()
	{
		int pos, i, counter = 0;
		if (start == NULL)
		{
			cout << "List is empty" << endl;
			return;
		}
		cout << "Enter the position of value to be deleted: ";
		cin >> pos;
		struct node* s, * ptr;
		s = start;
		if (pos == 1)
		{
			start = s->next;
		}
		else
		{
			while (s != NULL)
			{
				s = s->next;
				counter++;
			}
			if (pos > 0 && pos <= counter)
			{
				s = start;
				for (i = 1; i < pos; i++)
				{
					ptr = s;
					s = s->next;
				}
				ptr->next = s->next;
			}
			else
			{
				cout << "Position out of range" << endl;
			}
			free(s);
			cout << "Element Deleted" << endl;
		}
	}
	void display() {
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

int main() {
	sll obj1;
	obj1.create();
	obj1.insert_begin();
	obj1.last_insert();
	obj1.delete_pos();
	obj1.display();
	return 0;
}
