#include <stdio.h>
#include <string.h>
int main(){
	char string[10];
	int flag = 1;
	printf("enter a string:");
	scanf("%s",string);
	char* pointer = string;
	int half = strlen(string) / 2;
	for(int i = strlen(string) - 1; i >= half; i-- ){
		if(*pointer == string[i]){
			pointer++;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 0) printf("not a plaindrome\n");
	else printf("is a plaindrome\n");
}
