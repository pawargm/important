import java.io.*;
import java.util.*;
class MaxPal
{

	public static int max(int i,int j)
	{
		if(i>j)
		return i;
		else
		return j;
	
	
	} 

	public static int maxL(char arr[],int i,int j)
	{
		if(i==j)
		return 1;
		
		if(arr[i]==arr[j]&&i+1==j)
		return 2;
		
		if(arr[i]==arr[j])
		return maxL(arr,i+1,j-1)+2;
		
		return max(maxL(arr,i,j-1),maxL(arr,i+1,j));
	
	
	}

	public static void main(String[]args)
	{
		String str="";
		String str1="";
		int cases;
		Scanner sc=new Scanner(System.in);
		cases=sc.nextInt();
		while(cases>0)
		{
		str=sc.next();
		str1=sc,next();
		char [] ch=str.toCharArray();
		char []p=str1.toCharArray();
		int a=maxL(ch,0,str.length()-1);
		int b=maxL(p,0,str1.length()-1);
		System.out.println(a+b);
		cases--;
		}
	}




}
