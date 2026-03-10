#include <stdio.h>

int main(void) {
    int sid1, sid2;
    int gr;
    char lgrade;
    FILE *fp, *fp1, *fp2;
    fopen("result.txt", "w");
    fopen("grade.txt", "r");
    fopen("letter.txt", "r");

    if(fp1!=NULL && fp2!=NULL) {
        while(!feof(fp1)) {
            fscanf(fp1, "%d %d", &sid1, &gr);

            while(!feof(fp2)) {
                fscanf(fp2, "%d %c", &sid2, &lgrade);   
                if(sid1==sid2) {
                    fprintf(fp, "%d %d %c\n", sid1, gr, lgrade);
                    printf("%d %d %c\n", sid1, gr, lgrade);
                }
            }
            rewind(fp2);
        }
    }
    
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    return 0;
}