#include <stdio.h>
int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int arr[n],unique_list[n];
	for(int i = 0; i < n; i++){
		printf("enter the %d element:",i + 1);
		scanf("%d",&arr[i]);
	}
	int index = 0;
	for(int i = 0; i < n; i++){
		int count = 1;
		for(int j = 0; j < index; j++){
			if(arr[i] == unique_list[j]) count++;
		}
		if(count == 1){
			unique_list[index] = arr[i];
			index++;
		}
	}
	for(int i = 0; i < index; i++){
		printf("%d\n",unique_list[i]);
	}
}
