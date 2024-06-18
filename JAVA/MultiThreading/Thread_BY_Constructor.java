class A implements Runnable{
      public void run(){
          System.out.println("Running From thread cLass");
      }
}

public class Thread_BY_Constructor {
      public static void main(String[] args) {
        
     
      Runnable ob=new Thread(new A());
    //   ob.start();
      try{
      Thread.sleep(10000);
      }catch(Exception e){
        System.out.println(e);
      }

      Thread Th=new Thread("Asif ali");
      Th.start();
      System.out.println(Th.getName());
      
      Thread T2=new Thread(ob,"SHADAB");
      System.out.println(T2.getName());


      }

    
}
