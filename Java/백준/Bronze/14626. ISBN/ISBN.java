import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String code = br.readLine();
		int index = 0;
		br.close();
		
		int sum = code.charAt(12) - '0';
		for(int i = 0; i < code.length() - 1; i++) {
			if(code.charAt(i) == '*') {
				index = i;
				i++;
				continue;
			};
			sum += code.charAt(i) - '0';
			i++;
		}
		for(int i = 1; i < code.length() - 1; i++) {
			if(code.charAt(i) == '*') {
				index = i;
				i++;
				continue;
			}
			sum += (code.charAt(i) - '0') * 3;
			i++;
		}
		if((index + 1) % 2 == 0) {
			for(int i = 0; i <= 9; i++) {
				if((sum + i * 3) % 10 == 0) {
					System.out.print(i);
					return;
				}
			}
		} else {
			for(int i = 0; i <= 9; i++) {
				if((sum + i) % 10 == 0) {
					System.out.print(i);
					return;
				}
			}
		}
	}
}