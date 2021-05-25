 #include <stdio.h>
 
 int n,k;
 int x[100];
 int mark[100];
 
 int check(int v, int i)
 {
 	//if (v < 2 ) return 1;
 	if (mark[v]==1) return 0;
 	return 1;
 }
 
 void printSolution()
 {
 	for (int i=0; i<=n; i++) printf("%d ",x[i]);
 	printf("\n");
 }
 
 void TRY ( int i )
 {
 	for (int v=1; v<=n; v++) //v thuoc A
 		if (check(v,i))
 	{
 		x[i]=v;
 		mark[v]=1;
 		if (i==k) printSolution();
 		else TRY(i+1);
 		mark[v]=0;
	 }
 }
 
int main ()
{
	n=31;
	k=30;
	for (int i=1; i<=n; i++) mark[i]=0;
	TRY(1);


	return 0;
}

