//done
class ex
{
    int a;
    int b;
}
class cl3 extends ex
{
    int c;
    public static void main(String []x)
    {
        cl3 ob=new cl3();
        ob.a=10;
        ob.b=20;
        ob.c=30;
        System.out.println("a: " + ob.a + ", b: " + ob.b +", c: " + ob.c );
    }
}