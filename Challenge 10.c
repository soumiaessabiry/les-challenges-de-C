#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	 float r;
	 const float P=3.4;
	 float circonference;
	  printf("Entrez le rayon du cercle :\n");
	  scanf("%f",&r);
	  
	   circonference=2*P*r;
	printf(" la circonférence du cercle est : %.2f",circonference);
	
	
	return 0;
	
}
