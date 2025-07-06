import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int N = Integer.parseInt(br.readLine());
        
        Queue<Integer> cards = new LinkedList<>(); //큐 선언 후 값 삽입
        for(int i = 1; i <= N; i++) {
        	cards.add(i);
        }
        for(int i = 0; i < N - 1; i++) { //처리 수행
        	cards.remove();
        	int temp = cards.poll();
        	cards.add(temp);
        }
        bw.write(String.valueOf(cards.peek())); //출력
        
        bw.flush();
        bw.close();
    }
}