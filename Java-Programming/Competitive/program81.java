//Write a progrram to find the sum of digits of a number
class Logic
{
    void sumOfDigits(int num)
    {
        int digit = 0, sum = 0;

        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        System.out.println("Sum of digits is : " + sum);
    }
}

class Program81
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
