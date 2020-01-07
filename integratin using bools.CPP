#include<iostream.h>
#include<conio.h>
#define f(x) 1/(1+x*x);
void main()
{
	float a,b,n,i;
	float arr[50],brr[50],h,sum=0,sum1=0,sum2=0,sum3=0,simp,trap,bools;
	int j;
	clrscr();
	cout<<"enter starting and ending values=";
	cin>>a>>b;
	cout<<"enter number of divisions=";
	cin>>n;
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		arr[i]=a+h*i;
	}
	for(i=0;i<=n;i++)
	{
		brr[i]=f(arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		cout<<arr[i]<<"\t"<<brr[i]<<endl;
	}
	
	sum1=sum2=sum3=0;
	for(j=1;j<n;j++)
	{
		if(j%2==0&&j%4!=0)
		{
			sum1=sum1+brr[j];
		}
		if(j%4==0)
		{
			sum3=sum3+brr[j];
		}
		if(j%2!=0)
		{
			sum2=sum2+brr[j];
		}
	}
	bools = 2*h*(7*brr[0]+7*brr[n]+12*sum1+32*sum2+14*sum3)/45;
	cout<<"\nbools="<<bools;
	getch();
}

