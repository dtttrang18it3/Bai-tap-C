#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	 char chuoi[10];
	 printf("nhap vao chuoi bat ki \n");
	 gets(chuoi);
	 int dem =0;
	 
	 for(int i=0;i<strlen(chuoi);i++){
	 	if(chuoi[i])
	 	dem++;
	 }
	 printf("chuoi da nhap co so ki tu la %d", dem);
}
