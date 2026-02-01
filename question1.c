#include <stdio.h>
int main(){
	int length,element,pos;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length + 1];
	for(int i = 0; i < length; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < length; i++){
		printf("%d ",arr[i]);
	}
	printf("enter the position at which element is to be inserted:");
	scanf("%d",&pos);
	printf("enter the element to be inserted:");
	scanf("%d",&element);
	for(int i = length; i >= pos; i--){
		if(i == pos){
			arr[i] = arr[i-1];
		}
	}
	arr[pos - 1] = element;
	printf("Updated array: ");
	    for (int i = 0; i <= length; i++) {
	        printf("%d ", arr[i]);
	    }
	    printf("\n");
	
	return 0;
}
