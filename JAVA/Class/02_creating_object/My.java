class Car{
     public void start(){
         System.out.println("Car is starting");
     }
}

class My{
    public static void main(String args[]){
        System.out.println("Main method started");
        Car c = new Car();
        c.start();

    }
}