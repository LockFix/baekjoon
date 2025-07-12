import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		br.close();
		int year = 2024;
		int month = 8;
		
		N--;
		month += N * 7;
		if(month > 12) {
			year += month / 12;
			month %= 12;
			if(month == 0) {
				month = 12;
				year--;
			}
		}
		System.out.print(year + " " + month);
	}
}