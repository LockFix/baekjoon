import java.io.*;
import java.util.StringTokenizer;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        br.close();
        int n = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        
        int count = 0;
        
        for(int i = 1; i <= n; i++) {
        	String s = String.valueOf(i);
        	for(int j = 0; j < s.length(); j++) {
        		if(s.charAt(j) - '0' == d) count++;
        	}
        }
        System.out.print(count);
    }
}