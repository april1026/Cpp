#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct node {
	struct node *last;
	int num;
} typedef node;

node* newnode(int, node*);
node* pop(node*);
void output(node*);

int main() {
	int input;
	cout << "creat a new stack" << endl << endl;
	restart:
	cout << "input the first number : ";
	node *tail = new node;
	cin >> tail->num;
	tail->last = NULL;
	while(true) {
		cout << "creat a new node -> N" << endl << "pop head node -> P" << endl << "output the queue -> O" << endl;
		char temp = getche();
		cout << endl;
		if (temp == 'N' || temp == 'n') {
			cout << "input the new number : ";
			cin >> input;
			tail = newnode(input, tail);
		} else if (temp == 'P' || temp == 'p') {
			if (tail == NULL) {
				cout << "the stack is empty." << endl;
				goto restart;
			}
			tail = pop(tail);
		} else if (temp == 'O' || temp == 'o') {
			if (tail == NULL) {
				cout << "the stack is empty." << endl;
				goto restart;
			}
			output(tail);
		}
		cout << endl;
	}
}

node* newnode(int input, node *tail) {
	node *newptr = new node;
	newptr->num = input;
	newptr->last = tail;
	return newptr;
}

node* pop(node *tail) {
	node *newhead = tail->last;
	delete tail;
	return newhead;
}

void output(node *tail) {
	node *now = tail;
	while(now->last != NULL) {
		cout << now->num << endl;
		now = now->last;
	}
	cout << now->num << endl;
}
