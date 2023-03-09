import java.util.Scanner;

public class anagram {
    public static void main(String[] args) {
        String a;
        String b;
        // char i;
        int c1=0,c2=0;
        boolean flag=true;
        Scanner sc=new Scanner(System.in);
        a=sc.nextLine();
        b=sc.nextLine();
        for(char i='a';i<='z';i++)
        {
            c1=0;
            c2=0;
            for(int j=0;j<=a.length()-1;j++)
            {
                if(a.charAt(j)==i) c1++;
            }
            for(int k=0;k<=b.length()-1;k++)
            {
                if(b.charAt(k)==i) c2++;
            }
            if(c1!=c2) 
    {
        flag=false;
        System.out.println("no");
        break;
    }
        }
        if(flag)System.out.println("yes");
    }
}
