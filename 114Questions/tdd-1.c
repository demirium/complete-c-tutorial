#include <stdio.h>
#include <string.h>

struct SalesPerson{
    char name[50];
    float commission;
    float amountSold;
};

int main(void) {
    struct SalesPerson people[5];
    float totalSales=0;
    float averageSales;

    for(int i=0;i<5;i++) {
        printf("Please enter name of the salesperson %d: ", i+1);
        scanf("%s", people[i].name);
        printf("Please enter amount sold by the salesperson %d: ", i+1);
        scanf("%f", &people[i].amountSold);

        totalSales+=people[i].amountSold;
    }
    averageSales=totalSales/5;

    for(int i=0;i<5;i++) {
        if(people[i].amountSold<5000) {
            people[i].commission=people[i].amountSold*0.04;
        }
        else {
            people[i].commission=people[i].amountSold*0.06;
        }
        if(people[i].amountSold>averageSales) {
            people[i].commission+=50;
        }
    }

    printf("\nSalesperson's Name\tAmount Sold\tTotal Commission Earned\n");
    for(int i=0;i<5;i++) {
        printf("%-15s\t\t%.2f\t\t%.2f\n", people[i].name, people[i].amountSold, people[i].commission);
    }
    return 0;
} 