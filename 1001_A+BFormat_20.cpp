//solution1:                   itoa由于安全问题不能使用

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
int main(){
	int a,b,sum;123666
	char str[10];888
	scanf("%d%d",&a,&b);666
	sum=a+b;
	itoa(abs(sum),str,10);
	if(sum<0)
		printf("-");
	for(int i=0;i<strlen(str);i++){
		if( (strlen(str)-i)%3==0 && i)
			printf(",");
		printf("%c",str[i]);
	}			
	return 0;
} 



//solution2:

#include "iostream"
#include "string"
#include "sstream"
#include "math.h"

int main(){
	int a,b,sum;
	std::string str;
	scanf("%d%d",&a,&b);
	sum=a+b;
	str=std::to_string( abs(sum) );
	if(sum<0)
		printf("-");
	for(int i=0;i<str.size();i++){
		if( (str.size()-i)%3==0 && i)
			printf(",");
		printf("%c",str[i]);
	}			
	return 0;
} 
