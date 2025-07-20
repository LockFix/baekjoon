import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int M = Integer.parseInt(st.nextToken());
		
		HashMap<Integer, String> number = new HashMap<>(); //포켓몬 번호로 검색
		HashMap<String, Integer> name = new HashMap<>(); //포켓몬 이름으로 검색
		
		StringBuilder sb = new StringBuilder();
		
		for(int i = 1; i <= N; i++) { //도감 입력
			String string = br.readLine();
			number.put(i, string);
			name.put(string, i);
		}
		for(int i = 0; i < M; i++) {
			String temp = br.readLine();
			if(temp.charAt(0) < 'A') { //포켓몬 번호라면
				sb.append(number.get(Integer.parseInt(temp))).append("\n");
			} else { //포켓몬 이름이라면
				sb.append(name.get(temp)).append("\n");
			}
		}
		System.out.print(sb);
	}
}