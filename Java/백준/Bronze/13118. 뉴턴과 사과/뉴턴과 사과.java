import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int p[] = new int[4];
        int result = 0;
        
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for(int i = 0; i < 4; i++) {
        	p[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine(), " ");
        int x = Integer.parseInt(st.nextToken());
        for(int i = 0; i < 4; i++) {
        	if(p[i] == x) {
        		result = i + 1;
        		break;
        	}
        }
        bw.write(String.valueOf(result));

        bw.flush();
        bw.close();
    }
}