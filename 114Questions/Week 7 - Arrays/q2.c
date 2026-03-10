#include <stdio.h>
int main(void) {
    int st_count;
    printf("Enter the student count: ");
    scanf("%d", &st_count);
    int st_id[st_count];
    int scores[st_count];
    for(int i=0;i<st_count;i++) {
        printf("Enter the student's id and score: ");
        scanf("%d %d", &st_id[i], &scores[i]);
    }
    printf("Students with scores between 70 and 80: \n");
    for(int i=0;i<st_count;i++) {
        if(scores[i]>70 && scores[i]<80) {
            printf("-> %d points | ID: %d\n", scores[i], st_id[i]);
        }
    }
}