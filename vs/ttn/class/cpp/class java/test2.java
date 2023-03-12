class vehicle
{
    
    void s()
    {
        System.out.print(speed);
    }
}
class car extends vehicle
{
    int speed=60;
}
class van extends vehicle
{
    int speed=20;
}
class activa extends vehicle
{
    int speed=50;
}
class test2
{
    public static void main(String []x){
    activa ob=new activa();
    vehicle ob1=new vehicle();
    ob.s();
    }
}