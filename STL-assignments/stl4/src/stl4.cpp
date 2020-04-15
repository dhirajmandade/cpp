/*Create STL list of int values. Add 100 random values in it (use rand() function of C). Display all
unique elements in list. Hint: use set.*/


#include <iostream>
#include <cstdlib>
#include <list>
#include <set>
using namespace std;

int main() {
	list<int> l;
	set<int>s;
	int nel;
	cout<<"Enter no of element:";
	cin>>nel;
	for(int i=0;i<nel;i++)
		l.push_back(rand()%20);
	cout<<" numbers:";
	list<int>::iterator itr;
	itr=l.begin();
	while(itr!=l.end())
	{
		s.insert(*itr);
		cout<<*itr<<",";

		itr++;
	}
	cout<<endl;
	cout<<"Unique numbers:";
	set<int>::iterator itr1;
	itr1=s.begin();
	while(itr1!=s.end())
	{
		cout<<*itr1<<",";
		itr1++;
	}

	return 0;
}
