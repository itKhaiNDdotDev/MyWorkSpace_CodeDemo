 #include <stdio.h>
 
void swap ( int *a, int *b )
{
	int t = *a;
	*a = *b;
	*b = t;
}
 
 
int main ()
{
	int *a;
	int b = 5;
	a = &b;
	char c = 'm';
	
	printf ("\n Dia chi bien b la: %d " , &b );
	printf ("\n Dia chi bien a la: %d " , a );
	printf ("\n Dia chi bien c la: %d " , &c );
	printf ("\n\n Kich thuoc a: %d \n" , sizeof ( *a )  );
	
	int x = 11, y = 25; 
	
	printf ("\n Dia chi cua bien x va y lan luot la: %d, %d " , &x, &y );
	printf ("\n Bien x va y lan luot la: %d, %d " , x, y );
	
	swap ( &x, &y );
	
	printf ("\n\n sau khi thay doi vi tri: ");
	printf ("\n Dia chi cua bien x va y lan luot la: %d, %d " , &x, &y );
	printf ("\n Bien x va y lan luot la: %d, %d " , x, y );
	
	
	
	int arr[10];
	
	printf ("\n\n Dia chi cua mang la: %d \n" , arr );
	
	printf ("\\n demo Dia chi cua mang la: %d \n" , &arr );
	
	for ( int i = 0; i < 10; i++ )
	{
		printf ("\n Dia chi phan tu thu %d la: %d " , i+1, &a[i] );
	}
	
	// CACH KHAC
	int *p = arr;
	
		
	
	// Quab he: gia tri a[i] dua xuat ra in ra = diachi + i;
	
	return 0;
}

