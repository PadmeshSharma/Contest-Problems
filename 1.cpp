#include<iostream>
using namespace std;



int main()
{
	int a=7,b=17;
	int *c=&b;
	*c=7;
	cout<<a<<" "<<b<<endl;
}
