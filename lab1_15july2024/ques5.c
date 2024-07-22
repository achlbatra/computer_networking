// wap to create a structure employee with name, basic_salary. input the details and calculate gross salary on the basis :
// ta = 3% of bs
// da = 15% of bs
// hra = 7% of bs
#include<stdio.h>
struct employee
{
    char name[25];
    float basic_salary;
    float ta;
    float da;
    float hra;
    float gross;
};
int main()
{
    struct employee emp1;
    printf("enter name of employee1 : ");
    gets(emp1.name);
    printf("enter basic salary of employee1 : ");
    scanf("%f", &emp1.basic_salary);
    emp1.ta = 0.03*emp1.basic_salary;
    emp1.da = 0.15*emp1.basic_salary;
    emp1.hra = 0.07*emp1.basic_salary;
    emp1.gross = emp1.basic_salary + emp1.hra;
    printf("Employee details are : \n");
    printf("Name : %s\n", emp1.name);
    printf("Basic Salary : Rs. %f\n", emp1.basic_salary);
    printf("TA : Rs. %f\n", emp1.ta);
    printf("DA : Rs. %f\n", emp1.da);
    printf("HRA : Rs. %f\n", emp1.hra);
    printf("Gross Salary : Rs. %f\n", emp1.gross);
}