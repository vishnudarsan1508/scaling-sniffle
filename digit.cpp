#include<iostream>
using namespace std;
int main()
{
		long int digit,num,sum;
		cout<<"Enter a number : ";
		cin>>num;
		do
		{
			digit=num%10;
			num=num/10;
			sum=sum+digit;
		}while(num>0);
		cout<<"Sum= "<<sum;
}			
