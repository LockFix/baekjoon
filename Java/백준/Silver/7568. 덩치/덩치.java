import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		StringTokenizer st;
		
		int weight[] = new int[N];
		int height[] = new int[N];
		
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			weight[i] = Integer.parseInt(st.nextToken());
			height[i] = Integer.parseInt(st.nextToken());
		}
		
		br.close();
		
		for(int i = 0; i < N; i++) {
			int ranking = 1;
			for(int j = 0; j < N; j++) {
				if(weight[j] > weight[i] && height[j] > height[i]) {
					ranking++;
				}
			}
			System.out.print(ranking + " ");
		}
	}
}