#include <stdio.h>

int main(){
	
	int t,n,i,j,k;
	int 	s[5000];
	int min,dif; 
	
	
	scanf("%d",&t);
	for (k=0;k<t;k++)
	{
		scanf("%d",&n);
		
		min=0x7fffffff;
		for (i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		
		for (i=0;i<n;i++)
		{
			for (j=i+1;j<n;j++)
			{	
				dif=(s[j]-s[i]);
				if (dif<0)
					dif=dif*(-1);
					
				if (dif < min){
					min=dif;
				}
			}		
	
		}
		
		
			
		printf("%d\n",min);
		
	}
	
	return 0;
}
