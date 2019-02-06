#include <iostream>
#include <conio.h>

using namespace std;

struct node {
	struct node *next;
	int num;
} typedef node;

node* newnode(int, node*);
node* pop(node*);
void output(node*);

int main() {
	int input;
	cout << "creat a new queue" << endl << endl;
	restart:
	cout << "input the first number : ";
	cin >> input;
	node *head = new node;
	head->num = input;
	head->next = NULL;
	node *lastnode = head;
	while(true) {
		cout << "creat a new node -> N" << endl << "pop head node -> P" << endl << "output the queue -> O" << endl;
		char temp = getche();
		cout << endl << endl;
		if (temp == 'N' || temp == 'n') {
			cout << "input the new number : ";
			cin >> input;
			lastnode = newnode(input, lastnode);
		} else if (temp == 'P' || temp == 'p') {
			if (head == NULL) {
				cout << "the queue is empty." << endl;
				goto restart;
			}
			head = pop(head);
		} else if (temp == 'O' || temp == 'o') {
			if (head == NULL) {
				cout << "the queue is empty." << endl;
				goto restart;
			}
			output(head);
		}
		cout << endl;
	}
}

node* newnode(int input, node *lastnode) {
	node *newptr = new node;
	newptr->num = input;
	newptr->next = NULL;
	lastnode->next = newptr;
	return newptr;
}

node* pop(node *head) {
	node *newhead = head->next;
	delete head;
	return newhead;
}

void output(node *head) {
	node *now = head;
	while(now->next != NULL) {
		cout << now->num << ", ";
		now = now->next;
	}
	cout << now->num << endl;
}
