#include<iostream>

using namespace std;
int main()
{
	int n,a=1,b=1,c;
	cout<<"enter n:";
	cin>>n;
	cout<<"1,1,";
	for(int i=2;i<n;i++){
		c = a + b;
		b = a;
		a = c;
		if(i==n-1){
			cout<<c;
			break;
		}
		cout<<c<<",";
	}
}