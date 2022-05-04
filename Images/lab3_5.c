#include<stdio.h>
void msg_code(char* s,int n)
{
	for(int i=0;s[i]!='\0';i++)
	s[i]+=n;
	printf("\nYour coded maessage :%s",s);
}
void msg_org(char* s,int n)
{
	for(int i=0;s[i]!='\0';i++)
	s[i]-=n;
	printf("\nYour encoded message :%s",s);
}
int main()
{
	int n;
	char s[100];
	printf("\nEnter your message :");
	gets(s);
	printf("\nEnter a code to change your message in coded form :");
	scanf("%d",&n);
	msg_code(s,n);
	printf("\nEnter your code to encode your message :");
	scanf("%d",&n);
	msg_org(s,n);
	return 0;
}

