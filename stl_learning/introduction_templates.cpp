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

//使用模板构造一个简单的动态数组
//Using templates to construct a simple dynamic array
template <typename T>
class BoArray{
	T arr[1000];
	int size;
public:
	BoArray():size(0){} //构造函数Constructor
	void push(T x){ //填入元素
		arr[size]=x;
		size++;
	}
	
	void print(){ //打印元素
		for(int i=0;i<size;i++){
			//print
			std::cout<<arr[i]<<"\n";
		}
	}
};

int main()
{
//	first we create a int return value function
	std::cout<<square(5)<<"\n";
//	than we want use same funtion to calculate a double value
//	a useful way is overwrite this function
	std::cout<<square(5.5)<<"\n";
//	than we want use same function to  calculate any type value
	
//	you can try anther type
	BoArray<float> Array;
	for(int i=0;i<10;i++){
		//push element
		//填入元素
		Array.push(i);
	}
	Array.print();
	
	return 0;
}
