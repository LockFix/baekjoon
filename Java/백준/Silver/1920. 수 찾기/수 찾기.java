import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int N = Integer.parseInt(br.readLine());
        HashMap<String, Long> map = new HashMap<String, Long>();
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++) {
        	map.put(st.nextToken(), 1l);
        }
        int M = Integer.parseInt(br.readLine());
        
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < M; i++) {
        	String temp = st.nextToken();
        	if((map.get(temp) != null) && (map.get(temp) == 1)) {
        		bw.write("1\n");
        	} else {
        		bw.write("0\n");
        	}
        }
        bw.flush();
        bw.close();
        
        br.close();
        
        
    }
}