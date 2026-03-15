#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void honorStudentCheck(float totalGPA) {
    if(totalGPA >= 3.50) {
        printf("\nCONG! You are a high honor student!\n");
    }
    else if(totalGPA >= 3.00) {
        printf("\nCONG! You are a honor student!\n");
    }
    else if(totalGPA < 2.00) {
        printf("\nWARN! You have to arrange a meeting with your academic informator.\n");
    }
}

void erasmusStudentCheck(float totalGPA) {
    if(totalGPA >= 2.20) {
        printf("\nYou can apply to Erasmus programs.\n");
    }
    else {
        printf("\nYou can't apply to Erasmus programs.\n");
    }
}

void gpaToHundredSystem(float totalGPA) {
    float hundredGPA;
    hundredGPA = (totalGPA * 100) / 4;
    printf("Term GPA (Out of 100): %.2f\n", hundredGPA);
}

void neededGPACalculation(float targetForCalculation, float overallECTSSum, float nextTermECTS, float overallWeightedSum) {
    float neededGPACalc;
    neededGPACalc = (targetForCalculation * (overallECTSSum + nextTermECTS) - overallWeightedSum) / nextTermECTS;
    if(neededGPACalc > 4.00) {
        printf("NOT POSSIBLE IN MATH");
    }
    else {
        printf("%.2f (At least)", neededGPACalc);
    }
}

void printBarChart(float termGPA[], int termCount) {
    const int H = 10;
    const float MAX = 4.0f;

    int h[termCount];
    for (int i = 0; i < termCount; i++) {
        float g = termGPA[i];
        if (g < 0) {
            g = 0;
        }
        if (g > MAX) {
            g = MAX;
        }
        
        h[i] = (int)((g / MAX) * H + 0.5f);
        
        if (h[i] < 0) {
            h[i] = 0;
        }
        
        if (h[i] > H) {
            h[i] = H;
        }
    }
    
    printf("\n   ^\n");

    for (int row = H; row >= 1; row--) {
 
        if (row == H) {
            printf("%2d |", H);
        }
        else if (row == H/2) {
            printf("%2d |", H/2);
        }
        else {
            printf("   |");
        }

        for (int i = 0; i < termCount; i++) {
            if (h[i] >= row) {
                printf(" █ ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("   +");
    for (int i = 0; i < termCount; i++) {
        printf("---");
    }
    printf(" ->\n");

    printf("    ");
    for (int i = 0; i < termCount; i++) {
        if (i + 1 < 10) printf("T%d ", i + 1);
        else            printf("%d ", i + 1);
    }
    printf("\n");
}

void printTermSummaryTable(float termGPA[], int termCount) {
    printf("\n┌────────┬──────────┬──────────┐\n");
    printf("│ Term   │ GPA(4)   │ GPA(100) │\n");
    printf("├────────┼──────────┼──────────┤\n");
    for(int i = 0; i < termCount; i++) {
        float g100 = (termGPA[i] * 100.0f) / 4.0f;
        printf("│ %-6d │ %-8.2f │ %-8.2f │\n", i+1, termGPA[i], g100);
    }

    printf("└────────┴──────────┴──────────┘\n");
}

int main(void) {

    int termCount=0;

    printf("\n");
    printf("    ____ ____   _       ____      _            _       _\n");
    printf("   / ___|  _ \\ / \\     / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n");
    printf("  | |  _| |_) / _ \\   | |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n");
    printf("  | |_| |  __/ ___ \\  | |__| (_| | | (__| |_| | | (_| | || (_) | |\n");
    printf("   \\____|_| /_/   \\_\\  \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n");
                                                   
    printf("\nPlease enter the term count which are/is calculated: ");
    scanf("%d", &termCount);

    if(termCount <= 0) {
        printf("\nERROR! Term count can not be 0 or negative. Please try again.\n");
        return 0;
    }
    
    char minimumPassLetter[3];
    printf("\nPlease enter the minimum passing grade letter: ");
    scanf("%2s", minimumPassLetter);
    
    minimumPassLetter[0] = toupper(minimumPassLetter[0]);
    minimumPassLetter[1] = toupper(minimumPassLetter[1]);

    float overallWeightedSum = 0.0f;
    float overallECTSSum = 0.0f;

    float termGPA[termCount];

    for(int o = 0; o < termCount; o++) {

        int lectureCount = 0;
        float numericGPA = 0.0f;
        float totalECTS = 0.0f;

        int maxIndex = 0, minIndex = 0;
        int passedCounter = 0;
        int failedCounter = 0;

        printf("\n--- TERM #%d ---\n", o+1);
        printf("Please enter the taken lecture count in term #%d: ", o+1);
        scanf("%d", &lectureCount);

        if(lectureCount <= 0) {
            printf("\nERROR! Lecture count can not be 0 or negative. Please try again.\n");
            return 0;
        }

        char lectureGrade[lectureCount][3];
        char lectureName[lectureCount][10];
        float lectureECTS[lectureCount];
        float tempPerLectureGPA[lectureCount];
        char passedFailed[lectureCount];

        for(int i = 0; i < lectureCount; i++) {

            printf("Please enter the term #%d' #%d lecture name: ", o+1, i+1);
            scanf("%9s", lectureName[i]);

            printf("Please enter the letter grade of %s: ", lectureName[i]);
            scanf("%2s", lectureGrade[i]);
            
            lectureGrade[i][0] = toupper(lectureGrade[i][0]);
            lectureGrade[i][1] = toupper(lectureGrade[i][1]);

            printf("Please enter the ECTS of %s: ", lectureName[i]);
            scanf("%f", &lectureECTS[i]);

            if(lectureECTS[i] <= 0) {
                printf("\nERROR! ECTS of a lecture can not be 0 or negative. Please try again.\n");
                return 0;
            }

            totalECTS += lectureECTS[i];

            if(strcmp(lectureGrade[i], "AA") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 4.0 * lectureECTS[i];
                    numericGPA += (4.0 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "BA") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 3.5 * lectureECTS[i];
                    numericGPA += (3.5 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "BB") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 3.0 * lectureECTS[i];
                    numericGPA += (3.0 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "CB") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 2.5 * lectureECTS[i];
                    numericGPA += (2.5 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "CC") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 2.0 * lectureECTS[i];
                    numericGPA += (2.0 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "DC") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 1.5 * lectureECTS[i];
                    numericGPA += (1.5 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "DD") == 0) {
                if(strcmp(lectureGrade[i], minimumPassLetter) <= 0){
                    passedFailed[i] = 'P';
                    passedCounter++;
                    tempPerLectureGPA[i] = 1.0 * lectureECTS[i];
                    numericGPA += (1.0 * lectureECTS[i]);
                }
                else {
                    tempPerLectureGPA[i] = 0.0;
                    numericGPA += 0.0f;
                    passedFailed[i] = 'F';
                    failedCounter++;
                }
            }
            else if(strcmp(lectureGrade[i], "FF") == 0 || strcmp(lectureGrade[i], "NA") == 0) {
                tempPerLectureGPA[i] = 0.0;
                numericGPA += 0.0f;
                passedFailed[i] = 'F';
                failedCounter++;
            }
            else {
                printf("\nERROR! Please enter a valid letter grade.\n");
                return 0;
            }

            if (i == 0) {
                maxIndex = 0;
                minIndex = 0;
            } else {
                if (tempPerLectureGPA[i] >= tempPerLectureGPA[maxIndex]) maxIndex = i;
                if (tempPerLectureGPA[i] <= tempPerLectureGPA[minIndex]) minIndex = i;
            }

            printf("\n");
        }

        float totalGPA = numericGPA / totalECTS;
        termGPA[o] = totalGPA;

        overallWeightedSum += numericGPA;
        overallECTSSum += totalECTS;

        printf("\n--- \tTERM #%d CALCULATED!\t ---\n", o+1);
        printf("Term GPA: %.2f\n", totalGPA);
        
        gpaToHundredSystem(totalGPA);

        printf("\n");
        printf("┌────────────┬───────┬────────┬──────┐\n");
        printf("│ Course     │ Grade │ ECTS   │ P/F  │\n");
        printf("├────────────┼───────┼────────┼──────┤\n");
        for(int j=0;j<lectureCount;j++) {
            printf("│ %-10s │ %-5s │ %-6.1f │ %-4c │\n",
                   lectureName[j],
                   lectureGrade[j],
                   lectureECTS[j],
                   passedFailed[j]);
        }
        printf("└────────────┴───────┴────────┴──────┘\n");

        printf("\n--- \tDETAILED INFORMATION\t ---\n");
        printf(" Best course: %s\n", lectureName[maxIndex]);
        printf(" Worst course: %s\n", lectureName[minIndex]);
        printf(" Passed course(s): ");
        if(passedCounter==0) {
            printf("There are no passed course(s)");
        }
        else {
            for(int i=0;i<lectureCount;i++) {
                if(passedFailed[i] == 'P') printf("%s ", lectureName[i]);
            }
        }
        printf("\n Failed course(s): ");
        if(failedCounter!=0) {
            for(int i=0;i<lectureCount;i++) {
                if(passedFailed[i] == 'F') printf("%s ", lectureName[i]);
            }
        }
        else {
            printf("There are no failed course(s)");
        }
        printf("\n");
    }

    float overallGPA = overallWeightedSum / overallECTSSum;

    printf("\n==============================\n");
    printf("FINAL RESULTS (ALL TERMS)\n");
    printf("==============================\n");

    printTermSummaryTable(termGPA, termCount);

    printf("\nOverall GPA (ECTS-weighted): %.2f\n", overallGPA);

    honorStudentCheck(overallGPA);
    erasmusStudentCheck(overallGPA);
    
    printf("\n==============================\n");
    printf("SUCCESS BAR CHARTS (ALL TERMS)\n");
    printf("==============================\n");
    
    printBarChart(termGPA, termCount);

    char selection;
    
    printf("\n\nDo you want to set an aim? (Y: for yes, N: for no)");
    scanf(" %c", &selection);
    
    selection = toupper(selection);
    
    if(selection == 'Y') {
        float targetGPA = 0.0;
        float nextTermECTS;
        
        printf("Please enter your target GPA: ");
        scanf("%f", &targetGPA);
        
        printf("Please enter the ects of next term: ");
        scanf("%f", &nextTermECTS);
        
        float neededNextTermGPA;
        neededNextTermGPA = (targetGPA * (overallECTSSum + nextTermECTS) - overallWeightedSum) / nextTermECTS;
        
        if(neededNextTermGPA > 4.00) {
            printf("\nIt is mathematically impossible!");
        }
        else if(neededNextTermGPA < 0.00) {
            printf("\nYou have already reached your target GPA.\n");
        }
        else {
            printf("\nYou need at least %.2f GPA next term.\n", neededNextTermGPA);
        }
        
        float targetForCalculation = 0.0;
        printf("\n\n --- Other Targets ---");
        printf("\n For 3.00 \t|\t ");
        targetForCalculation = 3.00;
        neededGPACalculation(targetForCalculation, overallECTSSum, nextTermECTS, overallWeightedSum);
        printf("\n For 3.20 \t|\t ");
        targetForCalculation = 3.20;
        neededGPACalculation(targetForCalculation, overallECTSSum, nextTermECTS, overallWeightedSum);
        printf("\n For 3.50 \t|\t ");
        targetForCalculation = 3.50;
        neededGPACalculation(targetForCalculation, overallECTSSum, nextTermECTS, overallWeightedSum);
        printf("\n\n(These results are calculated with assuming 30 ECTS)");
        
    }
    else if(selection == 'N') {
        printf("\nERROR! Invalid input, please try again.");
    }
    
    printf("\n");
    return 0;
}
