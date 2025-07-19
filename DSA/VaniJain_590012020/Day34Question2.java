import java.util.*;
public class AddOneBitwiseManual 
{
    public static void main(String[] args) 
  {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = sc.nextInt();
        int m = 1;  
        while ((n & m) != 0) 
        {
            n = n ^ m;  
            m <<= 1;   
        }
        n = n ^ m;  
        System.out.println("Result after adding 1: " + n);
    }
}
