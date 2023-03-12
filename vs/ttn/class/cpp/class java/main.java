class main{
    public static void main(String []x){
        
        double div=0,a,b;
        
            a=Double.parseDouble(x[0]);
            b=Double.parseDouble(x[1]);
            if(a==0)
            {
                System.out.println(" no i will not div");
            }
            else
            {
                div=a/b;
                System.out.println(" div is " + div);
            }
        
       
    }
}