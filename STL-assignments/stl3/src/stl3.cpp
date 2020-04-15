/*Create STL queue of double values. Write a menu driven program to push, pop, peek and delete
all values in queue. After each operation display current size of queue.*/


#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int menu_list()
{
	cout<<"Choose operations to be performed on queue->"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.peek"<<endl;
	cout<<"4.Delete"<<endl;
	cout<<"\nEnter choice:\t";
	int choice;
	cin>>choice;
	return choice;
}

int main() {
	queue<double> q1;

	int choice;
	while((choice=menu_list())!=0){
		switch(choice)
		{

		case 1:
		{
			double input;
			cout<<"Enter value to be pushed:";
			cin>>input;
			q1.push(input);

		}

		cout<<"size of queue:"<<q1.size()<<endl;

		break;
		case 2:
		{
			double temp=q1.front();

			q1.pop();
			cout<<"value popped:"<<temp<<endl;
		}
		cout<<"size of queue:"<<q1.size()<<endl;
		break;
		case 3:
		{
			double temp=q1.front();
			cout<<"value at front:"<<temp<<endl;
			cout<<"size of queue:"<<q1.size()<<endl;
		}
		break;
		case 4:
			while(!q1.empty()){
				double temp=q1.front();
				q1.pop();
				cout<<"value popped:"<<temp<<endl;
			}
			cout<<"size of queue:"<<q1.size()<<endl;

			break;
		}


	}

	return 0;
}
