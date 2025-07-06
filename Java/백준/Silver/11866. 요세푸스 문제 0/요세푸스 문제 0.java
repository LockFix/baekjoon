import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        br.close();
        int count = 0;
        
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        
        Queue<Integer> list = new LinkedList<>();
        for(int i = 1; i <= N; i++) {
        	list.add(i);
        }
        StringBuilder sb = new StringBuilder("<");
        while(!(list.isEmpty())) {
        	int temp = list.poll();
        	count++;
        	if(count == K) {
        		sb.append(String.valueOf(temp) + ", ");
        		count = 0;
        	} else {
        		list.add(temp);
        	}
        }
        sb.delete(sb.length() - 2, sb.length());
        sb.append(">");
        bw.write(sb.toString());

        bw.flush();
        bw.close();
    }
}