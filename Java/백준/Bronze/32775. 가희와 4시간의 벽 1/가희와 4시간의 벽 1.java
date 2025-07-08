import java.io.*;
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int a = Integer.parseInt(br.readLine());
        int b = Integer.parseInt(br.readLine());
        
        br.close();
        
        if(a > b) {
            System.out.print("flight");
        } else {
            System.out.print("high speed rail");
        }
    }
}