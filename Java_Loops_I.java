import java.util.Scanner;
public class Java_Loops_I {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int n, c, i;
        n = input.nextInt();
        for (i = 1 ; i<= 10 ; i++)
        {
            c = n*i;
            System.out.println(n + " " + "x" + " " + i + " " + "=" + " " + c);
        }
        
     }
     
}
 