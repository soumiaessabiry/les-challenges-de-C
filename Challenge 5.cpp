#include<stdlib.h>
#include<stdio.h>

int main(){
	float C;
	float F;
	printf(" donner la température en degré Fahrenheit : \n");
	
	scanf("%f",&F);
	
	 C = (F-32)/1.8;
	
		printf(" la température en degré Celsius : \n %.2f",C);
		
		
		 if(C<=0){
		 	printf("\n très froid");
		
		 }else if(C>0 && C<15){
		 	
		 	printf("\n froid");
		 		 	
		 }else if(C>=15 && C<=30){
		 	
		 	printf("\n chaud");
		 	
		 	
		 }else{
		 	printf("\n très chaud");	
		 	
		 	
		 	
		 }
	
	
	
}
