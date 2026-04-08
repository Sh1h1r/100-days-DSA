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

int main(){
	int length1,length2;

	node* head = NULL;
	node* prev = NULL;

	printf("enter the length of the 1st list:");
	scanf("%d",&length1);

	for(int i = 0; i < length1; i++){
		int value;
		printf("enter the value of the %d element:",i + 1);
		scanf("%d",&value);

		node* new_node = create(value);

		if(head == NULL){
			head = prev = new_node;
		}
		else{
			prev->next = new_node;  
			prev = new_node;
		}
	}

	node* head1 = NULL;
	node* prev1 = NULL;

	printf("enter the length of the 2nd list:");
	scanf("%d",&length2);

	for(int i = 0; i < length2; i++){
		int value;
		printf("enter the value of the %d element:",i + 1);
		scanf("%d",&value);

		node* new_node = create(value); 

		if(head1 == NULL){
			head1 = prev1 = new_node;
		}
		else{
			prev1->next = new_node;  
			prev1 = new_node;
		}
	}

	// intersection using brute force imma optimize later :/
	node* intersection = NULL;

	node* pointer = head;

	while(pointer != NULL){
		node* pointer_all = head1;  

		while(pointer_all != NULL){
			if(pointer_all == pointer){
				intersection = pointer;
				break;
			}
			pointer_all = pointer_all->next;
		}

		if(intersection != NULL) break;
		pointer = pointer->next;
	}

	if(intersection != NULL){
		printf("Intersection at: %d\n", intersection->data);
	}
	else{
		printf("No intersection\n");
	}

	return 0;
}
