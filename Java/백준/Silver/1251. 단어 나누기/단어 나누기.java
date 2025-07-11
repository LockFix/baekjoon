import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String s = br.readLine();
		int min = 0;
		
		for(int i = 0; i < s.length() - 2; i++) {
			if(s.charAt(i) < s.charAt(min)) {
				min = i;
			} else {
				min = compare(s, i, min, i, min);
			}
		}
		StringBuilder result = new StringBuilder();
		for(int i = min; i >= 0; i--) {
			result.append(s.charAt(i));
		}
		min++;
		for(int i = result.length(); i < s.length() - 1; i++) {
			if(s.charAt(i) < s.charAt(min)) {
				min = i;
			} else {
				min = compare(s, i, min, i, min);
			}
		}
		int tmp = result.length();
		for(int i = min; i >= tmp; i--) {
			result.append(s.charAt(i));
		}
		tmp = result.length();
		for(int i = s.length() - 1; i >= tmp; i--) {
			result.append(s.charAt(i));
		}
		System.out.print(result);
	}
	private static int compare(String string, int index, int min, int tmpI, int tmpM) {
		int result = index;
		if(tmpI == 0) return index;
		else if(tmpM == 0) return min;
		if(string.charAt(tmpI) == string.charAt(tmpM)) {
			tmpI--;
			tmpM--;
			result = compare(string, index, min, tmpI, tmpM);
		} else if(string.charAt(tmpI) > string.charAt(tmpM)) {
			return min;
		}
		return result;
	}
}