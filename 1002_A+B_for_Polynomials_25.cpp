//solution:

#include "iostream"
int main(){
	float a[1001]={0.0},b[1001]={0.0};
	int k,exp,num=0;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&exp);
		scanf("%f",&a[exp]);
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&exp);
		scanf("%f",&b[exp]);
	}
	for(int i=0;i<1001;i++){
		b[i]+=a[i];
		if(b[i])
			num++;
	}
	printf("%d",num);
	for(int i=1000;i>=0;i--){
		if(b[i])
			printf(" %d %.1f",i,b[i]);
	}
	return 0;
}
