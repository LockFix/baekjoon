import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		double N = Integer.parseInt(br.readLine());
		
		int arr[] = new int[31];
		for(int i = 0; i < N; i++) {
			arr[Integer.parseInt(br.readLine())]++;
		}
		br.close();
		long rate = Math.round(N * (15.0 / 100.0));
		int count = 0;
		for(int i = 1; i < 31; i++) {
			if(count == rate) {
				break;
			}
			while(arr[i] != 0 && count != rate) {
				arr[i]--;
				count++;
			}
		}
		count = 0;
		for(int i = 30; i >= 0; i--) {
			if(count == rate) {
				break;
			}
			while(arr[i] != 0 && count != rate) {
				arr[i]--;
				count++;
			}
		}
		double result = 0;
		for(int i = 1; i < 31; i++) {
			result += i * arr[i];
		}
		System.out.print(Math.round(result /  (N - rate * 2.0)));
	}
}