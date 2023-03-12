class exeption
{
    void checkage(int a) throws exeption
    {
        if(a<18)
            throw new exeption("age cant be less than 18");
        else 
            System.out.print("ok");

    }
    public static void main(String []x)
    {
        try{
            checkage(15);
        }
        catch(exeption e){
            System.out.print(e);
        }
    }
    
}