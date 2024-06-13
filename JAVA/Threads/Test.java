

class Test2 extends Thread{
     public void run(){
        System.out.println("Running..");
     }

}

public class Test{
      public static void main (String args[]){

          Test2 ob=new Test2();
          ob.start();

      }
}