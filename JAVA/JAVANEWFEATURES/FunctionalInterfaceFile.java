
interface Hello{
    void say(String msg);
}
public class FunctionalInterfaceFile implements Hello{

    public void say(String msg){
         
         System.out.println("I am Functional Interface");

    }
    public static void main(String[] args) {
        
          FunctionalInterfaceFile ob=new FunctionalInterfaceFile();
          ob.say("I am Happy");
    }

}