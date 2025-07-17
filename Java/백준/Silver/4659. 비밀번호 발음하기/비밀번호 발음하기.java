import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String s ;
		StringBuilder sb = new StringBuilder();
		
		while(!(s = br.readLine()).equals("end")) {
			char arr[] = s.toCharArray();
			boolean first[] = new boolean[s.length()];
			boolean f = false;
			boolean second = true;
			boolean third = true;
			for(int i = 0; i < s.length(); i++) {
				char c = arr[i];
				
				if((c == 97) || (c == 101) || (c == 105) || (c == 111) || (c == 117)) {
					first[i] = true;
					f = true;
				} else {
					first[i] = false;
				}
				if(i >= 2) {
					if(first[i] == first[i - 1] && first[i - 1] == first[i - 2]) {
						second = false;
						break;
					}
				}
				if(i >= 1) {
					if(c != 'e' && c != 'o') {
						if(c == arr[i - 1]) {
							third = false;
							break;
						}
					}
				}
				
			}
			if(f && second && third) {
				sb.append("<" + s + ">" + " is acceptable.\n");
			} else {
				sb.append("<" + s + ">" + " is not acceptable.\n");
			}
		}
		br.close();
		System.out.print(sb);
	}
}