/*
1001 A+B Format (20分)
Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where −10^6≤a,b≤10^6. The numbers are separated by a space.

Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

Sample Input:
-1000000 9
Sample Output:
-999,991
*/

//solution1:                   itoa由于安全问题不能使用

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
int main(){
	int a,b,sum;
	char str[10];
	scanf("%d%d",&a,&b);
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
