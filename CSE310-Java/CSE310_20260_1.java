import java.io.*;
import java.util.*;
import java.lang.Math;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double num = sc.nextDouble();
        double cbroot = Math.cbrt(num);
        if (Math.ceil(cbroot) == cbroot) {
            System.out.println("Perfect Cube");
        } else {
            System.out.println("Not Perfect Cube");
        }
        
    }
}
