import java.io.File;
class cl6{
    public static void main(String[] args)
    {
        File f=new File ("abc1.txt");
        // try {if(f.createNewFile()){
        //     System.out.println("newFile");
        // }}
        // catch (Exception e)
        // {
        //     System.out.println(e);
        //     System.out.println("old");
        // }
        System.out.println(f.length());
        System.out.println(f.getName());
        System.out.println(f.getAbsolutePath());
        System.out.println(f.canWrite());
        System.out.println(f.canRead());
    }
}