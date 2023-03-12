//done
class cl2
{
    int a,b;
    cl2()
    {
        a=10;
        b=20;
    }
    cl2(int x,int y)
    {
        a=x;
        b=y;
    }
    void dis()
    {
        System.out.println(a + " " + b);
    }
    public static void main(String []x)
{
    cl2 ob1=new cl2();
    cl2 ob2=new cl2(1,2);
    ob1.dis();
    ob2.dis();
}
}


