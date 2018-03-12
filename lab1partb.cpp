#include<iostream>
using namespace std;

int main()
{
	int n;
	std::cout<<"Enter n";
	cin>>n;
	cout<<"n="<<n;

	while(n!=-1){
		if (n==1){
		return 0;
	        }
	        else{
		     if(n%2==1){
			n=3*n+1;
		     }
		     else{
			     if(n%2==0){
			         n=n/2;
			     }
		     }
	         }
		cout<<"new n="<<n;
		cout<<"Enter another n";
		cin>>n;
	}

	return 0;
}

	

