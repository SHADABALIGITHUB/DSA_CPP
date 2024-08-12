//   normal inner class 


public class First{

    class Dev{

        public void hello(){
            System.out.println("Hello from inner class");
        }

    }

    public static void main(String args[]){
        First ob1=new First();
        First.Dev ob=ob1.new Dev();
        ob.hello();


    }


}