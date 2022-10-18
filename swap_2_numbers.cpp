#include<iostream>
int main(){
	int a=10 , b=11 , x=20 , y=22 , t=0;
	
	
	//Without 3rd variable
	a=a+b;
	b=a-b;
	a=a-b;
	
	std::cout<<"\nswaping without 3rd :: "<<a<<" , "<<b;
	
	//with 3rd variable
	t=x;
	x=y;
	y=t;
	
	std::cout<<"\nswaping with 3rd :: "<<x<<" , "<<y;
	
	return 0;
}
