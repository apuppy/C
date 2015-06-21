#include<stdio.h>
int main(){
	int i,total=0;
	for(i=1;i<=100;i++){
		total+=i;
	}
	printf("1+2+3+4+...+99+100=%d\n",total);
	return 0;
}
