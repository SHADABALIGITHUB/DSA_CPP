abstract class Test<T>{
   abstract T fun(T a,T b);
}

public class Annoymous {

    public static void main(String[] args) {
         
           Test<String> a= new Test<>(){
                @Override
                String fun(String a,String b){
                    return a+b;
                }

           };

            System.out.println(a.fun("Hey","Bye"));

           
    }
    
}

