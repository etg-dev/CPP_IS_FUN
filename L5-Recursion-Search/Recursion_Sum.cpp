#include<iostream>
using namespace std;


int sum(int n)
{
	if(n==0||n==1)
		return n;
	else
		return n+sum(n-1);
}
 
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Sum of numbers up to %d:%d",n,sum(n));
 
	  return 0;
}