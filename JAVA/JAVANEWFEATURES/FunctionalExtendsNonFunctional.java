
interface Hey{
      default void fine()
         {
            System.out.println("I am Fine !");
         }
}
@FunctionalInterface
interface Saying extends Hey{
     void say(String msg);

}
public class FunctionalExtendsNonFunctional implements Saying{

     public void say(String msg){
        System.out.println("I am Functional interface Extends");
     }
      public static void main(String args[]){
          
           FunctionalExtendsNonFunctional ob=new FunctionalExtendsNonFunctional();
           ob.say("papa ki");
         //   ob.fine();

          
      }
    
}
