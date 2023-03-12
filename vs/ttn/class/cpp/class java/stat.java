class stat{
    int a=20; static int b=30;
    static
    {
        System.out.println("hello");
        b=26;
    }
    public static void main(String []x)
    {
        System.out.println("main");
        System.out.println(stat.b);
    }
    static
    {
        System.out.println("bye");
        
    }
}