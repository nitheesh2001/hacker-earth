#include<stdio.h>
void main()
{
	int a,t,c;
	int count=0;
	scanf("%d",&t);
	scanf("%d",&a);
	
		while(a>0){
			c=a%10;
			if(c==4)
			count++;
			 a=a/10;
			
		}
		 printf("%d",count);
		 
	
}
