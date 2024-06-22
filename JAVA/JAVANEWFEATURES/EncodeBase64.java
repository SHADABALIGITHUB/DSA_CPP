import java.util.Base64;

public class EncodeBase64 {

     public static void main(String[] args) {
    String str="";

        // Base64 encoder=EncodeBase64
    
        Base64.Decoder encoder=Base64.getUrlDecoder();


        
        String str2=new String(encoder.decode(str));

        System.out.println(str2);
    
        
     }

   
     
    
}
