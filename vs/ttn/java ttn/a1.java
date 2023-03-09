import java.util.Scanner;

public class a1 {
    public static void main(String[] args) {
        int n,sum=0;
        
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=2;i<arr[i];i++)
        {
           if(arr[i]%i==0)
            { 
                flag = false;
                break;
            }
        }
        if(flag=true)sum+=arr[i]
System.out.println(sum);



        // for(int i=0;i<arr.length;i++){System.out.println(arr[i]);}
    }
    
}
