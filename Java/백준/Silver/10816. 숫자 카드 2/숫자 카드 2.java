import java.io.*;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		HashMap<String, Integer> cards = new HashMap<String, Integer>();
		
		for(int i = 0; i < N; i++) {
			String number = st.nextToken();
			cards.put(number, cards.getOrDefault(number, 0) + 1);
		}
		
		int M = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine(), " ");
        br.close();
		for(int i = 0; i < M; i++) {
			sb.append(cards.getOrDefault(st.nextToken(), 0) + " ");
		}
		System.out.print(sb.toString());
	}
}