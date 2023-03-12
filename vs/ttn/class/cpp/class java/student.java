import java.util.*;
class student{
    int a;
    String name;
    void get_data()
    {
        Scanner sc = new Scanner(System.in);
        a=sc.nextInt();
        name=sc.next();
    }
    void dis()
    {
        System.out.print(name + ":");
        System.out.println(a);

    }
    public static void main(String []x)
    {
        student[]s=new student[3];
        for(int i=0;i<s.length;i++)
        {
            s[i]=new student();
            s[i].get_data();
        }
        for(int i=0;i<s.length;i++)
        {
            s[i].dis();
        }

    }
}