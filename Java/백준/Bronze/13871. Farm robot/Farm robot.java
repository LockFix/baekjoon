import java.io.*;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		int N = Integer.parseInt(st.nextToken());
		int C = Integer.parseInt(st.nextToken());
		int S = Integer.parseInt(st.nextToken());
		int index = 1;
		int result = 0;
		st = new StringTokenizer(br.readLine(), " ");
		for(int i = 0; i < C; i++) {
			String s = st.nextToken();
			if(s.equals("1")) {
				if(index != N) {
					index++;
				} else {
					index = 1;
				}
				if(index == S) {
					result++;
				}
			} else {
				if(index != 1) {
					index--;
				} else {
					index = N;
				}
				if(index == S) {
					result++;
				}
			}
		}
		if(S == 1) result++;
		System.out.print(result);
		
	}
}