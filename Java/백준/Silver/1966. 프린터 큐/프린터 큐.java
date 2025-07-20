import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(br.readLine());
		StringTokenizer st;
		
		for(int i = 0; i < T; i++) {
			st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken());
			int M = Integer.parseInt(st.nextToken());
			int count = 0;
			
			LinkedList<int[]> print = new LinkedList<>();
			st = new StringTokenizer(br.readLine());
			
			for(int j = 0; j < N; j++) {
				print.add(new int[] {j, Integer.parseInt(st.nextToken())});
			}
			while(!print.isEmpty()) {
				int temp[] = print.poll();
				boolean max = true;
				
				for(int k = 0; k < print.size(); k++) {
					if(temp[1] < print.get(k)[1]) {
						print.add(temp);
						for(int l = 0; l < k; l++) print.add(print.poll());
						max = false;
						break;
					}
					
				}
				if(!max) continue;
				count++;
				if(M == temp[0]) {
					break;
				}
			}
			System.out.println(count);
		}
		br.close();
	}
}