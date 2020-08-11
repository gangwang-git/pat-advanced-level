/*
1002 A+B for Polynomials (25分)
This time, you are supposed to find A+B where A and B are two polynomials.

Input Specification:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:

K N1aN1 N2aN2 ... NKaNK
​​where K is the number of nonzero terms in the polynomial, N​i and aNi (i=1,2,⋯,K) are the exponents and coefficients, respectively. It is given that 1≤K≤10，0≤N​K<⋯<N2<N1≤1000.
​​
Output Specification:
For each test case you should output the sum of A and B in one line, with the same format as the input. Notice that there must be NO extra space at the end of each line. Please be accurate to 1 decimal place.

Sample Input:
2 1 2.4 0 3.2
2 2 1.5 1 0.5
Sample Output:
3 2 1.5 1 2.9 0 3.2
*/

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
