import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		StringTokenizer st;
		coordinate coord[] = new coordinate[N];
		
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			coord[i] = new coordinate(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
		}
		Arrays.sort(coord);
		for(int i = 0; i < N; i++) {
			System.out.println(coord[i].toString());
		}
	}
	public static class coordinate implements Comparable<coordinate> {
		int x;
		int y;
		public coordinate(int x, int y) {
			this.x = x;
			this.y = y;
		}
		
		@Override
		public int compareTo(coordinate o) {
			// TODO Auto-generated method stub
			if(this.x > o.x) {
				return 1;
			} else if(this.x == o.x) {
				if(this.y > o.y) {
					return 1;
				} else {
					return -1;
				}
			} else {
				return -1;
			}
		}
		@Override
		public String toString() {
			// TODO Auto-generated method stub
			return this.x + " " + this.y;
		}
	}
}