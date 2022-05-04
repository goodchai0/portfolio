#include<stdio.h>
int main() {
	long int decNum,r,q;
	int i=1,j,temp;
	char hexNum[100];
	printf("\nEnter any decimal number: ");
	scanf("%ld",&decNum);
	q = decNum;
	while(q!=0) {
		temp = q % 16;
		if( temp < 10)
		    temp =temp + 48; 
		else
		    temp = temp + 55;
		hexNum[i++]= temp;
		q = q / 16;
	}
	printf("\nEquivalent hexadecimal value of decimal number %ld is : ",decNum);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexNum[j]);
	return 0;
}