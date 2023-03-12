import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
class cl8{
    public static void main(String[] args)
    {
        InputStreamReader is=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(is);
        String name;
        int age;
        try
        {
            name=br.readLine();
            age=Integer.parseInt(br.readLine());
            System.out.println("name is"+name);
            System.out.println("age is"+age);
        }
        catch(Exception e)
        {
            System.out.println("ff");
        }
       
    }
}

