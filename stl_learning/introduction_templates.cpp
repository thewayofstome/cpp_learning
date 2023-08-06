//introduction templates

#include <iostream>

//this is a base
//a int value function
//{
//	int square(int x)
//{
//	return x*x;
//}
//double square(double x)
//{
//	return x*x;
//}
//}
//using template can do samething like this
template <typename T>
T square(T x)
{
	return x*x;
}

int main()
{
//	first we create a int return value function
	std::cout<<square(5)<<"\n";
//	than we want use same funtion to calculate a double value
//	a useful way is overwrite this function
	std::cout<<square(5.5)<<"\n";
//	than we want use same function to  calculate any type value
	
	return 0;
}
