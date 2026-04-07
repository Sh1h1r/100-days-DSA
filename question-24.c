#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node* next;
}node;

node* create(int value){
	node* new_node = malloc(sizeof(node));
	new_node->data = value;
	new_node->next = NULL;
	return new_node;
}

void delete(node** head, int value){
	if(*head == NULL){
		printf("empty list.. :(");
		return;
	}

	node* temp = *head;

	if(temp->data == value){
		*head = temp->next;
		free(temp);
	}
	
	while(temp->next != NULL){
		if(temp->next->data == value){
			node* deleted = temp->next;
			temp->next = deleted->next;
			free(deleted);
			return;
		}
		temp = temp->next;
	}
	printf("value not found\n");
}

int main(){
	int length;
	node* head = NULL;
	node* prev = NULL;
	printf("enter the length of the list:");
	scanf("%d",&length);
	for(int i = 0; i < length; i++){
		int value;
		printf("enter the value of %d node:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head == NULL){
			head = new_node;
			prev = new_node;
		}
		else{
			prev->next = new_node;
			prev = new_node;
		}
	}

	node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");

	int value_;
	printf("enter the value of the node to be delted:");
	scanf("%d",&value_);
	delete(&head,value_);
	length--;
	node* temp2 = head;
	for(int i = 0; i < length; i++){
		printf("%d ",temp2->data);
		temp2 = temp2->next;
	}
}
