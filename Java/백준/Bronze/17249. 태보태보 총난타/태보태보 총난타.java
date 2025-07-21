import java.io.*;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String s = br.readLine();
        String l = s.substring(0, s.indexOf('(')); //문자열의 왼쪽
        String r = s.substring(s.indexOf('('), s.length()); //문자열의 오른쪽
        int left = 0; //왼손의 잔상의 수
        int right = 0; //오른손의 잔상의 수
        for(int i = 0; i < l.length(); i++) {
        	if(l.charAt(i) == '@') left++;
        }
        for(int i = 0; i < r.length(); i++) {
        	if(r.charAt(i) == '@') right++;
        }
        System.out.print(left + " " + right);
    }
}