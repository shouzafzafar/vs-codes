import java.util.Scanner;

public class j1 {
    public static void main(String[] args) {
        int n=12;
        Scanner sc=new Scanner(System.in);
        // n=sc.nextInt();
        for(int i=2;i<=n;)
        {
            if(n%i==0)
            { 
                System.out.print(i+"*");
                n=n/i;
            }
            else i++;
            
        }
    }
    
}
