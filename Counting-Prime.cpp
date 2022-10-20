#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,m,l=0,i;
	cout<<"Enter the range:";
	cin>>m;
	cout<<"Prime numbers till "<<m<<" are: \n";
	for(n=2;n<m;n++)
	{
		l=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			l++;
	    }
	if(l==2)
	cout<<"=>"<<n<<endl;
 	}
	getch();
}
