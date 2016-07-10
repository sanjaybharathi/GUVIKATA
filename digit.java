import java.io.*;
import java.util.*;
public class Count
{
public static void main(String args[])
{
	int n,digit,count=0;
	System.out.println("Enter the number:");
	Scanner s=new Scanner(System.in);
	n=s.nextInt();
while(n>0)
{
	digit=n%10;
	count=count+1;
	n=n/10;
}
System.out.println("count "+count);
}
}
