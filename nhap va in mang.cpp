#include<stdio.h>
#include<conio.h>
void Nhapmang(int array[10], int n){
	for(int i=0;i<n;i++){
	printf("mang[%d]= ",i);
	scanf("%d",&array[i]);
	}
}
void inmang(int mang[10], int n){
	for(int i=0;i<n;i++){
		printf("mang[%d]=%d",i ,mang[i]);
	
	}
}
int main(){
	int n;
	int mang[10];
	printf("nhap n=");
	scanf("%d",&n);
	Nhapmang(mang,n);
	inmang(mang,n);
}
