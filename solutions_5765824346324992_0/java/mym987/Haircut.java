import java.io.*;
import java.util.*;

class Haircut {
  public static void main (String [] args) throws IOException {
    BufferedReader f = new BufferedReader(new FileReader("B-small-attempt1.in"));
    PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("B-small-attempt1.out")));
    StringTokenizer st = new StringTokenizer(f.readLine());
    int T = Integer.parseInt(st.nextToken());
    for(int t=0;t<T;t++){
    	st = new StringTokenizer(f.readLine());
    	int B = Integer.parseInt(st.nextToken());
    	int N = Integer.parseInt(st.nextToken());
    	
    	st = new StringTokenizer(f.readLine());
    	int[] bars = new int[B], stat = new int[B];
    	
    	int max = 0,LCM = 0;
    	for(int i=0;i<B;i++){
    		bars[i] = Integer.parseInt(st.nextToken());
    		max = (bars[i]>max)?bars[i]:max;
    	}
    	
    	for(int i=1;;i++){
    		LCM+=max;
    		boolean flag = true;
    		for(int j:bars)
    			if(LCM%j != 0)flag = false;
    		if(flag)break;
    	}
    	int cnt = 0;
    	for(int j:bars)
			cnt += LCM/j;
    	N = N % cnt;
    	if(N==0)N = cnt;
    	while(N>0){
    		int min = stat[0];
        	for(int i:stat)
        		min = (i<min)?i:min;
        	for(int i=0;i<B;i++){
        		stat[i]-=min;
        		if(stat[i] == 0){
        			stat[i] = bars[i];
        			N--;
        			if(N==0){
        				out.format("Case #%d: %d\n",t+1,i+1);
        				break;
        			}
        		}
        	}
    	}
    	
    	
    }
    out.close();                                  // close the output file
    System.exit(0);                               // don't omit this!
  }
}