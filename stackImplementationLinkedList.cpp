#include<iostream>

using namespace std;

struct node{
	int data;
	node* next;
};

node* top = NULL;

void push(int data){
	node* temp = new node();
	temp->data = data;
	temp->next = top;
	
	top = temp;
	
}
void pop(){
	node* temp;
	
	if(top == NULL){
		cout<<"Stack is empty."<<endl;
		return;
	}

	temp = top;
	top = top->next;
	delete temp;
}
int getTop(){
	return top->data;
}

bool isEmpty(){
	if( top == NULL){
		return true;
	}else{
		return false;
	}
}

void print(){
	node* temp = top;
	
	while(temp!= NULL){
		cout<<temp->data<<", ";
		temp = temp->next;
	}
}

int main(){
	push(2);
	push(3);
	push(4);
	push(5);
	
	print();
	
	cout<<endl;
	cout<<"The top element is "<<getTop()<<endl;
	
	cout<<"Is it empty? "<<isEmpty()<<endl;
	
	pop();
	
	print();
}
