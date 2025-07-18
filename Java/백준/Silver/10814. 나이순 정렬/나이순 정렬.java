import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int iArray[];
	static String sArray[];
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		iArray = new int[N];
		sArray = new String[N];
		
		int age[] = new int[N];
		String name[] = new String[N];
		
		StringTokenizer st;
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			age[i] = Integer.parseInt(st.nextToken());
			name[i] = st.nextToken();
		}
		sort(age, name, 0, N - 1);
		StringBuilder sb = new StringBuilder();
		for(int i = 0; i < N; i++) {
			sb.append(age[i] + " " + name[i] + "\n");
		}
		System.out.print(sb);
		
	}
	private static void mergeSort(int age[], String name[], int middle, int start, int end) {
		int m = start;
		int n = middle + 1;
		int k = start;
		
		while(m <= middle && n <= end) {
			if(age[m] <= age[n]) {
				iArray[k] = age[m];
				sArray[k] = name[m];
				m++;
			} else {
				iArray[k] = age[n];
				sArray[k] = name[n];
				n++;
			}
			k++;
		}
		if(m > middle) {
			for(int i = n; i <= end; i++) {
				sArray[k] = name[i];
				iArray[k] = age[i];
				k++;
			}
		} else {
			for(int i = m; i <= middle; i++) {
				sArray[k] = name[i];
				iArray[k] = age[i];
				k++;
			}
		}
		for(int i = start; i <= end; i++) {
			age[i] = iArray[i];
			name[i] = sArray[i];
		}
		
	}
	private static void sort(int age[], String name[], int start, int end) {
		if(start < end) {
			int middle = (start + end) / 2;
			sort(age, name, start, middle);
			sort(age, name, middle + 1, end);
			mergeSort(age, name, middle, start, end);
		}
	}
}