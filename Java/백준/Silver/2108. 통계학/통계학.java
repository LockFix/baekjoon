import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		long sum = 0;
		int arr[] = new int[N];
		int arr2[] = new int[8001];
		
		for(int i = 0; i < N; i++) {
			int temp = Integer.parseInt(br.readLine());
			arr[i] = temp;
			sum += temp;
			arr2[temp + 4000]++;
		}
		sum = Math.round((double)sum / (double)N);
		Arrays.sort(arr);
		int middle = arr[N / 2];
		int max = 0;
		int arr3[] = new int[8001];
		for(int i = 0; i < 8001; i++) {
			if(arr2[i] != 0) {
				if(arr2[i] > max) {
					max = arr2[i];
					arr3 = new int[8001];
					arr3[i] = i + 1;
				} else if(arr2[i] == max) {
					arr3[i] = i + 1;
				}
			}
		}
		Arrays.sort(arr3);
		int first = 10000;
		int second = 10000;
		for(int i = 0; second == 10000 && i < 8001; i++) {
			if(arr3[i] != 0 && first != 10000) {
				second = i;
				break;
			} else if(arr3[i] != 0 && first == 10000) {
				first = i;
			}
		}
		if(second != 10000) max = arr3[second] - 4001;
		else max = arr3[first] - 4001;
		int range = arr[N - 1] - arr[0];
		System.out.println(sum);
		System.out.println(middle);
		System.out.println(max);
		System.out.println(range);
	}
}