/*
     A text file contains set of integer (in range of 1 to 9) values separated by spaces. Read them into
STL vector. Find the missing numbers from them.
Input: 3 7 9 4 3 7 9 8 6 4 7 2
Output: 1 5
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v;
	vector<int>result;

	ifstream f1;
	f1.open("file.txt");
	int num;
	while(!f1.eof())
	{
		f1>>num;
		v.push_back(num);
	}
	/*vector<int>::iterator p;
	for(int i=1;i<9;i++)
	{
		p=find(v.begin(),v.end(),i);
		if(p==v.end())
		result.push_back(i);
	}*/

	vector<int>::iterator p;
	for(int i=1;i<9;i++){
		if(find(v.begin(),v.end(),i)==v.end())
		result.push_back(i);
	}

	vector<int>::iterator itr;
	itr=result.begin();
	while(itr!=result.end())
	{
		cout<<*itr<<" ";
		itr++;
	}
	return 0;


}


