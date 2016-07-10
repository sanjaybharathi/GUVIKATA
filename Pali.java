import java.io.*;
import java.util.*;
public class Pali
{
public static void main(String args[])
{
	int n,digit,count=0,rev=0,t=0;
	System.out.println("Enter the number:");
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
	t=n;
while(n>0)
{
	digit=n%10;
	rev=rev*10+digit;
	n=n/10;
}
if(rev==t)
System.out.println("Palindrome");
else
	System.out.println("not a Palindrome");
}
}
