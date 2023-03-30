import java.util.Scanner;
public class PrimenNumberUsingFunction {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number to check a prime or not");
        int n=sc.nextInt();
        primenumber(n);
    }
    public static int primenumber(int n) 
    {
        int i;
        for( i=2; i<n; i++)
        {
            if(n%i==0)
            {
                System.out.println("not prime number");
                break;
            }
        }
        if(n==i)
        {
             System.out.println("prime number");
        }
        int primenumber = 0;
       return primenumber;
    }
}
