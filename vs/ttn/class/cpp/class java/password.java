import java.util.*;
public class password {
    public static void main(String z[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int len=str.length();
        int s=0,u=0,l=0,d=0;
        for(int i=0;i<len;i++){
            if('A'<=str.charAt(i) && str.charAt(i)<='Z'){
                u++;
            }
            else if('a'<=str.charAt(i) && str.charAt(i)<='z'){
                l++;
            }
            else if('0'<=str.charAt(i) && str.charAt(i)<='9'){
                d++;
            }
            else{
                s++;
            }
        }
        if(s>0 && u>0 && l>0 && d>0 && len>8){
            System.out.print("OK");
        }else{
            throw new ArithmeticException("Wrong password");
        }
    }

}