 #include <stdio.h>
 
 
 
 // Ham tinh  so mu
int pow ( int x, int n )
{
	int a = 1;
	
	for ( int i = 1; i <= n; i++ )
	{
		a = a*x;
	}	
	return a;
}  
 
 
     /* TIP:  co the khai bao ham nguyen mau roi dung ham sau main.
     		  co nhieu truong hop bien dem lap i khong dc khai bao trong for ma hai lam bien toan cuc
     */		  
 
 
 
int main ()
{
	int n, s = 0, m = 1;
	
	printf ("\n Bai toan tinh tong n so tu nhien dau tien va n giai thua: \n");
	printf ("\n n = ");			scanf ("%d" , &n );
	
	for ( int i = 1; i <= n; i++ )
	{
		s = s + i;
		m = m*i;
	}	

	printf ("\n Tong %d so tu nhien dau tien la: %d " , n, s );
	printf ("\n %d! la: %d " , n, m );
	
	printf ("\n 2 mu 3 la: %d " , pow ( 2, 3 )  );

	return 0;
}

