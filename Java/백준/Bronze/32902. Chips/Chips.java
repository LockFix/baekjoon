import java.io.*;
import java.util.StringTokenizer;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        br.close();
        int k = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());
        System.out.print(n + 1 + " " + (n * k + 1));
    }
}