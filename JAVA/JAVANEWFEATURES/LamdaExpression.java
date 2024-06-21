interface Saying{
      void say(String msg);
      default void cool(String name){
        System.out.println("I am Deafult");
      }
}
public class LamdaExpression {

    public static void main(String[] args) {
         
  //   below  without lambda 
  
        //    Saying ob=new Saying() {
        //        public void say(String msg){
        //             System.out.println("Lambda' i am Bro !");
        //        }

        //    };

//    below with lambda using= ()

        //    Saying ob=(msg)->{
              
        //           System.out.println("I am from lambda fun bro");
              
        //    };

//    below with lambda without () 

      Saying ob=msg->{

        System.out.println("lambda without ()");

      };
           ob.say("papa ki pari");
           ob.cool("Mazza aya");

    }
    
}



