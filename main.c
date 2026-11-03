#include <stdio.h>

int main(void)
{
    
    double revenue;
    double expenses;
    double balance;


    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("--------------------------------------\n");

    printf("Enter total revenue : ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    printf("\nRevenue : %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance : %.2f\n", balance);

    
    printf("\n--- EXTENSION: MUNICIPAL SUMMARY ---\n");

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter payroll amount: ");
    scanf("%lf", &payroll);

    printf("Enter procurement amount: ");
    scanf("%lf", &procurement);

    printf("Enter assets value: ");
    scanf("%lf", &assets);

    printf("\nDepartments : %d\n", departments);
    printf("Payroll     : %.2f\n", payroll);
    printf("Procurement : %.2f\n", procurement);
    printf("Assets      : %.2f\n", assets);
    printf("Budget      : %.2f\n", balance);

    return 0;
}