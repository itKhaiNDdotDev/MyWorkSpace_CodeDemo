 #include <stdio.h>
 
 
int main ()
{
	
	float a, b, c;
	
	
	printf ("\n Nhap 3 so bat ki: ");
	
	do
	{
	printf ("\n a = "); 	scanf ("%f" , &a );
	printf ("\n b = "); 	scanf ("%f" , &b );
	printf ("\n c = "); 	scanf ("%f" , &c );
	
	printf ("\n Day KHONG PHAI 3 canh TAM GIAC, vui long nhap lai: ");
	}
	while ( a < 0 || b < 0 || c < 0 || a+b <= c || a+c <= b || b+c <= a );
	
	
	if ( a == b && a == c ) 		printf ("\n Day la 3 canh TAM GAIC DEU");
	else
	{
		if ( ( a == b || b == c || a == c ) && ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ) )
									printf ("\n Day la 3 canh tam giac VUONG CAN ");
									
		else if ( a == b || b == c || a == c ) 
									printf ("\n Day la 3 canh tam giac CAN "); 
									
		else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a )
									printf ("\n Day la 3 canh tam giac VUONG ");
									
		else 						printf ("\n Day la 3 canh tam giac THUONG ");								
	}
			
	return 0;

}

