public class Main {
	public static void main(String[] args) {
		for(int i = 1000; i <= 9999; i++) {
			String twelve = Integer.toString(i, 12);
			String hex = Integer.toHexString(i);
			
			int dsum = (i % 10) + (i % 100 / 10) + (i % 1000 / 100) + (i / 1000);
			int tsum = 0;
			int hsum = 0;
			for(int j = 0; j < twelve.length(); j++) {
				if(twelve.charAt(j) >= 65) {
					tsum += twelve.charAt(j) - 87;
				} else {
					tsum += twelve.charAt(j) - 48;
				}
			}
			for(int j = 0; j < hex.length(); j++) {
				if(hex.charAt(j) >= 65) {
					hsum += hex.charAt(j) - 87;
				} else {
					hsum += hex.charAt(j) - 48;
				}
			}
			if(dsum == tsum && tsum == hsum) {
				System.out.println(i);
			}
		}
		
	}
}