
 #include <stdio.h>
 


void inp ( int a[], int n )
{
	printf (" Nhâp sô luong phan tu cua dãy: ");		scanf ("%d" , &n );
	printf (" Nhap danh sách phân tu cua dãy: \n");
	for (int i = 0; i < n; i++ )
	{
		scanf ("%d" , &a[i] );
	}	
}	

 
int dyp ( int a[], int n )
{
	int t[n], max = -999;
	
	for (int i = 0; i < n; i++)
	{
		if (i == 0)					t[i] = a[i];
		else if (t[i-1] > 0)		t[i] = a[i] + t[i-1];
		else						t[i] = a[i];
		
		if (t[i] > max)				max = t[i];
	}	
	
	return	max;
}	
 
 
 
 
int main ()
{
	int n, a[n];

	
	inp ( a, n );
	printf (" Trong luong lon nhat trong cac day con la: %d " , dyp ( a, n ) );
	
	return 0;
}

