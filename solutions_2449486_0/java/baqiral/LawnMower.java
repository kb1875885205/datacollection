package qualification;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class LawnMower {
	public static int m,n;
	public static int[][] getInput(BufferedReader br) throws IOException{
		int [][]main=new int[m][n];
		String []temp;
		for(int i=0;i<m;i++) {
			String s=br.readLine();
			temp=s.split(" ");
			for(int j=0;j<n;j++) {
				main[i][j]=Integer.valueOf(temp[j]);
			}
		}
		return main;
	}
	public static String process(int [][]main) {
		for(int offsetX=0;offsetX<m;offsetX++) {
			for(int offsetY=0;offsetY<n;offsetY++) {
				if(main[offsetX][offsetY]==1) {
					//Check for row and column
					if(!checkRow(main,offsetX) && !checkColumn(main,offsetY)) {
						return "NO";
					}
				}
			}
		}
		return "YES";
	}
	public static boolean checkRow(int [][]main,int row) {
		for(int i=0;i<n;i++) {
			if(main[row][i]!=1) {
				return false;
			}
		}
		return true;
	}
	public static boolean checkColumn(int [][]main,int col) {
		for(int i=0;i<m;i++) {
			if(main[i][col]!=1) {
				return false;
			}
		}
		return true;
	}
	public static void main(String args[]) throws IOException {
		FileInputStream fis=new FileInputStream("C:/users/baqiral/Desktop/baqir.txt");
		BufferedReader br=new BufferedReader(new InputStreamReader(fis));
		int test=Integer.valueOf(br.readLine());
		int tester=1,pos;
		while(tester<=test) {
			String s=br.readLine();
			pos=s.indexOf(" ");
			m=Integer.valueOf(s.substring(0,pos));
			n=Integer.valueOf(s.substring(pos+1));
			int [][]main=getInput(br);
			String temp=process(main);
			System.out.println("Case #"+tester+": "+temp);
			tester++;
		}
	}
}