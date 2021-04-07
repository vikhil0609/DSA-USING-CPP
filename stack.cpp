#include <iostream>
using namespace std;
#include <cmath>
int top = -1,size=3,stack[3];


void insert(){
	if (top >= size-1){
		cout << "STACK IS FULL" << endl;
	}

	else{
		top++;
		int number;
		cout << "ENTER THE NUMBER";
		cin >> number;
		stack[top] = number;
	}
}

void Delete(){
	if (top <= -1){
		cout << "STACK IS EMPTY" << endl;
	}

	else{
		cout << "DELETED ITEMS IS:" << stack[top] <<endl;
		top--;
	}
	
	}

void display(){
	cout << "ITEMS IN STACK:\n";
	for(int i=0;i<=size;i++){
		cout << stack[i] << endl;
	}
}

int main (){
	int choice;
	cout << "1.push\n2.delete\n3.display\n4.exit\n";
	do{
	cout << "ENTER THE CHOICE:";
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

		case 3: {
			display();
			break;
		}

		case 4: {
			cout << "EXIT\n" ;
			break;
		}

		default : { 
			cout << "INVALID NUMBER";
			break;
		}
	}
	}
	while(choice!=4);
	cout << "OUT OF STACK";
}

