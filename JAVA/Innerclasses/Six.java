import java.util.Base64;

public class Six {
    public static void main(String[] args) {
        
          String str="Hello i am normal ";
          byte[] b=str.getBytes();
          String base64=Base64.getEncoder().encodeToString(b);
          System.out.println(base64);

          byte[]c=Base64.getDecoder().decode(base64);
          String my=c.toString();
          System.out.println(my);

    }
}
