import java.util.*;
public class ccc15s2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int J = sc.nextInt(), A = sc.nextInt(), jersey [] = new int[J+1];
		for(int i=1; i<=J; i++) {
			String size = sc.next();
			jersey[i] = getSize(size);
		}
		int ans = 0;
		for(int i=1; i<=A; i++) {
			String size = sc.next(); int num = sc.nextInt();
			if(jersey[num] >= getSize(size)) {
				ans++;
				jersey[num] = 0;
			}
		}
		System.out.println(ans);
	}
	static int getSize(String s) {
		if(s.equals("L")) return 3;
		if(s.equals("M")) return 2;
		return 1;
	}
}