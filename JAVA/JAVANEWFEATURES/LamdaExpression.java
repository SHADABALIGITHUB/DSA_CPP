interface Saying{
      void say(String msg);
      default void cool(String name){
        System.out.println("I am valuable");
      }
}
public class LamdaExpression {

    public static void main(String[] args) {
         

        //    Saying ob=new Saying() {
        //        public void say(String msg){
        //             System.out.println("Lambda' i am Bro !");
        //        }

        //    };

        //   above without lambda 

           Saying ob=(String msg)->{
              
                  System.out.println("I am from lambda fun bro");
              
           };
           ob.say("papa ki pari");
           ob.cool("Mazza aya");

    }
    
}



