#include <stdio.h>
int power(int a,int n){
	if (n == 1) return a;
	else if(n == 0) return 1;
	else{
		return power(a,n - 1) * power(a,1);
	}
}

int main(){
	int a , n;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the power:");
	scanf("%d",&n);
	int ouput = power(a,n);
	printf("%d",ouput);
}
