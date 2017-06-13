#include<iostream>
using namespace std;
#define array_max 100

int array[array_max];
int top = -1;
void Push(int x){
	top = -1;
	if (top == array_max-1){
		cout<<"stack overflow \n";
		return;
	}
	array[++top] = x;
}

void Pop(){

	if (top == -1){
		cout<<"Empty stack, First push an element to be able to pop";
		return;
	}
	top--;
}

int Top(){
	return array[top];}

void Print(){
	cout<< "Stack:";
	for (int i = 0; i <= top; i++){
		cout<<array[i];
	}
	cout<<"\n";
}
	
int main(){

Push(2);Print();
Push(3);Print();
Push(20);Print();
Pop(); Print();
Push(15);Print();
}
