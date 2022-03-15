#include <stdio.h>

int main()
{
    float basic_salary, gross_salary, da, hra;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic_salary);

/* Calculate DA and HRA */
    if(basic_salary <= 10000)
    {
        da  = basic_salary    * 0.8;
        hra = basic_salary * 0.2;
    }
    else if(basic_salary <= 20000)
    {
        da  = basic_salary * 0.9;
        hra = basic_salary * 0.25;
    }
    else
    {
        da  = basic_salary * 0.95;
        hra = basic_salary * 0.3;
    }

    /* Calculate gross salary */
    gross_salary = basic_salary + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross_salary);

    return 0;
}