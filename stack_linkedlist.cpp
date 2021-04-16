#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
	int data ;
	struct node* link;
};

struct node* top;

void insert(){
	int number;
	cout << "ENTER THE NUMBER: ";
	cin >> number ;

	struct node* temp;
	temp = new node();

	temp->data = number;
	temp->link = top;

	top = temp;
}

void Delete(){
	if ( top == NULL){
		cout << "STACK IS EMPTY" << endl;
	}

	else{
		struct node* temp;
		temp = top;
		top = top->link;
		temp->link = NULL;

		free(temp);
	}

}

void display(){
	struct node* temp;

	if (top == NULL){
		cout << "STACK IS EMPTY";
		exit(1);
	}

	else{
		temp = top;
		cout << "ELEMENTS IN THE STACK ARE:" << endl;
		while (temp!=NULL){
			cout << temp->data << endl ;
			temp = temp->link;

		}
	}
}

int main(){
	int choice;
	do{
		cout << "1.insert\n2.delete\n3.display\n4.exit\n";
		cout << "ENTER THE CHOICE:" << endl;
		cin  >> choice;

		switch(choice){
			case 1:{
				insert();
				break;
			}

			case 2:{
				Delete();
				break;
			}

			case 3:{
				display();
				break;
			}

			case 4:{
				cout << "EXIT" << endl;
				break;
			}

			default:{
				cout << "INVALID INPUT";
			}
		}
	}
	while(choice!=4);
	cout << "OUT OF STACK";
	return 0;
}