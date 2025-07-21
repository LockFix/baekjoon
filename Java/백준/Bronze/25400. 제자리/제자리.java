import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int N = Integer.parseInt(br.readLine());
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        br.close();
        List<Integer> list = new ArrayList<>();
        
        int count = 0;
        for(int i = 0; i < N; i++) {
        	list.add(Integer.parseInt(st.nextToken()));
        }
        for(int i = 0; i < list.size(); i++) {
        	int temp = list.get(i);
        	if(temp != i + 1) {
        		list.remove(i);
        		count++;
        		i = -1;
        	}
        }
        System.out.print(count);
    }
}