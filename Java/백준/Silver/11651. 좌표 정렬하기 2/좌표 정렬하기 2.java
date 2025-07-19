import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		int coord[][] = new int[N][2];
		
		StringTokenizer st;
		
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			coord[i][0] = Integer.parseInt(st.nextToken());
			coord[i][1] = Integer.parseInt(st.nextToken());
		}
		br.close();
		Arrays.sort(coord, (o1, o2) -> {
			if(o1[1] == o2[1]) {
				return o1[0] - o2[0];
			} else {
				return o1[1] - o2[1];
			}
		});
		for(int i = 0; i < N; i++) {
			System.out.println(coord[i][0] + " " + coord[i][1]);
		}
	}
}