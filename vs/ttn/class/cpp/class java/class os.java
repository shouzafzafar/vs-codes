class os
{
    os()
    {
        System.out.println("os class");
    }
    os(int a)
    {
        System.out.println(a);
    }
}
class cl5 extends os
{
    window(float p)
    {
        System.out.println("pp");
    }
    window()
    {
        System.out.println(" win class");
    }
    public static void main(String []x)
    {
        window ob = new window();
    }
}