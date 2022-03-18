#include <stdio.h>
int main()
{
    float sales_amt,com=0;
    char grade;
    printf("nhap Sales Amount:");
    scanf("%f",&sales_amt);
    fflush(stdin); 
    printf("nhap Grade:");
    scanf("%c",&grade);
    if (sales_amt > 10000)
        if (grade == 'A')
            com = sales_amt * 0.1;
        else
            com = sales_amt * 0.08;
    else
        com = sales_amt * 0.05;
        printf("\n Commission = %f", com);
    return 0;
}