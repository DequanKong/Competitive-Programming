import java.util.*;
import java.io.*;

public class ccc12j1 {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter pr = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int speed_limit = readInt();
        int speed = readInt();

        if (speed <= speed_limit) {
            pr.println("Congratulations, you are within the speed limit!");
        } else {
            int excess_speed = speed - speed_limit;
            if (excess_speed <= 20) {
                pr.println("You are speeding and your fine is $100.");
            } else if (excess_speed <= 30) {
                pr.println("You are speeding and your fine is $270.");
            } else {
                pr.println("You are speeding and your fine is $500.");
            }
        }
        pr.flush();
    }

    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }

    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }
}