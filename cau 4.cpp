#include <iostream>
#include <math.h>
using namespace std;
int gt(int n){
	int s=1;
	for(int i=1;i<=n;i++)
		s*=i;
	return s;
}
int main()
{
	int n;
	float S,S1=0,S2=0,S3=0,S4=0,S5=0,S6=0,S7=0;
	cout<<"nhap n: ";
	cin>>n;
	S=sqrt(2+sqrt(2+sqrt(2)));
	for(int i=2;i<=5;i++){
		S1=pow(i+S1,(float)1/i);
	}
	for(int i=0;i<n;i++){
		S2=(float)1/(3+S2);
	}
	for(int i=1;i<=n;i++){
		S3+=(float)1/((2*i-1)*(2*i-1));
		S4+=i;
		S5+=pow(i,(float)1/3);
		S6=(float)sqrt(S4)/S5;
		S7+=(float)1/gt(i);
	}
	//hay =))
	cout<<"gia tri S "<<S;
	cout<<"gia tri S1 "<<S1;
	cout<<"gia tri S2 "<<S2;
	cout<<"gia tri S3 "<<S3;
	cout<<"gia tri S6 "<<S6;
	cout<<"gia tri S7 "<<S7;
	return 0;
}
