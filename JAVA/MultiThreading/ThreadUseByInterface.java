
class A implements Runnable{
     public void run(){
         System.out.println("Running Interface");
     }
}

public class ThreadUseByInterface {

     public static void main(String args[]){

        //   A ob=new A();
        //   Thread Th=new Thread(ob);
        //   Th.start();

            Thread Th=new Thread(new A());
            Th.start();
        
          
           
     }
    
}
