#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = 0;

int is_full(){
	return top == MAX;
}

int is_empty(){
	return top == 0;
}

void push(int value){
	if(is_full){
		printf("stack overflow\n");
		return;
	}
	else stack[top++] = value;
	printf("%d pushed onto stack\n", value);
	top++;
}

void pop(){
	if(is_empty){
		printf("stack underflow");
		return;
	}
	return stack[top--];
}

int display(){
	if(is_empty){
		printf("stack empty");
	}
	else printf("the top element is: %d",stack[top]);
}

