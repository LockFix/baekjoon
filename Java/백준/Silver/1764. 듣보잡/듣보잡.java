import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		
		Map<String, Integer> map = new HashMap<>();
		List<String> str = new ArrayList<>();
		
		for(int i = 0; i < N; i++) {
			map.put(br.readLine(), 1);
		}
		for(int i = 0; i < M; i++) {
			String s = br.readLine();
			if(map.getOrDefault(s, 0) == 1) {
				str.add(s);
			}
		}
		br.close();
		System.out.println(str.size());
		str.sort((o1, o2) -> o1.compareTo(o2));
		for(String s : str) {
			System.out.println(s);
		}
	}
}