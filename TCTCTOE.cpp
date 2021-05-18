/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);

	    try{

	    	int testCase = sc.nextInt();

	    	while(testCase-- > 0){

	    	    String[] game=new String[3];

	    		game[0]=sc.next();

	    		game[1]=sc.next();

	    		game[2]=sc.next();


	    		String gameStr = game[0]+game[1]+game[2];


	    		char[] chrs = gameStr.toCharArray();

	    		System.out.println(checkCond(chrs));

	    	}

	    } catch(Exception e){}

	}


	public static int solution(char[] game, char ch){

		

		if ((game[0] == ch)&&(game[0] == game[1])&&(game[0] == game[2])) return 1;	
		if ((game[0] == ch)&&(game[0] == game[3])&&(game[0] == game[6])) return 1;

		if ((game[0] == ch)&&(game[0] == game[4])&&(game[0] == game[8])) return 1;	


		if ((game[1] == ch)&&(game[1] == game[4])&&(game[1] == game[7])) return 1;	


		if ((game[2] == ch)&&(game[2] == game[4])&&(game[2] == game[6])) return 1;

		if ((game[2] == ch)&&(game[2] == game[5])&&(game[2] == game[8])) return 1;	


		if ((game[3] == ch)&&(game[3] == game[4])&&(game[3] == game[5])) return 1;	

		if ((game[6] == ch)&&(game[6] == game[7])&&(game[6] == game[8])) return 1;	


		return 0;

	}

	public static int checkCond(char[] chrs){

		int countX=0, countO=0;

		for (char ch:chrs) {

			if (ch == 'X') countX++;

			if (ch == 'O') countO++;

		}


		int count_ = 9 - (countX+countO);

		if (countX < countO){

			return 3;

		}

		if (countX > countO+1){

			return 3;

		}


		int winX = solution(chrs, 'X');

		int winO = solution(chrs, 'O');


		if (winX == 1 && winO == 1){

			return 3;

		}

		if (winX == 1 && countX == countO){

			return 3;

		}

		if (winO == 1 && countX > countO){

			return 3;

		}

		if (winO == 1 || winX == 1){

			return 1;

		}

		if (count_ == 0)

			return 1;

		return 2;
	}
}
