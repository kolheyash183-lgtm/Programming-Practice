//wriete a program to print to odd numbers up to N
// Write a program to print odd numbers up to N

class Logic
{
    void printOddNumbers(int n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

class program87
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}
