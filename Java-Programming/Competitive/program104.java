//write a program to count total number of a factors of a given number
class Logic
{
    void countFactors(int num)
    {
        int count = 0;

        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        System.out.println("Total Factors = " + count);
    }
}

class Program104
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
