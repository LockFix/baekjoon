import java.io.*;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		br.close();
		int A = Integer.parseInt(st.nextToken());
		int B = Integer.parseInt(st.nextToken());
		
		long step = A - 1;
		long result = 1;
		for(int i = 0; i < B; i++) {
			result += step;
			step += A - 2;
		}
		System.out.print(result);
	}
}