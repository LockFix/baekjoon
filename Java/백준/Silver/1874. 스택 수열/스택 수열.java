import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		int arr[] = new int[N];
		for(int i = 0; i < N; i++) {
			arr[i] = Integer.parseInt(br.readLine());
		}
		br.close();
		StringBuilder sb = new StringBuilder();
		int index = 0;
		Stack<Integer> stack = new Stack<>();
		for(int i = 1; i <= N; i++) {
			stack.push(i);
			sb.append("+\n");
			
			while(!stack.isEmpty() && stack.peek() == arr[index]) {
				stack.pop();
				index++;
				sb.append("-\n");
			}
		}
		if(!stack.isEmpty()) System.out.print("NO");
		else System.out.print(sb);
	}
}