import java.util.Scanner;

public class a_del {
    public static void main(String[] args) {
        String a ="shouzaf";
        int x=0;
        // Scanner sc=new Scanner(System.in);w
        // a=sc.nextLine();


        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)=='a') {
                a=a.substring(0, i)+a.substring(i+1);
                i--;
            }
        }
        for(int i=0;i<a.length();i++){
        System.out.print(a.charAt(i));
        }
        
    }
}
