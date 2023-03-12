import java.util.Scanner;

public class first_at_end {
    public static void main(String[] args) {
        String a;
        char k=0;
        Scanner sc =new Scanner(System.in);
        a=sc.nextLine();
       String e[]=a.split(" ");
       for(int i=0;i<e.length;i++)
       {
        System.out.print(e[i].substring(1)+e[i].substring(0,1)+" ");
       }
    }
}
