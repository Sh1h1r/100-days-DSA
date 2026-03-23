#include <stdio.h>

int fibonnaci(int n){
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else { return fibonnaci(n - 1) + fibonnaci(n - 2);}
}

int main(){
	int n,series;
	printf("enter the length of the series:");
	scanf("%d",&n);
	series = fibonnaci(n);
	printf("%d",series);
}
