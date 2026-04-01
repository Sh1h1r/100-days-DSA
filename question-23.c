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

void insert_at_beginning(node** head,node* new_node){
	if(*head == NULL){
		*head = new_node;
	}
	else{
		new_node->next = *head;
		*head = new_node;
	}
}
node* merge_and_sort(node* head1,node* head2){
	if(head1 == NULL) return head2;
	if(head2 == NULL) return head1;

	node* result = NULL;

	if(head1->data <= head2->data){
		result = head1;
		head1 = head1->next;
	}
	else{
		result = head2;
		head2 = head2->next;
	}

	node* tail = result;

	while(head1 !=NULL && head2 != NULL){
		if(head1->data <= head2->data){
			tail->next = head1;
			head1 = head1->next;
		}
		else{
			tail->next = head2;
			head2 = head2->next;
		}
		tail = tail->next;
	}

	if(head1 != NULL)
		tail->next = head1;
	else
		tail->next = head2;

	return result;
}

int main(){
	node* head1 = NULL;
	node* head2 = NULL;
	node* tail = NULL;
	int n,m;
	printf("enter the size of list1:");
	scanf("%d",&n);
	printf("getting the first list\n");
	for(int i = 0; i < n; i++){
		int value;
		printf("enter value of %d element:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head1 == NULL){
			insert_at_beginning(&head1,new_node);
			tail = new_node;
		}
		else{
			tail->next = new_node;
			tail = new_node;
		}
	}

	node* tail2 = NULL;
	printf("enter the size of list2:");
	scanf("%d",&m);
	printf("getting the second list\n");
	for(int i = 0; i < m; i++){
		int value;
		printf("enter value of %d element:",i + 1);
		scanf("%d",&value);
		node* new_node = create(value);
		if(head2 == NULL){
			insert_at_beginning(&head2,new_node);
			tail2 = new_node;
		}
		else{
			tail2->next = new_node;
			tail2 = new_node;
		}
	}

	node* head3 = merge_and_sort(head1,head2);
	node* temp = head3;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
