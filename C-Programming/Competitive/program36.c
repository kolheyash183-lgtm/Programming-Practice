
//write a program which  accept radius of circule from user and calclate its area consider value of PI as 3.14(AREA = PI *Radius *Radius)
//input: 5.3
//output:88.2026

//input: 10.4
//output:339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    double dArea = 0.0;
    
    dArea = fPI * fRadius * fRadius;
    
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    // Filling in the template's missing printf statement
    printf("Area of circle is: %lf\n", dRet);

    return 0;
}

