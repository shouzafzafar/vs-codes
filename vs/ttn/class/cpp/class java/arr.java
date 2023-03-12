//done
import java.util.*;
class arr
{
    public static void main(String []x){
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int []arr=new int[n];
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int k:arr)
            System.out.print(k);
        
    }
}