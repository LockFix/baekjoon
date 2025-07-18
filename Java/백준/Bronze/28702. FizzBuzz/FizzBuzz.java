import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String s[] = new String[3];
		s[0] = br.readLine();
		s[1] = br.readLine();
		s[2] = br.readLine();
        
        br.close();
		
		for(int i = 2; i >= 0; i--) {
			if(s[i].charAt(0) >= 49 && s[i].charAt(0) <= 57) {
				int n = Integer.parseInt(s[i]) + 3 - i;
				
				if(n % 5 == 0 && n % 3 == 0) System.out.print("FizzBuzz");
				else if(n % 3 == 0) System.out.print("Fizz");
				else if(n % 5 == 0) System.out.print("Buzz");
				else System.out.print(n);
				return;
			}
		}
	}
}