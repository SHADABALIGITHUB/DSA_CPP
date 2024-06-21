interface Saying{
    String say(String msg,String text);
}

public class LambdaArgument{
    public static void main(String[] args) {
        
           
         
    

     Saying ob=(msg,text)->(msg+" "+text);

         System.out.println(ob.say("happy","ending"));

     

    //  ob.say("Lambda","we can work with each other");

    }
    
}
