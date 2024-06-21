interface Hello{
    void say(String msg);
}
public class My implements Hello{

    public void say(String msg){
         
         System.out.println("I am Functional Interface");

    }
    public static void main(String[] args) {
        
          My ob=new My();
          ob.say("I am Happy");
    }

}