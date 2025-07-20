/* 
	동적 계획법(DP 다이나믹 프로그래밍)
	Bottom-up 방식 이용
	메모이제이션 활용(fib, count)

*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine());
		int fib[] = new int[41];
		int count[][] = new int[41][2];
		fib[1] = 1;
		count[0][0]++;
		count[1][1]++;
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0; i < T; i++) {
			int N = Integer.parseInt(br.readLine());
			
			if(N == 0) {
				sb.append("1 0").append("\n");
				continue;
			} else if(N == 1) {
				sb.append("0 1").append("\n");
				continue;
			}
			
			for(int j = 2; j <= N; j++) {
				if(fib[j] != 0) continue;
				count[j][0] = count[j - 1][0] + count[j - 2][0];
				count[j][1] = count[j - 1][1] + count[j - 2][1];
				fib[j] = fib[j - 1] + fib[j - 2];
			}
			sb.append(count[N][0]).append(" ").append(count[N][1]).append("\n");
		}
		br.close();
		System.out.print(sb);
	}
}