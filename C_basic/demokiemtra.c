 #include <stdio.h>
 
 

int snt (int n)
{
	for ( int  )
}


 // Tim so nguyen to trong khoang 2 so guyen duong tu a den b
void findNT (int *a, int *b)
{
	a = int* malloc (sizeof (int) );
	b = int* malloc (sizeof (int) );
	 // Nhap va kiem tra 2 so a va b thoa man :
	 	 // a > 0	 
	do
	{
		printf ("\n Nhap so nguyen duong a: ");		scanf ("%d" , a);
	}
	while (*a <= 0);
		 // b > a
	do
	{
		printf ("\n Nhap so nguyen duong b: ");		scanf ("%d" , b);
	}
	while (*b <= *a);
	
	 // Tim so nguyen to:
	printf ("\n Danh sach so nguyen to trong khoang tu a den b la: ");
	
	int c = 0;
	c = int* malloc (sizeof (int) );
	
	for ( int *i = *a; *i <= *b; *i++ )
	{
		if ( snt (i) == 1 )
		{
			printf (" %5d ", &i);
			c++
		}
	free (i);	
	} 
	printf ("\n Tu a den b co %d so nguyen to " , &c);
	
	free (a,b,c);	 
}
 
 
 
int main ()
{



	return 0;
}

