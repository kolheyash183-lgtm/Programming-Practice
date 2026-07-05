
abstract class Demo
{
    public int i,j;

    public int Add(int a, int b)
    {
        return 0;
    }

    public abstract int Sub(int a, int b);

}

class Hello extends Demo
{
    public int Sub(int a, int b)
    {
        return a-b;
    }
}


class abstract_demo_complete
{
    public static void main(String A[] )
     {
        Hello hobj = new Hello();

        System.out.println(hobj.Add(a:10,b:11));
    }
}
