

public class CurrentThread {

    public static void main(String[] args) {

          Thread Th=new Thread(new Runnable() {
            @Override
            public void run(){
                System.out.println("I am your thread");
            
            System.out.println(Thread.currentThread().getName());
            }
            
            
          },"Hello");

          Th.start();
         
        //  System.out.println(Thread.currentThread().getName());
    }
    
}
