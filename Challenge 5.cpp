#include<stdlib.h>
#include<stdio.h>

int main(){
	float C;
	float F;
	printf(" donner la temp�rature en degr� Fahrenheit : \n");
	
	scanf("%f",&F);
	
	 C = (F-32)/1.8;
	
		printf(" la temp�rature en degr� Celsius : \n %.2f",C);
		
		
		 if(C<=0){
		 	printf("\n tr�s froid");
		
		 }else if(C>0 && C<15){
		 	
		 	printf("\n froid");
		 		 	
		 }else if(C>=15 && C<=30){
		 	
		 	printf("\n chaud");
		 	
		 	
		 }else{
		 	printf("\n tr�s chaud");	
		 	
		 	
		 	
		 }
	
	
	
}
