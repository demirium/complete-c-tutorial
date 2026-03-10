#include <stdio.h>
int arraycheck(int arr[], int size) {
    int count=0;
    for(int i=0;i<size;i++) {
        if(arr[i]>9 && arr[i]<100)
            count++;
    }
    return count;
}

int main(void) {
    int arr[10], size=10;
    printf("Enter 10 integers: ");
    for(int i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    printf("There are %d elements with two digits.", arraycheck(arr, size));
    return 0;
}