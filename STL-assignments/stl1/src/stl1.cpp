/*Create STL list of string and add following names of your 10 friends. Sort the list and display in
reverse order using reverse iterator.*/
#include <iostream>
#include <string>
using namespace std;
#include <list>
int main() {
	list<string> names;
	/*names.push_back("amar");
	names.push_back("aditya");
	names.push_back("dinesh");
	names.push_back("kailas");
	names.push_back("krishna");
	names.push_back("ashok");
	names.push_back("shubham");
	names.push_back("abhi");
	names.push_back("arjun");
	names.push_back("sandesh");*/
	string name;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter name"<<i+1<<":";
		cin>>name;
		names.push_back(name);
	}


	cout<<"size of list:"<<names.size()<<endl;




   list<string>::reverse_iterator itr;
   names.sort();
   itr=names.rbegin();
   while(itr!=names.rend())
   {

	   cout<<*itr<<",";
	   itr++;

   }




	return 0;
}
