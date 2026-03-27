#include <stdio.h>
int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("enter the %d element:",i + 1);
		scanf("%d",&arr[i]);
	}
	int frequency[1000] = {0};
	for(int i = 0; i < length; i++){
		frequency[arr[i]]++;
	}

	for(int i = 0; i < 1000; i++){
		if(frequency[i] > 0){
			printf("%d -> %d   ",i,frequency[i]);
		}
	}

	return 0;
}
