#include "iostream"
#include "cstring"
using namespace std;
int main()
{
	char name[5][10]={"abc","ac","a","e","w"};
	char s[10];
	
	gets(s);
	
	for(int i=0;i<5;i++)
	{
		if(strcmp(s,name[i])==0)
		{
		cout<<"yes";
		break;
	}
		
		if(i==4)
{
	cout<<"no";
	break;
		}		
	}
}