import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        br.close();
        
        int a = Integer.parseInt(st.nextToken());
        int d = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        
        boolean check = false;
        for(int i = 0; a <= k && d > 0 ; i++, a += d) {
        	if(a == k) {
        		check = true;
        		bw.write(String.valueOf(i + 1));
        	}
        }
        for(int i = 0; a >= k && d < 0; i++, a += d) {
        	if(a == k) {
        		check = true;
        		bw.write(String.valueOf(i + 1));
        	}
        }
        if(!check) {
        	bw.write("X");
        }

        bw.flush();
        bw.close();
    }
}