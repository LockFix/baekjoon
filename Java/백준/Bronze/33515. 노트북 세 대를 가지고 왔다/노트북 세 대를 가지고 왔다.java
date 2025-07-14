import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		br.close();
		
		int T1 = Integer.parseInt(st.nextToken());
		int T2 = Integer.parseInt(st.nextToken());
		
		if(T1 >= T2) {
			System.out.print(T2);
		} else {
			System.out.print(T1);
		}
	}
}