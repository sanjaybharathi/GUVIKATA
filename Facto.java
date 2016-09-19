import java.util.Scanner;
public class Facto
{
	public static void main(String[] args) {
	int k,a,fa=1;
  Scanner sc = new Scanner(System.in);
  k=sc.nextInt();
  if(k < 0)
	System.out.println("you have entered non negative");
  else 
	for(a=1;a<k;a++)
	{
		fa = fa*a;
		System.out.println("factorial "+k+"is ="+fa);
	}
	}
	}
