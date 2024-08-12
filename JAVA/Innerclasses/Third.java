
//   anonymous class 

interface A{
    public void fuc1();
}

public class Third{

//      public void fuc1(){
//          System.out.println("working");
//      }

//      public static void main(String[] args) {
//           A ob=new Third();
//           ob.fuc1();
//      }

    
// }

public static void main(String args[]){

 new A(){
    public void fuc1(){
        System.out.println("Working Annonymous");
    }
}.fuc1();

}


}