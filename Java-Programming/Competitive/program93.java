//write a program to check whether a number is divisiblre by 5 and 11 or not

// Write a program to display the grade of a student based on marks

class Logic
{
    void displayGrade(int marks)
    {
        if(marks < 0 || marks > 100)
        {
            System.out.println("Invalid Marks");
        }
        else if(marks >= 90)
        {
            System.out.println("Grade A");
        }
        else if(marks >= 80)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 70)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade D");
        }
        else if(marks >= 40)
        {
            System.out.println("Grade E");
        }
        else
        {
            System.out.println("Fail");
        }
    }
}

class program2
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}
