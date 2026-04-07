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

void traverse(node* head){
	node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

int main(){
	int length;
	node* head = NULL;
	node* prev = NULL;
	printf("enter the length of the list:");
	scanf("%d",&length);
	for(int i = 0; i < length; i++){
		int value;
		printf("enter the %d element:",i + 1);
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
	
	traverse(head);

	int key;
	printf("enter the key:");
	scanf("%d",&key);

	node* pointer = head;
	node* faster = NULL;
	while(pointer->data != key){
		pointer = pointer->next;
	}
	int count = 0;
	faster = pointer;
	while(faster != NULL){
		if(faster->data == key){
			count++;
		}
		faster = faster->next;
	}
	printf("the number of occurences of the key are: %d\n",count);
}
