import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		BigInteger N = new BigInteger(br.readLine());
		if(N.compareTo(new BigInteger("0")) == 0) {
			System.out.print(0);
			return;
		}
		int result = 0;
		String s = factorial(N, new BigInteger("1"));
		for(int i = s.length() - 1; s.charAt(i) == '0'; i--) {
			result++;
		}
		System.out.print(result);
	}
	public static String factorial(BigInteger n, BigInteger result) {
		result = result.multiply(n);
		if(n.compareTo(new BigInteger("2")) != -1) return factorial(n.subtract(new BigInteger("1")), result);
		else return result.toString();
	}
}