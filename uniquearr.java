import java.util.*;
class unique {
    public static void main(String args[])throws Exception
{
int n,p;
Scanner s=new Scanner(System.in);
n=s.nextInt();
int ar[]=new int[n];
for(int i=0;i<n;i++)
ar[i]=s.nextInt();
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
