#include <stdio.h>
int main(){
	int length,element,count = 1;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < length; i++){
		printf("%d ",arr[i]);
	}
	printf("enter the number to be found:");
	scanf("%d",&element);
	for(int i = 0; i < length; i++){
		if(arr[i] == element){
			printf("element found after %d iterations\n",count);
			printf("the index is:%d\n",i)
			break
		}
		else count++;
	}
	return 0;
}
