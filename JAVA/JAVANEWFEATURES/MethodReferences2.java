



public class MethodReferences2 {

    public static void ThreadStatus(){  
        System.out.println("Thread is running...");  
    }  
    public static void main(String[] args) {

        Thread ob=new Thread(MethodReferences2::ThreadStatus);
        ob.start();

        
    }
    
}
