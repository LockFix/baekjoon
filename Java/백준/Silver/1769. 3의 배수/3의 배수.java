import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		String s = br.readLine();
		br.close();
		int count = 0;
		while(s.length() != 1) {
			int sum = 0;
			for(int i = 0; i < s.length(); i++) {
				sum += s.charAt(i) - 48;
			}
			s = String.valueOf(sum);
			count++;
		}
		bw.write(count + "\n");
		if(Integer.parseInt(s) % 3 == 0) {
			bw.write("YES");
		} else {
			bw.write("NO");
		}

		bw.flush();
		bw.close();
	}
}