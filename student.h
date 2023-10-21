#include<iostream>
#include<string.h>
using namespace std;
class student{
	int roll;
	string name;
	int m1,m2,m3;
	public:
		void display();
		student();
		student(int roll, string name, int m1, int m2, int m3);
		void accept();
		
};

