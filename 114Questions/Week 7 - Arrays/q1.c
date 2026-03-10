/*#include <stdio.h>

void ascent(int arr[]) {
    int size=10, max=arr[0];
    for(int i=0;i<10;i++) {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d\nThe numbers are in ascending order.", arr);

}

int main(void) {
    int arr[10];
    printf("Enter 10 integers: \n");
    scanf("%d", &arr);
    ascent(arr);
    return 0;
}*/

#include <stdio.h>

int main(void) {
    int arr[10], i, flag;
    printf("Enter 10 integers: ");
    for(i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<9;i++) {
        if (arr[i]<=arr[i+1])
            flag=1;
        else
            flag=0;
            break;
    }
    if(flag==1) 
        printf("Ascending order.\n");
    else
        printf("NOT Ascending order.\n");
    for(i=0;i<10;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}