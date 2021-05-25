 #include <bits/stdc++.h>
 #include <math.h>
 
 using namespace std;
 
 int a[100], s[100];
 int n=7;
 
 void dp ()
 {
 	int m = -100000;
 	s[0] = a[0];
 	for ( int i = 1; i < n; i++ )
 	{
 		if ( s[i-1] > 0 )		s[i] = s[i-1]+a[i];
 		else 				s[i] = a[i];
 		if (s[i]>m) m=s[i];
	}
	for (int i=0; i<n; i++) cout<<s[i]<<" "; cout<<endl;
	
 	cout<<m<<endl;
 }
 
 
int main ()
{
	//int n=5;
	for (int i=0; i<n; i++) cin>>a[i];

	dp();
	return 0;
}

