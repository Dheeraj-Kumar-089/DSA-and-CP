import java.util.*;
public class Basic{
   public static void main(String[] args) {
   Scanner sc = new Scanner(System.in);
    int a,b;
    System.out.println("Enter the two integers: ");
    a = sc.nextInt();
    b = sc.nextInt();
    int r;



    while (b>0) {
      r=a%b;
      a=b;
      b=r;
    }
    int gcd = a ;
    System.out.println("The GCD of two number is: "+gcd);   
    
   } 
    
}