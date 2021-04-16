#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
	
};

struct node* front = NULL;
struct node* rear = NULL;

void insert()  
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     

void delete ()  
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    }  
}

void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
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
				cout << "INVALID INPUT" <<endl;
			}
		}
	}
	while(choice!=4);
	cout << "OUT OF STACK";
	return 0;
}