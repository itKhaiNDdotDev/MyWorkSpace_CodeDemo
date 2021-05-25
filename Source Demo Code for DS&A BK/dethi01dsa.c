 #include <stdio.h>
 #include <string.h>
 
 
void input (char A[], int n)
{
	printf (" Nhap so phan tu: ");		scanf ("%d"  , &n);
	printf ("  Nhap danh sach mang ki tu: ");
 	for (int k=0; k<n; k++ )
	{
		A[k] = getchar();
	}
} 

 
 
void hienthi (char A[], int n, int k)
{
	for (k=0; k<n; k++)
	{
		if (k==0)		printf ("%c" , A[n-1] );
			printf ("%c" , A[n-k-1] );
	}
} 
 
 
 
int main ()
{
	int n,k;
	char A[1000];
	
	input (A, n);
	hienthi (A, n , k);


	return 0;
}

