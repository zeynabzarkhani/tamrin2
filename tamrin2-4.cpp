#include<iostream>

using namespace std;
int main()
{
	float s,n,min=21,max=0,avg,sum=0;
	cout<<"quantity student?:";
	cin>>s;
	for(int i=0;i<s;i++)
	{
		cout<<"score student "<<i<<" in programin:";
		cin>>n;
		if(n>max){
			max=n;
		}
		if(n<min){
			min=n;
		}
		sum = sum + n;
	}
	cout<<"Avrage:"<<sum/s<<"\nmax: "<<max<<"\nmin: "<<min;
	
}