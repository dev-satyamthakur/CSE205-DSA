import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int currentBal = 20000;
        long acNo = sc.nextLong();
        sc.nextLine();
        String name = sc.nextLine();
        char gen = sc.next().charAt(0);
        int amount = sc.nextInt();
        
        if (amount <= currentBal) {
            currentBal -= amount;
            if (gen == 'M') {
                System.out.println("Hi Mr. " + name + "!");
                System.out.println("Your Account Balance after withdrawl is " + currentBal + ".");
            } else if (gen == 'F') {
                System.out.println("Hi Ms. " + name + "!");
                System.out.println("Your Account Balance after withdrawl is " + currentBal + ".");
            }
        } else {
            if (gen == 'M') {
                System.out.println("Hi Mr. " + name + "!");
                System.out.println("Insufficient Funds! You can not withdraw " + amount + ".");
            } else if (gen == 'F') {
                System.out.println("Hi Ms. " + name + "!");
                System.out.println("Insufficient Funds! You can not withdraw " + amount + ".");
            }
        }
        
    }
}
