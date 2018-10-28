#include<stdio.h>
#include<conio.h>
int main(){
	float socu,somoi,tiendien,tieuthu;
	printf("nhap so cu");
	scanf("%f", &socu);
	printf("nhap so moi");
	scanf("%f",&somoi);
	if(somoi>socu) {
	tieuthu=somoi-socu;}
	if(tieuthu<50){
		tiendien=tieuthu*1500;
		printf("tien dien la %f", tiendien);
	}
	else{
		if(tieuthu>=50&&tieuthu<=100){
			tiendien=49*1500+(tieuthu-49)*2000;
			printf("tien dien la %f", tiendien);
		}
	else{
		tiendien=49*1500+51*2000+(tieuthu-100)*3000;
		printf("tien dien la %f",tiendien);
	}	
}
}
	
