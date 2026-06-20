//Write a program to check wheter a number is prime or not   


class Logic
{
    void checkPrime(int num)
    {
        int i;

        if(num <= 1)
        {
            System.out.println(num + " is not a Prime Number");
            return;
        }

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                System.out.println(num + " is not a Prime Number");
                return;
            }
        }

        System.out.println(num + " is a Prime Number");
    }
}

class program86
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}
