import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine());
		
		for(int i = 0; i < T; i++) {
			int k = Integer.parseInt(br.readLine());
			int n = Integer.parseInt(br.readLine());
			int arr[][] = new int[k + 1][n + 1];
			
			for(int j = 1; j <= n; j++) {
				arr[0][j] = j;
			}
			for(int j = 1; j <= k; j++) {
				arr[j][1] = 1;
			}
			for(int j = 1; j <= k; j++) {
				for(int l = 1; l <= n; l++) {
					arr[j][l] = arr[j - 1][l] + arr[j][l - 1];
				}
			}
			System.out.println(arr[k][n]);
		}
	}
}