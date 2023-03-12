abstract class bank{
    bank(){
        System.out.println("hello");
    }
    abstract int roi();
    void disp(){
        System.out.println("bank");
    }
}
class sbi extends bank{
    int roi(){
        return 7;
    }
}
class hdfc extends bank{
    int roi(){
        return 8;
    }
    void disp(){
        System.out.println("hdfc");
   
    }
}
class banktest {
    public static void main(String []x){
        bank ob1=new sbi();
        System.out.println(ob1.roi());
        ob1.disp();

    }
}