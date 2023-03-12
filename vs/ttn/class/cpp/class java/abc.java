// static instance and both methods
//done
import java.util.*;
class abc
{
    int a,b;
    void max()
    {
        
        if(a>b)
        {
            System.out.println("a is bigger: " + a);
        }
        else if(b>a)
            System.out.println("b is bigger: " + b);
        else if(a==b)
            System.out.println("same");
    }
    public static void main(String []x)
    {

        Scanner sc = new Scanner(System.in);
        abc ob=new abc();
		abc ob1=new abc();
        ob1.a=sc.nextInt();
		ob.a=sc.nextInt();
        ob.b=sc.nextInt();
        ob.max();
    }
}