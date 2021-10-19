#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int n,sum=0;
	while(true)
	{
		
		cout<<"Enter number:";
		cin>>a;
		if(a == "exit")
		{
			break;
		}
		n = stoi(a);
		sum = sum + n;
		
			
	}
	cout<<"sum:"<<sum;
}