import java.util.*;
class twod
{
    public static void main(String []x)
    {
        int r,c;
        Scanner sc = new Scanner(System.in);
        r=sc.nextInt();
        c=sc.nextInt();
        int[][]arr=new int[r][c];
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                arr[i][j]=sc.nextInt();
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