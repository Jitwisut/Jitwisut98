#include <stdio.h>
/*int test(){
	int a,b;
   for(a=1;a<=15;a++){
   
   	printf("%d \n",a);
   }
  
} */
void testa (){ //ทดสอบ
	int a,b,sum;
	printf("Value of A : ");
	scanf("%d",&a);
	printf("Value of B : ");
	scanf("%d",&b);
	sum = a*b;
	printf("Value of Sum : %d x %d = %d \n",a,b,sum);
	if(sum<=2000){
		printf("a + b = %d ",a+b);
	}else{
		for(sum=1;sum<=30;sum++){
			printf("%d \n",sum);
		}
	}
}
int main(){
	testa();
}
