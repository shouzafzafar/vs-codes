class animal
{
    void cat()
    {
        System.out.print("this is cat");
    }
}
class dog extends animal
{
    void bark()
    {
        System.out.print("bark");
    }
}
class baby_dog extends dog
{
    void weeb()
    {
        System.out.print("weeb");
    }
}
class test 
{
    public static void main(String []x){
        baby_dog ob=new baby_dog();
        ob.weeb();
        ob.cat();
    }
}