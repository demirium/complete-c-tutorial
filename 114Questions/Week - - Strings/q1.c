#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int counter2=0, counter3=0, counter4=0;
    int lenght=0;
    lenght=strlen(sentence);
    for(int i=0; ;i++) {
        char ch=sentence[i];
        if(ch==' ' || ch=='\0') {
            if(lenght==2)
                counter2++;
            else if(lenght==3)
                counter3++;
            else if(lenght==4)
                counter4++;
            lenght==0;
        }
        else {
            lenght++;
        }
        if(ch=='\0')
            break;
    }
    printf("\nNumber of 2-letter words: %d", counter2);
    printf("\nNumber of 3-letter words: %d", counter3);
    printf("\nNumber of 4-letter words: %d", counter4);
    return 0;
}