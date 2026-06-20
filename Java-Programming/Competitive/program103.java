//Write a program to display all factors of a given numbers
class Logic
{
    void displayFactors(int num)
    {
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class Program103
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
