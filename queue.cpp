#include <iostream>
using namespace std;

//global varibles
int front=-1,rear=-1,size=4;
int Queue[4];


void insert(){
	if (front >=size || rear>=size){
		cout << "QUEUE IS FULL" <<endl;
	}

	else{
		if (front==-1 && rear==-1){
			front = 0;
			rear = 0;
		}
		 //INSERTION OF ELEMENTS CODE
		 int number;
		 cout << "ENTER THE NUMBER TO BE INSERTED" << endl;
		 cin  >> number ;
		 Queue[rear] = number;
		 rear++;
	 }

}

void Delete(){
	if (front== -1 && rear== -1){
		cout << "QUEUE IS EMPTY" << endl;
	}

	else{
		cout << "DELETE NUMBER IS:" ;
		cout << Queue[front] <<endl  ;
		front++;
		if (front >=rear){
			front = -1;
			rear = -1;
		}
	}
}

void display(){
	int i;
	cout << "ELEMENTS IN QUEUE ARE:"<<endl;
	for (i=front;i<=rear;i++){
		cout << Queue[i] <<  endl;
	}
}

int main(){
	int choice;
	cout << "1.insert\n2.delete\n3.display\n4.exit\n";
	do{
		cout << "ENTER THE CHOICE:";
		cin >> choice;

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
				cout <<"INVALID INPUT" << endl;
				break;
			}

		}

	}
	while(choice!=4);
	cout << "OUT OF QUEUE";
	return 0;
}