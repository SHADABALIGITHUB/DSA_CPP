import java.util.function.BiFunction;

class Add{
    public static int add(int a ,int b){
         return a+b;
    }
}


public class BiFunctionalMethodReferences {

    public static void main(String[] args) {

        BiFunction<Integer,Integer,Integer> adder=Add::add;

    
        

        System.out.println(adder.apply(10,20));
        




    }


    
}
