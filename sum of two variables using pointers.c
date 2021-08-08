#include<stdio.h>
main()
{
    float num1, num2, sum = 0.0;
    float *pnum1 = &num1, *pnum2 = &num2, *psum = &sum;

    printf("\n Enter the two numbers: ");
    scanf("%f %f",pnum1,pnum2);
    *psum = *pnum1 + *pnum2;
    printf("\n %f + %f = %.2f",*pnum1, *pnum2, *psum);
}
