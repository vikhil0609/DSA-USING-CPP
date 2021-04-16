#include <iostream>
#include<string>
using namespace std;

int top=0;
string input = "]([])";
string arr[10];

void insert(int i){
	if (top>=input.length()){
		cout << "STACK	 IS FULL";
	}
	else{
		arr[top] = input[i];
		top++;
	}
}

void Delete(int i){
	if (top<=0){
		insert(i);
	} 
	else{
		if (input[i] == ')'){
			if (arr[top-1] == "("){
				top--;
			}
			else{
				insert(i);
			}
		}
		else if (input[i] == ']'){
			if (arr[top-1] == "["){
				top--;
			}
			else{
				insert(i);
			}
		}
		else if (input[i] == '}'){
			if (arr[top-1] == "{"){
				top--;
			}
			else{
				insert(i);
			}
		}
	}
}

void check(){
	for(int i=0;i<input.length();i++){
		if (input[i] =='(' || input[i]=='[' || input[i]=='{'){
			insert(i);
		}
		else if (input[i] == ')' || input[i]==']' || input[i]=='}' ){
			Delete(i);
		}
	}
	if (top<=0){
		cout << "balanced";
	}

	else if (top>=1){
		cout << "unbalanced";
	}
}

int main(){
	check();
	return 0;
}