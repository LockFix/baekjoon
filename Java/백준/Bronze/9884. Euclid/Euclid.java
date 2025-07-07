import java.io.*;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		int A = Integer.parseInt(st.nextToken());
		int B = Integer.parseInt(st.nextToken());
		
		bw.write(String.valueOf(gcd(A, B)));

		bw.flush();
		bw.close();
	}
	static int[] max(int a, int b) {
		int max[] = {b, a};
		if(a >= b) {
			max[0] = a;
			max[1] = b;
		}
		return max;
	}
	static int gcd(int a, int b) {
		int max[] = max(a, b);
		if(max[0] % max[1] == 0) return max[1];
		a = max[1];
		b = max[0] % max[1];
		
		return gcd(a, b);
	}
}