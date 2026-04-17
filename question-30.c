#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int coefficient,exponent;
	struct Node* next;
}node;

node* create(int length){
	node* head = NULL;
	node* new_node;
	node* prev = NULL;

	for(int i = 0; i < length; i++){
		int coeff,exp;
		new_node = malloc(sizeof(node));
		new_node->next = NULL;
		if(head == NULL){
			head = new_node;
			prev = new_node;
		}
		else{
			prev->next = new_node;
			prev = new_node;
		}
		printf("enter the coefficent of the term:");
		scanf("%d",&coeff);
		printf("enter the exponent of the term:");
		scanf("%d",&exp);
		new_node->coefficient = coeff;
		new_node->exponent = exp;
	}

	return head;
}

void display(node* head){
	node* temp = head;
	while(temp != NULL){
		if(temp->exponent == 0){
			printf("%d",temp->coefficient);
		}
		else{
			printf("%dx^%d",temp->coefficient,temp->exponent);
		}
		if(temp->next != NULL){
			printf(" + ");
		}
		temp = temp->next;
	}
}

int main(){
	int length; 
	printf("enter the number of terms:");
	scanf("%d",&length);
	node* head = create(length);
	display(head);
}
