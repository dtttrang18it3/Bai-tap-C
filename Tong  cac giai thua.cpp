#include<stdio.h>
#include<conio.h>
void nhapmang(int mang[10], int n) 
{
    int i;
    for (i = 1; i <= n; i++) {
        printf("Nhap mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }
}

int gt(int mang[10], int n,int S[])

{	for (int i = 1; i<=n; i++ )
	{ int giaithua=1;
		for (int j = 1; j<=mang[i]; j++)
        			{
				 giaithua=giaithua*j;
				S[i]=giaithua;
	    		}
	}				

	}


int main()
{
	int n; int i, sum=0;
	printf("so phan tu: "); 
	scanf("%d",&n);
	int mang[10]; int S[n];
	nhapmang(mang, n);
	gt(mang, n, S);
	
	for (i = 1; i<=n; i++)
	    sum=sum+S[i];
		printf("\n S= %d",sum);
	
}

