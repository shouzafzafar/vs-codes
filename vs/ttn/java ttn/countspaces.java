import java.util.Scanner;

public class countspaces {
    public static void main(String[] args) {
        String a ;
        int x=0;
        Scanner sc=new Scanner(System.in);
        a=sc.nextLine();


        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)==' ') {x++;}
        }
        System.out.println(x);
        
    }
}
