/*Create STL vector of float of size given by the user. Input values from the user. Iterate through
the vector two times to find minimum value and maximum value. Use subscript operator for the
first iteration, while iterator for the second iteration.*/


#include <iostream>
using namespace std;
#include <vector>

int main() {
	int size;
	float input;
	vector<float>v;
	cout<<"Enter the no. of values:";
	cin>>size;

	for(int i=0;i<size;i++)
	{
		cin>>input;
		v.push_back(input);

	}
	// FIND MINIMUM ELEMENT USING []
	int i=0;
	float temp=v[i];
	for(int i=0;i<size;i++)
	{
		if(temp>v[i])
			temp=v[i];
	}
	cout<<"min element:"<<temp<<endl;
	// FIND MAXIMUM ELEMENT USING ITERATOR
	vector<float>:: iterator itr;
	itr=v.begin();
	float temp1=*itr;
	while(itr!=v.end())
	{
		if(*itr>temp1)
			temp1=*itr;
		itr++;
	}
	cout<<"max element:"<<temp1<<endl;

	cout<<"elements:";
	for(int i=0;i<size;i++)
	{
		cout<<v[i]<<endl;

	}
	return 0;
}
