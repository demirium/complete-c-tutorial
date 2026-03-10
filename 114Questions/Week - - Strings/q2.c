/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char sentence[100];
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int lenght=0, word=0, wordcount=0, charactercount=0;
    int arr[];
    lenght=strlen(sentence);
    for(int i=0;i<lenght;i++) {
        char ch=sentence[i];
        if(ch!=' ') {
            charactercount++;
        }
        if(ch==' ') {
            arr[i]=charactercount;
            charactercount=0;
            wordcount++;
        }
        if(ch=='\0')
        break;
    }
    for(int i=1;i<=wordcount;i++) {
        printf("Word %d: %c\n", arr[i-1]);
    }
}
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char line[100];
    int wordLenghts[100];
    int wordCount=0;
    int currentLenght=0;

    printf("Enter a line: ");
    gets(line);
    for(int i=0; line[i]!='\0';i++) {
        if(!isspace(line[i])) {
            currentLenght++;
        }
        else if(currentLenght>0) {
            wordLenghts[wordCount]=currentLenght;
            wordCount++;
            currentLenght=0;
        }
    }
    if(currentLenght>0) {
        wordLenghts[wordCount++]=currentLenght;
    }
    printf("Number of words = %d\n", wordCount);
    for(int i=0;i<wordCount;i++) {
        printf("Word %d:", i+1);
        for(int j=0;j<wordLenghts[i];j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}