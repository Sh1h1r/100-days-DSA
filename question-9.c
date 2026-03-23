#include <stdio.h>
#include <string.h>
int main(){
	char string[10];
	printf("enter a string:");
	scanf("%s",string);
	int length = strlen(string);
	int range = length / 2;
	for(int i = 0; i < range; i++){
		char temp = string[i];
		string[i] = string[length - 1 - i];
		string[length - 1 - i] = temp;
	}
	printf("%s\n",string);
}
