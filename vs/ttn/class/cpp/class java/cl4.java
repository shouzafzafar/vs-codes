class mco
{
    String color="red";
    int a=20;
}
class cl4 extends mco
{
    String color="pink";
    void disp()
    {
        System.out.println(color);
        System.out.println(super.color);
    }
    public static void main(String []x)
    {
        cl4 ob=new cl4();
        ob.disp();
    }
}