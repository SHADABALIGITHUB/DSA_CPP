class A extends Thread{
     
    public void run(){
         System.out.println("I am not working with That");
    }
}

public class MethodsThread {

     public static void main(String args[]){
          
              A ob=new A();
              
              ob.start();
              ob.setPriority(10);
              
              ob.setName("Asif Ali");
           
             System.out.println(ob.getPriority());
             System.out.println(ob.getClass());
             
             
             System.out.println(ob.getContextClassLoader());
             System.out.println(ob.getId());
             System.out.println(ob.getName());
             System.out.println(ob.getState());
             System.out.println(A.currentThread());
             System.out.println(ob.isAlive());
             System.out.println();
     }
    
}
