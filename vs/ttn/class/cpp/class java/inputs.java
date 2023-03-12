// done
import java.util.*;
class inputs{
    public static void main(String []x){
        Scanner sc = new Scanner(System.in);
        String name;
        double Roll;
        double marks;

        System.out.println("Enter Name");
        name=sc.nextLine();
        
        System.out.println("Enter Roll Number");
        Roll=sc.nextInt();

        System.out.println("Enter Marks");
        marks=sc.nextDouble();

        System.out.println(" Name: " + name + " roll: " + Roll + " marks: " + marks);
    }
}