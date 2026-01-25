#include <stdio.h>
#include <stdlib.h>

#define days 3 /* to change the number of day(s), basicly modify this value (for ex. 5, 6, 7) */

#define SLEEP_SCORE_HIGH 30
#define SLEEP_SCORE_MEDIUM 20
#define SLEEP_SCORE_LOW 10

#define STEP_COUNT_SCORE_HIGH 30
#define STEP_COUNT_SCORE_MEDIUM 20
#define STEP_COUNT_SCORE_LOW 10

#define WATER_INTAKE_SCORE_HIGH 20
#define WATER_INTAKE_SCORE_MEDIUM 10
#define WATER_INTAKE_SCORE_LOW 5

#define HAPPY_SCORE 20
#define NORMAL_SCORE 10
#define STRESSED_SCORE 5
#define SAD_SCORE 0

int calculateHealthScore(int mood, float sleep, float water, int steps);
void giveFeedback(int score);

int main(void) {
    float totalScore = 0.0;
    int day = 1;
    int mood, steps, score, bestScore = -1, worstScore = 101, bestDay = 0, worstDay = 0; /* i define worstscore and bestscore like that because i try to make guard check */
    float sleep, water;
    printf("--- ATILIM DAILY WELLNESS TRACKER ---\n");
    while (day<=days) {
        printf("-> Day %d <-\n", day);
        do {
            printf("* Enter step(s) walked: ");
            scanf("%d", &steps);
        } while (steps < 0);
        do {
            printf("* Enter hour(s) of sleep (0-24): ");
            scanf("%f", &sleep);
        } while (sleep < 0 || sleep > 24);
        do {
            printf("* Enter water intake in liter(s): ");
            scanf("%f", &water);
        } while (water < 0);
        do {
            printf("* Enter your mood (1 for Happy | 2 for Normal | 3 for Stressed | 4 for Sad): ");
            scanf("%d", &mood);
        } while (mood < 1 || mood > 4);
        score = calculateHealthScore(mood, sleep, water, steps);
        totalScore += score;
        
        printf("\n* Day %d Score: %d/100\n", day, score);
        giveFeedback(score);
        
        if (score > bestScore) {
            bestScore = score;
            bestDay = day;
        }
        if (score < worstScore) {
            worstScore = score;
            worstDay = day;
        }
        
        day++;
        
    }
    
    float average = totalScore / days;
    printf("\n--- SUMMARY OF %d DAY(S) ---\n", days);
    printf("* Average Score: %.2f\n", average);
    printf("* Best Day: Day %d with %d points\n", bestDay, bestScore);
    printf("* Worst Day: Day %d with %d points\n", worstDay, worstScore);

    return 0;
}

/* firstly this area calculates the total health score based on daily inputs for sleep, steps, water, and mood */

int calculateHealthScore(int mood, float sleep, float water, int steps) {
    int score = 0;
    
    if (sleep >= 7 && sleep <= 9)
        score += SLEEP_SCORE_HIGH;
    else if ((sleep >= 5 && sleep <= 6.9) || (sleep > 9 && sleep <= 11))
        score += SLEEP_SCORE_MEDIUM;
    else
        score += SLEEP_SCORE_LOW;
    
    if (steps >= 8000)
        score += STEP_COUNT_SCORE_HIGH;
    else if ((steps >= 5000) && (steps <= 7999))
        score += STEP_COUNT_SCORE_MEDIUM;
    else
        score += STEP_COUNT_SCORE_LOW;
    
    if (water >= 2.0)
        score += WATER_INTAKE_SCORE_HIGH;
    else if ((water >= 1.0) && (water <=1.99))
        score += WATER_INTAKE_SCORE_MEDIUM;
    else
        score += WATER_INTAKE_SCORE_LOW;
    
    switch(mood) {
        case 1:
            score += HAPPY_SCORE;
            break;
        case 2:
            score += NORMAL_SCORE;
            break;
        case 3:
            score += STRESSED_SCORE;
            break;
        case 4:
            score += SAD_SCORE;
            break;
        default:
            break;
    }
    return score;
}

/* lastly this area provides feedback based on the score */

void giveFeedback(int score) {
    if (score >= 80)
        printf("TRACKERS COMMENT | Excellent day! Keep it up!\n\n");
    else if (score >= 60)
        printf("TRACKERS COMMENT | Good day, keep going!\n\n");
    else if (score >= 40)
        printf("TRACKERS COMMENT | Average day, try to improve!\n\n");
    else
        printf("TRACKERS COMMENT | Unhealthy day, be careful!\n\n");
}
