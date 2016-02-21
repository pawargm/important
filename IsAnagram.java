import java.io.*;
import java.util.*;

class IsAnagram
{
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		String str1=sc.next();
		
		char []ch1=str.toCharArray();
		char []ch2=str1.toCharArray();
		
		Arrays.sort(ch1);
		Arrays.sort(ch2);

		if(Arrays.equals(ch1,ch2))
		System.out.println("Anagram");
		else
		System.out.println("Not Anagram");

	}

}
