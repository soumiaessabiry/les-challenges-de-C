#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	  float x1;
	  float y1;
	  float x2;
	  float y2;
	  float distance;
	  
	    printf(" donner les coordonn�e (x1,y1) de la premier point :\n");
	    printf("x1= ");
    	scanf("%f",&x1);
    	printf("y1= ");
    	scanf("%f",&y1);
    	

		printf(" donner les coordonn�e (x2,y2)de la deuxi�me  point :\n");
		printf("x2=");
			scanf("%f",&x2);
		printf("y2=");
			scanf("%f",&y2);
	
	
	
	distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("la distance entre les deux points est : %f",distance);
	
	
	
	return 0;
}
