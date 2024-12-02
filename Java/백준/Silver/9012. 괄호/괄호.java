import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int T = Integer.parseInt(br.readLine());
        StringTokenizer st;
        for(int i = 0; i < T; i++) {
        	st = new StringTokenizer(br.readLine(), "()", true);
        	if(st.nextToken().equals(")")) {
        		bw.write("NO\n");
        		continue;
        	}
        	int count = 1;
        	while(st.hasMoreTokens()) {
        		String temp = st.nextToken();
        		if(temp.equals(")")) count--;
        		else count++;
        		if(count < 0) {
        			bw.write("NO\n");
        			break;
        		}
        	}
        	if(count == 0) bw.write("YES\n");
        	else if(count > 0) bw.write("NO\n");
        }
        
        bw.flush();
        bw.close();
        
        br.close();
    }
}