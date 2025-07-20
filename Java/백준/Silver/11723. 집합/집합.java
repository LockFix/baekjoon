import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int M = Integer.parseInt(br.readLine());
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		List<Integer> list = new ArrayList<>();
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			String cmd = st.nextToken();
			int value = 0;
			if(st.hasMoreTokens()) value = Integer.parseInt(st.nextToken());
			
			switch(cmd) {
			case "add":
				if(!list.contains(value)) list.add(value);
				break;
			case "remove":
				if(list.contains(value)) list.remove(list.indexOf(value));
				break;
			case "check":
				if(list.contains(value)) sb.append("1\n");
				else sb.append("0\n");
				break;
			case "toggle":
				if(list.contains(value)) list.remove(list.indexOf(value));
				else list.add(value);
				break;
			case "all":
				list = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 ,18, 19 ,20));
				break;
			case "empty":
				list = new ArrayList<>();
				break;
			}
		}
		System.out.print(sb);
		br.close();
	}
}