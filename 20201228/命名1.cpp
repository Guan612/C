#include  "stdio.h"
main( )
{  int  n[3],i,j,k; 
   for(i=0;i<3;i++)  n[i]=0 ;//n[3]={0,0,0}
     k=2 ; 
   for(i=0;i<k;i++)//k=2
   	 printf("%2d",n[i]) ;
    for(j=0;j<k;j++)  
	 n[j]=n[i]+1;
   printf("%d\n",n[1]) ;  }

