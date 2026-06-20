class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int sum = 0;

        for(iCnt = 1; iCnt < num; iCnt++)
        {
            if(num % iCnt == 0)
            {
                sum = sum + iCnt;
            }
        }

        if(sum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is Not a Perfect Number");
        }
    }
}

class Program98
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}
