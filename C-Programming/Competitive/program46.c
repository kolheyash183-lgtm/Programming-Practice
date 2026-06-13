#include<stdio.h>
//Wreite a program which acceept radius of circle from user and calculate its area consider value of PI As 3.14 (Area = PI * RAdius * Radius)

//Input : 5.3
//Output : 88.2026

//Input : 10.4
//Output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
   return 3.14 * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is : %lf\n",dRet);

    return 0;

}
