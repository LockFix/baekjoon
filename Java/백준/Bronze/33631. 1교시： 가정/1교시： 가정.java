/*
 	has[] --> 쑤미가 처음에 가지고 있는 재료(밀가루, 초콜릿, 달걀, 버터)의 양 (16바이트 크기)
 	need[] --> 쿠키를 하나를 만드는 데 필요한 재료 " 의 양 (16바이트 크기)
 	cookies --> 현재 쿠키의 개수
 	
 	[쿼리]
 	1 : has[x] >= i * need[x] 라면 has[x] %= i * need[x] 수행 후 cookies += i, cookies 출력 아니면 Hello, siumii 출력
 	2 : has[0] += i (밀가루 추가) 수행 후 현재 보유하고 있는 밀가루의 양 출력
 	3 : has[1] += i (초콜릿 추가) 수행 후 현재 보유하고 있는 초콜릿의 양 출력
 	4 : has[2] += i (달걀 추가) 수행 후 현재 보유하고 있는 달걀의 양 출력
 	5 : has[3] += i (버터 추가) 수행 후 현재 보유하고 있는 버터의 양 출력
*/


import java.io.*;
import java.util.StringTokenizer;
public class Main{
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        int has[] = new int[4];
        int need[] = new int[4];
        
        for(int i = 0; i < 4; i++) { //보유 재료의 양 입력(has[])
        	has[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < 4; i++) { //요구 재료의 양 입력(need[])
        	need[i] = Integer.parseInt(st.nextToken());
        }
        int Q = Integer.parseInt(br.readLine());
        int cookies = 0;
        for(int j = 0; j < Q; j++) { //쿼리 입력 && 처리 반복
        	st = new StringTokenizer(br.readLine());
        	
        	int command = Integer.parseInt(st.nextToken()); //쿼리 식별
        	int i = Integer.parseInt(st.nextToken());
        	switch(command) {
        	case 1:
        		boolean can = true; //쿠키를 만들 수 있는지 저장
        		for(int k = 0; k < 4; k++) {
        			if(has[k] < i * need[k]) can = false; //재료가 부족하면 쿠키를 못 만듦
        		}
        		if(!can) { //쿠키를 만들 수 없으면 "Hello, siumii" 출력 후 continue
        			System.out.println("Hello, siumii");
        			continue;
        		}
        		for(int k = 0; k < 4; k++) { //재료 감소
        			has[k] -= i * need[k];
        		}
        		cookies += i; //쿠키 만들기
        		System.out.println(cookies);//출력
        		break;
        	case 2:
        		has[0] += i; //밀가루 i만큼 추가
        		System.out.println(has[0]); //보유 밀가루의 양 출력
        		break;
        	case 3:
        		has[1] += i; //초콜릿 i만큼 추가
        		System.out.println(has[1]); //보유 초콜릿의 양 출력
        		break;
        	case 4:
        		has[2] += i; //달걀 i만큼 추가
        		System.out.println(has[2]); //보유 달걀의 양 출력
        		break;
        	case 5:
        		has[3] += i; //버터 i만큼 추가
        		System.out.println(has[3]); //보유 버터의 양 출력
        		break;
        	}
        }
        br.close();
    }
}