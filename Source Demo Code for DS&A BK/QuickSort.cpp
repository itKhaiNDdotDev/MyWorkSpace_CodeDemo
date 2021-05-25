 #include <bits/stdc++.h>
 #include <math.h>
 
 using namespace std;
 
 int a[100], s[100];
 int n=7;
 
 void quickSort (int L, int R)
 {
 	int i=L;
 	int j=R;
 	int key=a[(L+R)/2];
 	
 	while (i<j)
 	{
 		while (a[i]<key) i++;
 		while (a[j]>key) j--;
 		if (i<=j)
 		{
 			int tmp=a[i]; a[i]=a[j]; a[j]=tmp;
 			i++; j--;
		 }
	 }
	 if (i<R) quickSort(i,R);
	 if (L<j) quickSort(L,j);
 }
 
 
int main ()
{
	//int n=5;
	for (int i=1; i<=n; i++) cin>>a[i];

	quickSort(1,n);
	for (int i=1; i<=n; i++) cout<<a[i]<<" ";
	return 0;
}

