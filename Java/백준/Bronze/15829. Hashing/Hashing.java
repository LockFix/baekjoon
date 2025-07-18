import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int L = Integer.parseInt(br.readLine());
		String s = br.readLine();
		
		BigInteger result = new BigInteger("0");
		for(int i = 0; i < L; i++) {
			BigInteger ri = new BigInteger(String.valueOf(power(i)));
			BigInteger single = ri.multiply(new BigInteger(String.valueOf(s.charAt(i) - 96)));
			result = result.add(single);
		}
		result = result.mod(new BigInteger("1234567891"));
		System.out.print(result);
	}
	public static BigInteger power(int n) {
		BigInteger result = new BigInteger("1");
		for(int i = 0; i < n; i++) {
			result = result.multiply(new BigInteger("31"));
		}
		return result;
	}
}