import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        String s;
        Scanner in = new Scanner(System.in);
       
        BigInteger two = new BigInteger("2");
        BigInteger one = new BigInteger("1");
        
        while (in.hasNext()) {
            s = in.next();
            BigInteger a = new BigInteger(s);
            
            if (a.equals(one)) {
                System.out.println(1);
            } else {
                System.out.println(two.multiply(a).subtract(two));
            }
        }
    }
    
}
