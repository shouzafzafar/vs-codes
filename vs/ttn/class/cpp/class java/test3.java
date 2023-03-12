interface bank2{
    int count=0;
    void disp();
}
interface company{
    void name();
    void age();
}
class  pnb2 implements bank2,company{
    public void disp()
    {
        System.out.println("pnb2");
    }
    public void name()
    {
        System.out.println("name");
    }
    public void age()
    {
        System.out.println("age");
    }
}
class test3 {
    public static void main(String []x)
    {
        pnb2 ob = new pnb2();
        ob.disp();
        ob.name();
        ob.age();
    }
}