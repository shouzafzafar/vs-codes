import java.util.Scanner;


public class strings {
    public static void main(String[] args) {
        String a="shouzaf zafar";
        int[] arr=new int[26];
        int c=0;
        
        for(int i=0;i<a.length();i++)
        {
            if(a.charAt(i)>='a' || a.charAt(i)>='z')
            {
                int j=(a.charAt(i))-'a';
                arr[j]++;
            }
        }
        for(int i=0;i<arr.length;i++){
        if(arr[i]!=0)System.out.println((i+'a')+": "+arr[i]);
        }

    }
}
