#include<stdio.h>

int main()
{ 
	int l,m,n;
	
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);

	while(1){
if(m==0&&n==0&&l==0)
{ break;
}
else if((2*m)==(n+l))
{ printf("AP  %d\n",(n+(m-l)));
}
else
{ printf("GP  %d\n",(n*(m/l)));
}
scanf("%d",&l);
scanf("%d",&m);
scanf("%d",&n);
} return 0;
}