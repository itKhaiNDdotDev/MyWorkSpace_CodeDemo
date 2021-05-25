 #include <stdio.h>
 
 
 
 // 1. Dao nguoc cac phan tu cua mang
void reverse ( int arr[], int n )
{
	int i, j = n-1;
	for ( i = 0; i < j; i++ )
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		
		j--;
	}
	
	printf ("\n Dao nguoc mang ta duoc : ");
	
	for ( i =0; i < n; i++ )
	{
		printf (" %5d " , arr[i] );
	}
}  
	
	
	 // Xoa phan tu khoi mang
	void del ( int arr[], int n, int k )
	{
		int t [n-1];
		
		for ( int i = 0; i < n; i++ )
		{
			if ( i < k )		t[i] = arr[i];
			if ( i >= k )		t[i] = arr[i+1];
		}
		
		n--;
		
		for ( int i = 0; i < n; i++ )
		{
			arr[i] = t[i];
		}
	} 
	

 // 2. Xoa ca phan tu trung lap
void removeDuplicate ( int arr[], int n  )
{	
	printf ("\n Mang sau khi bo cac phan tu trung lap la: ");

	for ( int i = 0; i < n; i++ )
	{
		for ( int j = i+1; j < n; j++ )
		{
			if ( arr[i] == arr[j] )
			{
				del ( arr, n, j );
				n--;
			}
		}
		
		printf (" %5d " , arr[i] );
	}
}


	int tong ( int b[], int n )
	{
		for ( int i = 0; i < n; i++ )
		{
			
		}
	}


 // 3. Kiem tra tong mang con voi N  
int checkExist ( int arr[], int n, int N )
{
	for ( int i = 0; i < n; i++ )
	{
		int a = n;
		for ( int j = i; j < a; j++ )
		{
			a--;
			
			int b[n];
			
			b[j] = arr[j]; 
			
			if ( tong ( b, n ) == N )	
							return 1;
			else 			return 0;
		}	
	}
} 
 
 
 // 4. Sap xep cac gia tri chan tang dan, le giu nguyen
void sort ( int arr[], int n )
{
	for ( int i = 0; i < n-1; i++ )
	{
		for ( int j = i+1; j < n; j++ )
			{
			if ( arr[i] % 2 == 0 )
			{
		
				if (  arr[j] % 2 == 0  &&  arr[i] > arr[j]  )
				{
					int t = arr[i];
					arr[i] = arr[j];
					arr[j] = t;
				}
				else continue;
			}
			else continue;
		}
		
	}
	printf ("\n Danh sach mang sau khi sap xep chan la: ");
	for ( int i = 0; i < n; i++ )
	{
		printf (" %5d " , arr[i] );
	}
}  

	
	// ktra so nguyen tp
	int checknt ( int n )
	{
		if ( n < 2 )		return 0;
		else
		{
			int c = 0;
			
			for ( int i = 1; i <= n; i++ )
			{
				if ( n%i == 0 )			c++;
			}
			
			if ( c == 2 )		return 1;
			else 				return 0;
		}	
	}
	
	
 // 5. so nguyen to xa nhat so voi vi tri k
void find ( int arr[], int n, int k )
{
	printf ("\n Vi tri k la: ");		scanf ("%d" , &k );
	
//	int i,j, a = 0, b = 0;
//	
//	for ( i = k; i < n; i++ )
//	{
//		if (  checknt ( arr[i] ) == 1  )		a++;
//	}
//	for ( j = k; j >= 0; j-- )
//	{
//		if (  checknt ( arr[j] ) == 1  )		b++;
//	}
//	
//	if ( a > b )		printf ("\n So nguyen to xa k nhat la: %d " , arr[i] );
//	else				printf ("\n So nguyen to xa k nhat la: %d " , arr[j] );

	int i,j;

	for ( i = 0; i < n; i++ )
	{
		if ( checknt ( arr[i] ) == 1 )		break;
	}
	for ( j = n - 1; j >= 0; j-- )
	{
		if ( checknt ( arr[j] ) == 1 )		break;
	}
	
	float mid = (i+j)/2.0;
	
	if ( k > mid )			printf ("\n So nguyen to xa k nhat la: %d " , arr[i] );
	else					printf ("\n So nguyen to xa k nhat la: %d " , arr[j] );
}


 // 6. Mang doi xung
 int chck ( int arr[], int n )

 
 
 
int main ()
{
	 // Bai 1
	int a[] = { 123, 321, 323, 2, 1, 1, 3, 4, 5, 6, 3, 12 };
//	reverse ( a, sizeof(a)/sizeof(a[0]) );
	
	 // Bai 2
	int b[] = { 1, 2, 3, 4, 3, 23, 2, 3, 123, 32, 3 };
	removeDuplicate ( b, sizeof(b)/sizeof(b[0]) ); 
	
	 // Bai 3
//	int x[] = { 1, 2, 3, 5, 7, 9, 10, 20, 50 }, sum;
//	
//	printf ("\n Nhap SUM: ");			scanf ("%d" , &sum );
//	
//	if (  checkExist ( x, sizeof(x)/sizeof(x[0]), sum ) == 1  )
//					printf ("\n Ton tai ");
//	else			printf ("\n Khong ton tai "); 
//	
	 // Bai 4
	sort ( a, sizeof(a)/sizeof(a[0]) ); 
	
	 // Bai 5
	 int k;
	 find ( b, sizeof(b)/sizeof(b[0]), k );
	 
	
	return 0;
}

