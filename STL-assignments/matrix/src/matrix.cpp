//============================================================================
// Name        : matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
int main() {
	int N;
	vector<vector<int>>mat(N);

	cout<<"enter size:";
	cin>>N;
	for(int i=0;i<N;i++){
		vector<int>v(N);
		mat[i]=v;
	}
	for(int i=0;i<mat.size();i++)
	{
		for(int j=0;j<mat[i].size();j++)
			cout<<mat[i][j];
	}





	return 0;
}
