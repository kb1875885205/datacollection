package com.nastya.code_jam.round_1�;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Random;

public class Blank {

	public static void main(String args[]) {
		try {
			BufferedReader in = new BufferedReader(new FileReader("data/in/elv.in"));
			PrintWriter out = new PrintWriter("data/out/elv.out");

			int amount = Integer.parseInt(in.readLine());
			
			for (int k = 0; k < amount; k++) {
				String row = in.readLine();
				String[] arrRow = row.split("/");
				long up = Long.parseLong(arrRow[0]);
				long down = Long.parseLong(arrRow[1]);
				//double time = play(mC, mF, mX);
				long del = gcd(up, down);
				up = up / del;
				down = down / del;
				long d = degree(down) - 1;
				long c = clear(up, d - 1);
				if (d == -2 || up == 0)
					out.println("Case #" + (k + 1) + ": " + "impossible");
				else
					out.println("Case #" + (k + 1) + ": " + (d - c)); 
			}
			
			in.close();
			out.close();
			
		} catch (IOException e) {
			e.printStackTrace();
		}
		System.out.println("�����!");
	}

    private static long gcd(long up, long down) {
        if (down == 0) {
            return up;
        } else {
            return gcd(down, up % down);
        }
    }
    
    private static long degree(double a) {
    	if (a == 1)
    		return 1;
    	if (Math.round(a) != a)
    		return -1;
    	
    	long ret = degree(a/2);
    	if (ret == -1)
    		return -1;
    	else
    		return ret + 1;
    }
    
    private static long clear(long up, long l) {
    	if (up >= Math.pow(2, l))
    		return l;
        return clear(up, l-1);
    }
}
