#include <stdio.h>

struct worker {
    char name[50];
    float wage;
    int wdays;
};

int main() {
    struct worker w1, w2;
    float total_payment;

    // Read details of first worker
    printf("Enter Details of First Worker\n");
    printf("Enter Worker Name : ");
    scanf("%s", w1.name);
    printf("Enter Wage        : ");
    scanf("%f", &w1.wage);
    printf("Enter wdays       : ");
    scanf("%d", &w1.wdays);

    // Read details of second worker
    printf("\nEnter Details of Second Worker\n");
    printf("Enter Worker Name : ");
    scanf("%s", w2.name);
    printf("Enter Wage        : ");
    scanf("%f", &w2.wage);
    printf("Enter wdays       : ");
    scanf("%d", &w2.wdays);

    // Calculate total payment
    total_payment = w1.wage * w1.wdays + w2.wage * w2.wdays;

    // Display total payment
    printf("\nTotal Payment: $%.2f\n", total_payment);

    return 0;
}
//output: Enter Details of First Worker
Enter Worker Name : xxx
Enter Wage : 1000
Enter wdays : 5

Enter Details of Second Worker
Enter Worker Name : bbb
Enter Wage : 800
Enter wdays : 6

Total Payment: $11000.00//