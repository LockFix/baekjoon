import java.io.*;
import java.util.HashMap;
import java.util.StringTokenizer;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int N = Integer.parseInt(br.readLine());
        
        HashMap<Integer, String> problem = new HashMap<>();
        int min = 5;
        StringTokenizer st;
        for(int i = 0; i < N; i++) {
        	st = new StringTokenizer(br.readLine());
        	String s = st.nextToken();
        	int rank = Integer.parseInt(st.nextToken());
        	if(rank < min) min = rank;
        	problem.put(rank, s);
        }
        br.close();
        System.out.print(problem.get(min));
    }
}