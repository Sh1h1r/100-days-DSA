#include <stdio.h>
int main(){
	int length_1,length_2;
	printf("enter the length of log 1:");
	scanf("%d",&length_1);
	printf("enter the length of log 2:");
	scanf("%d",&length_2);
	int arr[length_1],arr_1[length_2];
	for(int i = 0; i < length_1; i++){
		printf("enter element of log 1:");
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < length_2; i++){
		printf("enter element of log 2:");
		scanf("%d",&arr_1[i]);
	}
	int dup[length_2 + length_1];
	for(int i = 0; i < length_2 + length_1; i++){
		if(i < length_1) dup[i] = arr[i];
		else dup[i] = arr_1[i - length_1];
	}
	for(int i = 0; i < length_1 + length_2; i++){
		for(int j = i; j < length_1 + length_2; j++){
			if( dup[i] > dup[j] ){
				int temp = dup[i];
				dup[i] = dup[j];
				dup[j] = temp;
			}
		}
	}

	for(int i = 0; i < length_1 + length_2; i++){
		printf("%d ",dup[i]);
	}
}
