interface Saying{
    void say();
}

public class MethodReferenceInstance {
    public void say(){
        System.out.println("value is working");
    }

     public static void main(String[] args) {
         
          MethodReferenceInstance ob=new MethodReferenceInstance();
          
          Saying printer=ob::say;

          printer.say();




     }
    
}
