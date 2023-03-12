// static instance and both methods
//done
import java.util.*;
class abc10
{
   
    public static void main(String []x)
    {
        for(int i=1;i<=5;i++)
        {
            for(int k=0;k<=5-i;k++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<2*i;j++)
            {
                System.out.print("*");
            }
            
            System.out.println();
        }
        
    }
}