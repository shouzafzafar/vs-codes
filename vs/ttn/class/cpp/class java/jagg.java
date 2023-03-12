import java.util.*;
class jagg
{
    public static void main(String []x)
    {
        int r,c;
        Scanner sc = new Scanner(System.in);
        r=sc.nextInt();
        int[][]arr=new int[r][];
        for(int i=0;i<arr.length;i++)
        {
            arr[i]=new int[i+1];
        }
        for(int i=0;i<arr.length;i++)
        {int k=3;
            for(int j=0;j<arr[i].length;j++)
            {
                
                arr[i][j]=k;
                k=k+3;
            }
        }
        for(int []m:arr)
        {
            for(int k:m)
            {
                System.out.print(k+" ");
            }
            System.out.println(" ");
        }
    }
}