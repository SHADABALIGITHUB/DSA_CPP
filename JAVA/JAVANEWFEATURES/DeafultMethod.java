interface Saying{
    void abstractmethod();

    default void defaultmethod(){
        System.out.println(" default Method i am ");
    }

    static void staticmethod(){

        System.out.println(" Static from Saying");

    }
}

public class DeafultMethod implements Saying{

    public void abstractmethod(){
        System.out.println("Abstract from saying");
    }

    public static void main(String[] args) {

        DeafultMethod ob=new DeafultMethod();

        ob.abstractmethod();
        ob.defaultmethod();
        Saying.staticmethod();

        
    }
     

}