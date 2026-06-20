//Writee a program to check whether a number is positive , negative , or zero.

// Write a program to check whether a number is positive, negative, or zero

class Logic
{
    void checkSign(int num)
    {
        if(num > 0)
        {
            System.out.println("Positive Number");
        }
        else if(num < 0)
        {
            System.out.println("Negative Number");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

class program90
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
