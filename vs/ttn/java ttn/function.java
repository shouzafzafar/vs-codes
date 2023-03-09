import java.util.Scanner;

public class function {
     static boolean  prime(int x){
        boolean flag=true;
        for(int i=2;i<x;i++)
        {
            if(x%i==0) 
            {
                flag =false;
                break;
            }
            
        }
        return flag;
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("entter number to check prime");
        n=sc.nextInt();
        // function f=new function();
        
        if(prime(n))
        {
            System.out.println("prime");
        }
        else System.out.println("not prime");
    }
}
