#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int item){
	if(top >= MAX){
		printf("stack overflow\n");
	}
	else{
		top++;
		stack[top] = item;
		printf("item pushed! :3\n");
	}
}

int pop(){
	if(top < 0){
		printf("stack underflow :[\n");
	}
	else{
		printf("%d\n",stack[top]);
		top--;
	}
}

int main(){
	int n;
	printf("enter number of items to push:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int item;
		printf("enter the item:");
		scanf("%d",&item);
		push(item);
	}

	printf("enter the number of items to pop:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		pop();
	}
}
