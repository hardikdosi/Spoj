import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        String s1, s2;
        
        for (int i = 0; i < 10; i++) {
            s1 = scan.next();
            s2 = scan.next();
            
            BigInteger a = new BigInteger(s1);
            BigInteger b = new BigInteger(s2);
            BigInteger c = new BigInteger("2");
            
            System.out.println((a.add(b)).divide(c));
            System.out.println((a.subtract(b)).divide(c));
        }   
    }
}
