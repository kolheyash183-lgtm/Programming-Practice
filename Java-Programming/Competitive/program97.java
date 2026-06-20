//Write a program to display the grade of a student based on marks
class Logic
{
    void displayGrade(int marks)
    {
    
        if(marks >= 75)
        {
            System.out.println("Distinction");
        }
        else if(marks >= 65)
        {
            System.out.println("First Class");
        }
        else if(marks >= 55)
        {
            System.out.println("Second Class");
        }
        else if(marks >= 35)
        {
            System.out.println("Pass Class");
        }
        else
        {
            System.out.println("Fail");
        }
    }
    }


public class program97
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
    
}
