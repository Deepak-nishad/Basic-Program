#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int max,num1,num2,lcm;
	cout<<"Enter two number : ";
	cin>>num1>>num2;
/*	for(int i=1;i<=10;i++)
	{
		if((i*num1)%num2==0)
		{
			
		 c=i *num1;
		 break;
		}
	}
	for(int j=1;j<=10;j++)
	{
		if((j*num2)%num1==0)
		{
			
		 d=j *num2;
		 break;
		}
	}
	if(c==d)
	cout<<" lcm is "<<c;*/
	max=(num1>num2)?num1:num2;
	int i=max;
	while(1)
	{
		if(i%num1==0&&i%num2==0)
		{
			lcm=i;
			break;
		}
		i=i+max;
		cout<<i<<" "<<endl;
	}
	cout<<lcm<<endl;
	getch();
}
