import java.util.stream.*;

public class StreamAPI {

    public static void main(String[] args) {
        
         Stream.iterate(1, ele->ele+1)
             .filter(ele->ele>10)
             .limit(5)
             .forEach(System.out::println);
    }
    
}
