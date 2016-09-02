import java.lang.*;
import java.util.scanner;
public class Rev
{
public static void main(String[] args)
{
Scanner sca=new Scanner(System.in);
String strs;
strs=sca.next();
int k=strs.length();
k--;
		char st[]=strs.toCharArray();
		char t;
		for(int i=0;i<st.length/2;i++){
			t=st[i];
			st[i]=st[k];
			st[k]=t;
			k--;
		}
		strs=new String(st);
		System.out.println(strs);

	}

}
