
interface Saying{
    void say();
}
public class MethodRefrences {
    public static void say(){
        System.out.println("solid hai ladka");
    }

    public static void main(String[] args) {

        Saying ob=MethodRefrences::say;

        ob.say();
        
    }
    
}
