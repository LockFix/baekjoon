import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		int hay[] = new int[N];
		int average = 0;
		for(int i = 0; i < N; i++) {
			int h = Integer.parseInt(br.readLine());
			average += h;
			hay[i] = h;
		}
        br.close();
		average /= N;
		int remain = 0;
		for(int i = 0; i < N; i++) {
			if(hay[i] > average) {
				remain += hay[i] - average;
				hay[i] -= average - hay[i];
			}
		}
		System.out.print(remain);
	}
}