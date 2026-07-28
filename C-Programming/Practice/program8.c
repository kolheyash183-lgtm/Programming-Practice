class ArrayDemomulti
{
    public static void main(String[] args)
    {
        int Arr[][] = new int[3][4];

        Arr[0][0] = 10;
        Arr[0][3] = 10;
        Arr[1][1] = 10;
        Arr[2][0] = 10;
        Arr[2][2] = 10;

        System.out.println(Arr.length);

        System.out.println(Arr[0].length);
        System.out.println(Arr[1].length);
        System.out.println(Arr[2].length);
    }
}
