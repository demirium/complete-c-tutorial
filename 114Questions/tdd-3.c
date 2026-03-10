#include <stdio.h>

int main(void) {
    int sid=0;
    char lgrade;
    FILE *fp;
    fp=fopen("letter.txt", "w");
    printf("Add records to file with student's IDs and grades: ");
    if(fp!=NULL) {
        while(sid!=-999) {
            scanf("%d %c", &sid, &lgrade);
            if(sid!=-999) {
                fprintf(fp,"%d %c\n", sid, lgrade);
            }
        }
    }
    fclose(fp);
    return 0;
}