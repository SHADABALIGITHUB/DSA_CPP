
class A extends Thread{
     
      public void run(){

          System.out.println("Running");
         
      }

}
public class Thread_BY_Class{
      public static void main(String args[]){
      A ob=new A();
      ob.start();
      }
     
}