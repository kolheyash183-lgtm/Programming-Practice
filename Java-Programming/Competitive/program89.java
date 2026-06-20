//write a program  to find the ssum of even and odd digits separtely in a nuumber


class Logic
{
    void sumEvenOddDigits(int num)
    {
        int digit = 0;
        int evenSum = 0;
        int oddSum = 0;

        while(num != 0)
        {
            digit = num % 10;

            if(digit % 2 == 0)
            {
                evenSum = evenSum + digit;
            }
            else
            {
                oddSum = oddSum + digit;
            }

            num = num / 10;
        }

        System.out.println("Sum of Even Digits : " + evenSum);
        System.out.println("Sum of Odd Digits  : " + oddSum);
    }
}

class program89
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(1234556);
    }
}
