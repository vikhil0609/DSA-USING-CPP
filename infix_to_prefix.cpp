#include <iostream>
#include <string>
using namespace std;

string input = "A+B";
int len = input.length();
int top = 0;
void reverse(string arr[])
	for (int i=len;i>=0;i--){
		arr[top] = input[i];
		top++

	}
	return arr;

int main(){
	string arr[len];
	cout << reverse();
	return 0;
}