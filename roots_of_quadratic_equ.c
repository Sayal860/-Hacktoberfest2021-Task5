/*to calculate roots of a quadratic equation
by sayal mallick*/
#include<stdio.h> 
int a,b,c,d;
int main(){ 
         int a,b,c;
         printf("enter a,b,c:");
         scanf("%d %d %D",&a,&b,&c);
         d=(b*b)-(4*a*c);
         if (d>0) 
         {printf("real root");
		 }
		 else if(d=0){
		 	printf("sqare root");
		 }
		 else { 
		 printf("imaginary root");
		 }
		 return 0;
	
}
