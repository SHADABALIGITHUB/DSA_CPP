interface A{
    int hello(int a,int b);
}
public class Five {
        
      
      public static void main(String[] args) {

          A ob=(a,b) -> a+b;

          System.out.println(ob.hello(23,12));
        
      }

    
    
}
