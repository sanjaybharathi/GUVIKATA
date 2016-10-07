import java.util.*;
class unique {
    public static void main(String args[])throws Exception
{
int n,p;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
int ar[]=new int[n];
for(int i=0;i<n;i++)
ar[i]=sc.nextInt();
for(int i=0;i<n;i++)
{
p=ar[i];
for(int j=i+1;j<n;j++)
{
if(p==ar[j])
System.out.println("first repeated integer is:"+p);
break;
}
}
}
}
