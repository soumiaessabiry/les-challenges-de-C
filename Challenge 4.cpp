#include<stdlib.h>
#include<stdio.h>
int main(){
	float Mile;
	float Km;
	
	printf(" donner la distance en mile : \n ");
	scanf("%f",&Mile);
   Km = Mile/1.609;
	
	printf(" la distance en metre est : \n %.3f",Km);
	
}
