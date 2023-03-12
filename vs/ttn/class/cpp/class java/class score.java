class score
{
    int s;
    String name;

    void get_data()
    {
        Scanner sc = new Scanner(System.in);
        s=sc.nextInt();
        name=sc.next();
    }
    void dis()
    {
        System.out.print(name + ":");
        System.out.println(s);
    }
    void low_score()
    {

    }
    public static void main(String []x)
    {
        score []s=new score(5);
    }
}