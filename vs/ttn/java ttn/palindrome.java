public class palindrome {
    
    public static void main(String[] args) {
        String a="mom";
        int j=0;
        boolean flag=true;
        for(int i=a.length()-1;i>0;i--)
        {
            if(a.charAt(j)!=a.charAt(i)){
                flag=false;
            }
            j++;

    }
        if(flag) System.out.println("yes");
        else System.out.println("no");
        System.out.println(a.length());
        
    }
}
