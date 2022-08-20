#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	const int num = 45;
	float average = (num+1)/2.0;
	int i,web,sd;
	float cov1=0,x1=0,y=0,cov2=0,x2=0;
    FILE *DataIn1,*DataIn2;
    DataIn1=fopen("108cs-0.00r.txt","r"); 
    DataIn2=fopen("108cs-0.02r.txt","r");
    if (DataIn1 != NULL && DataIn2 != NULL)
    {   
	   for(i=1;i<=num;i++)
	   {
	   	  fscanf(DataIn1,"%d",&web);  
		  cov1 += (web-average)*(i-average);
		  x1 += pow(web-average,2);
		  y += pow(i-average,2);	  	  
	   	  fscanf(DataIn2,"%d",&sd);
		  cov2 += (sd-average)*(i-average);
		  x2 += pow(sd-average,2);
	   }	   	  	
	   printf("WEB: %.2f%% \n",100*cov1/sqrt(x1)/sqrt(y));
	   printf("SD: %.2f%% \n",100*cov2/sqrt(x2)/sqrt(y));
    }
    fclose(DataIn1);
    fclose(DataIn2);
    system("pause");
	return 0;
}