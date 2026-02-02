#include <stdio.h>
int main(){
	int length,pos;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < length; i++){
		printf("%d ",arr[i]);
	}
	printf("enter the position at which element is to be deleted:");
	scanf("%d",&pos);
	for(int i = pos - 1; i < length - 1 ; i++){	
			arr[i] = arr[i+1];
	}
	printf("Updated array: ");
	    for (int i = 0; i <= length; i++) {
	        printf("%d ", arr[i]);
	    }
	    printf("\n");
	
	return 0;
}
