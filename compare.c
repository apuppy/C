#include<stdio.h>
int main(){
	int a,b;
	printf("please input two integers :");
	scanf("%d%d",&a,&b);
	printf("The max integer is %d.\n",max(a,b));
	return 0;
}

int max(int num1,int num2){
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
}
