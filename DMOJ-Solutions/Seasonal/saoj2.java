import java.util.*;
public class saoj2 {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] argv) {
        long n = sc.nextLong();
        System.out.println("#include <stdio.h>");
        System.out.println("int main() {");
        System.out.println("    printf(\"" + ((n+1)*n/2) +"\");");
        System.out.println("}");
        System.out.println();
    }
}