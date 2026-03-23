#include <stdio.h>
int main(){
	int arr[10] = [1,2,2,3,4,5,6,6,6,6];
	int* ptr = arr;
	for(int i = 0; i < 10; i++){
		if(arr[i] == *ptr){
			continue;
		}
		else{
			*ptr = arr[i];
			ptr++;
		}
	}
}
