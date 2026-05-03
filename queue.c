/*
	front				end
	 |					 |
	[10 , 20 , 30 , 40 , 50]	


	front && end
	 |
	[10]

	front	end
	  |		|
	[ 10 , 20 ]

	end moves with enqueue 
	front moves with dequeue
	
*/
#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int queue[MAX];
int front = 0;
int end = -1;

bool isfull(){
	if(end == MAX - 1) return true;
	else return false;
}

bool isempty(){
	if(front > end){
		return true;
	}
	else{
		return false;
	}
}

void enqueue(int number){
	if(isfull()){
		printf("queue already full");
		return;
	}

	else{
		queue[++end] = number;
		return;
	}
}

void dequeue(){
	if(isempty()){
		printf("dequeue not possible");
		return;
	}
	else{
		printf(" dequeed:%d\n",queue[front++]);
		return;
	}
}

void display(){
	if(isempty()) printf("display not possible");
	else{
		for(int i = front; i <= end; i++){
			printf("%d ",queue[i]);
		}
	}
	return;
}

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	dequeue();
	display();
}
