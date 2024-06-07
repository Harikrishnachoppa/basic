#include<stdio.h>
int array[100];
int size,number,position;
void create(){
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
		
	}
}



void inserationat_begn(){
	printf("Enter which position you want add");
	scanf("%d",&position);
	printf("Enter the which number you want add");
	scanf("%d",&number);
	for(int i=size-1;i>=position-1;i--){
		array[i+1]=array[i];
		
	}	
	array[position-1]=number;
	size++;
	
}
void display(){
	printf("Display array elements\n");
	for(int i=0;i<size;i++){
		printf("%d\n",array[i]);
	}
}
int main(){
	create();
	inserationat_begn();
	display();
}
