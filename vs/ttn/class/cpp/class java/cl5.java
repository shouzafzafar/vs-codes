import java.io.*;
class cl5
{
    
    // public static void main(String []x) throws Exception
    // {
    //     FileOutputStream f=new FileOutputStream("cl5.txt");
    //     String s="shouzaf";
    //     byte []b=s.getBytes();
    //     f.write(b);
    //     f.close();
    // }
    public static void main(String []x) throws Exception
    {
        FileInputStream f1=new FileInputStream("cl5.txt");
        int a;
        // System.out.println((char)a);
        while((a=f1.read())!=-1)
        {
            System.out.println((char)a);
        }
    }
}