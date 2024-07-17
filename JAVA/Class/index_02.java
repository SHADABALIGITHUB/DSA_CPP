class Branch{
    int TotalStudent;
    String Topper;
    String CR;

    Branch(int TotalStudent,String Topper,String CR){
        this.TotalStudent=TotalStudent;
        this.Topper=Topper;
        this.CR=CR;
    }

    void Greeting(){
        System.out.println("Hello  " +this.Topper);
    }

    Branch (Branch Other){
        this.Topper=Other.Topper;
    }
}
public class index_02 {
    public static void main(String[] args){
        Branch IT=new Branch(86,"X","Y");
        Branch CSE=new Branch(100,"Arbaz Khan","Parv Pilania");
        
        // IT.TotalStudent=75;
        // IT.Topper="Faisal Khan";
        // IT.CR="Mohit Negi";

        IT.Greeting();

        System.out.println(IT.TotalStudent);
        System.out.println(IT.Topper);
        System.out.println(IT.CR);

        CSE.Greeting();

        System.out.println(CSE.TotalStudent);
        System.out.println(CSE.Topper);
        System.out.println(CSE.CR);

        Branch FD=new Branch(IT);
        System.out.println(FD.Topper);


    }
}