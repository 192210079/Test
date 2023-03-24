#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = 0.0;
    struct employee employees[MAX_EMPLOYEES];

    printf("Enter Limit: ");
    scanf("%d", &n);

    // Read details of employees
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Name           : ");
        scanf("%s", employees[i].ename);
        printf("Salary         : ");
        scanf("%f", &employees[i].salary);
    }

    // Find employee with highest salary
    for (i = 0; i < n; i++) {
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    // Display details of employee with highest salary
    printf("\nEmployee with highest salary:\n");
    printf("Employee Number: %d\n", employees[max_index].eno);
    printf("Name           : %s\n", employees[max_index].ename);
    printf("Salary         : %.2f\n", employees[max_index].salary);

    return 0;
}
//output: Enter Limit: 3

Enter details for employee 1:
Employee Number: 2
Name           : t
Salary         : 30000

Enter details for employee 2:
Employee Number: 3
Name           : f
Salary         : 40000

Enter details for employee 3:
Employee Number: 5
Name           : z
Salary         : 25000

Employee with highest salary:
Employee Number: 3
Name           : f
Salary         : 40000.00//
