#include <stdio.h>

int top = -1;
int stack[100]; 

void push(int element){
    if(top == 99){
        printf("stack overflow\n");
        return;
    }
    stack[top++] = element;
}

int pop(){
    if(top == -1){
        printf("stack underflow\n");
        return -1;
    }
    int element = stack[top];
    top--;
    return element;
}

int main(){
    push(10);
    push(20);

    printf("%d popped\n", pop());
    printf("%d popped\n", pop());
    printf("%d popped\n", pop());  

    return 0;
}
