
class A extends Thread{
     
      public void run(){

          System.out.println("Running");
         
      }

}
public class ThreadBYClass{
      public static void main(String args[]){
      A ob=new A();
      ob.start();
      }
     
}