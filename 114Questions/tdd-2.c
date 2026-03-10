#include <stdio.h>
int main(void) {
    int sid, i, n;
    int gr;
    FILE *fp;

    fp=fopen("grade.c","w");

    printf("How many students are in the classroom?");
    scanf("%d", &n);
    printf("Add records to file with student id (4 digits) and grade out of 100:\n");
    if(fp!=NULL) {
        for(i=0;i<n;i++) {
            scanf("%d %d", &sid, &gr);
            fprintf(fp,"%d %d\n", sid, gr);
        }
    }
    fclose(fp);
    return 0;
}