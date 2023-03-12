interface bank2{
    int m= 10;
    void disp();
}
class pub2 impliments bank2
{
    void disp()
    {
        System.out.println("pub");
    }
}
class banktest2 {
    public static void main(String []x){
        bank2 ob1=new ();
        System.out.println(ob1.roi());
        ob1.disp();

    }
}