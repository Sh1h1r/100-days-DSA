#include <stdio.h>

int main() {
    int length;
    printf("enter the length of the array: ");
    scanf("%d", &length);

    int arr[length];

    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < length / 2; i++){
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
