import java.util.Scanner;
public class ProductOfNumber {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a 2 number");
        int a=sc.nextInt();
        int b=sc.nextInt();
        ProductOfNumber(a,b);
    }
    public static int ProductOfNumber(int a ,int b) {
        int ProductOfNumber=a*b;
        System.out.println(ProductOfNumber);
        return ProductOfNumber;
    }
}
