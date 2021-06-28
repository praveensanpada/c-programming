#include<stdio.h>
//refrence
void swap(int*, int*);

int main(){
	int a=4,b=5;
	printf("Before\n");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("After\n");
	printf("%d %d",a,b);
	return 0;
}

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
