#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double salary;
	cin>>salary;
	double totalTax=0;
	if(salary<=2000)
	{
		cout<<"Isento"<<endl;
		return 0;
	}
	if(salary>=2000.01 && salary<=3000.00)
	{
		double t=salary-2000.;
		//cout<<t<<endl;
		if(t==1000)
		{
			totalTax+=1000*.08;
		}
		else
		{
			totalTax+=t*0.08;
		}
	}
	if(salary>=3000.01 && salary<=4500.00)
	{
		double t=salary-2000;
		if(t<=1000)
		{
			totalTax+=t*0.08;
		}
		if(t>1000 && t<=1500)
		{
			totalTax+=1000*0.08+(t-1000)*0.18;
		}

	}
	if(salary>=4500.01)
	{
		double t=salary-2000;
		if(t<=1000)
		{
			totalTax+=t*0.08;
		}
		if(t>1000 && t<=1500)
		{
			totalTax+=1000*0.08+(t-1000)*0.18;
		}
		if(t>1500)
		{
			totalTax+=1000*0.08+1500*0.18+(t-2500)*0.28;
		}
	}

	cout<<fixed;
	cout<<"R$ "<<setprecision(2)<<totalTax<<endl;
	return 0;
}
