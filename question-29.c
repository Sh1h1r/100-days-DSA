
// to rotate convert the list to a cycle and then keep a track of old head new head and new tail likewise join and rejoin ocnnections 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node;

node* create(int value){
	node* new_node = malloc(sizeof(node));
	new_node->next = NULL;
	new_node->data = value;
	return new_node;
}

int main(){
	node* head = NULL;
	node* prev = NULL;
	int length,k;
	printf("enter the length of the list:");
	scanf("%d",&length);
	for(int i = 0; i < length; i++){
		int value;
		printf("enter the value of the %d element:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head == NULL){
			head = new_node;
		}
		else{
			prev->next = new_node;
		}
		prev = new_node;
	}
	printf("enter the number of rotations(k):");
	scanf("%d",&k);
	node* temp = head;
	if(k > length){
		k = k % length;
	}
	int pos = length - k;
	int i = 1;
	node* tail = NULL;
	node* new_head = NULL;
	while(temp != NULL){
		if(i == pos){tail = temp;}
		if(i == pos + 1){new_head = temp;}
		i++;
		temp = temp->next;
	}
	node* temp_ = head;
	while(temp_->next != NULL){
		temp_ = temp_->next;
	}
	
	temp_->next = head;
	tail->next = NULL;
	head = new_head;

	node* temp2 = head;
	while(temp2 != NULL){
		printf("%d->",temp2->data);
		temp2 = temp2->next;
	}
	printf("NULL");
}
