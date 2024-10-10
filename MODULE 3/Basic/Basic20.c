#include <stdio.h>
int main() 
{
    double salary, insurancePremium, loanInstallment, remainingSalary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);

    insurancePremium = salary * 0.25;
    loanInstallment = salary * 0.25;

    remainingSalary = salary - (insurancePremium + loanInstallment);

    printf("Monthly Salary: %.2lf\n", salary);
    printf("Insurance Premium (25%%): %.2lf\n", insurancePremium);
    printf("Loan Installment (25%%): %.2lf\n", loanInstallment);
    printf("Remaining Salary: %.2lf\n", remainingSalary);

    return 0;
}
