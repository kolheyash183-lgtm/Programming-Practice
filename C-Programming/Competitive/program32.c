//Accept amount in US dollor and return its corresponding value in indian currency conside 1$ as 70 rupees

//Input: 10
//Output:700

//Input: 3
//Output:270

//Input: 1200
//Output:84000
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iResult = 0;
    
    iResult = iNo * 70;
    
    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
