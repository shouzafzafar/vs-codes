//done
import java.util.*;

class rev
{
    static int n;
    static int rev()
    {
        int rev=0,rem;
        while(n!=0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
           
        }
        return rev;

    }
    public static void main(String []x)
    {
        Scanner sc = new Scanner(System.in);
        
        n=sc.nextInt();
        int t=rev();
        System.out.println("rev is" + t);
    }
}