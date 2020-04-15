/*Create matrix using STL vector of size NxN where N is odd number entered by user. Input values
from user and check if its both diagonal sum is same or not. Print the message accordingly.*/


#include <iostream>
using namespace std;
#include <vector>
int main() {
	int N;
	int primary=0;
	int secondary=0;
	vector<vector<int>>mat(N,vector<int>(N));
	cout<<"Enter N*N matrix:";
	cin>>N;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
		{
			cout<<mat[i][j]<<",";
		}
		cout<<endl;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j)
				primary+=mat[i][j];
			if((i+j)==(N-1))
				secondary+=mat[i][j];
		}
	}
	/*cout<<"primary:"<<primary<<endl;
			cout<<"seconadry:"<<secondary<<endl;
	 */
	if(primary==secondary)
		cout<<"sum of diagonals in same";
	else
		cout<<"sum of diagonals in different";


	return 0;
}
