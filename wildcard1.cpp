///Program to check wildcard characters
/** @Author:Mayank Sharma
 @Date:31st May 2016 */
#include <iostream>
using namespace std;

int main()
{
	char s1[10],s2[10];
	int i=0,j=0,n=0,m=0;
	cout<<"Enter the first string ";
	cin>>s1;
	while(s1[i]!='\0')///<Finding length of the string
		{n++;
		i++;}
	i=0;
	cout<<"Enter the second string with wildcard characters ";
	cin>>s2;
	while(s2[i]!='\0')
	{
	  if (s2[i]!='*')///<counting number of non * characters
			m++;
		i++;
	}
	i=0;
	while (s1[i]!='\0')
	{
		if (s2[j]!='?' and s2[j]!='*') 
		{
		  if (s1[i]!=s2[j])//</for regular characters
			{
				cout<<"The strings do not match";
				return 0;
			}
			i++;
			j++;
		}

		else if (s2[j]=='?')///<for wildcard character
		{
			i++;
			j++;
		}
		else  ///<for wildcard character
		{
			i+=(n-m);
			j++;
		}

	}
	cout<<"The strings match";///<display message
}
