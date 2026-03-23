#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} node;

int main(){
	node* head = NULL;
	// FIRST NODE

	node* first = malloc(sizeof(node));
	first->data = 10;
	first->next = NULL;
	head = first;

	// SECOND NODE

	node* second = malloc(sizeof(node));
	second->data = 20;
	second->next = NULL;
	first->next = second;

	node* temp = head;

	while(temp != NULL){
		printf("%d",temp->data);
		temp = temp->next;
	}
	return 0;
}
