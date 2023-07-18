#include <stdio.h>
/*int test(){
	int a,b;
   for(a=1;a<=15;a++){
   
   	printf("%d \n",a);
   }
  
} */
void testa (){
	int a,b,sum;
	printf("Value of A : ");
	scanf("%d",&a);
	printf("Value of B : ");
	scanf("%d",&b);
	sum = a*b;
	printf("Value of Sum : %d x %d = %d ",a,b,sum);
}
	
int main(){
	testa();
}
