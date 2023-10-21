#include<iostream>
#include "student.h"

student::student(){
	this->roll=1;
	this->name="gunjan";
	this->m1=100;
	this->m2=80;
	this->m3=50;
	
}
student::student(int roll, string name, int m1,int m2 ,int m3){
	this->name=name;
	this->roll=roll;
	this->m1=m1;
	this->m2=m2;
	this->m3=m3;
}

void student::accept(){
	cout<<"\n\nenter the name of student :";
	cin>>this->name;
	cout<<"\nEnter the roll no of student :";
	cin>>this->roll;
	cout<<"\nEnter the marks of student :";
	cin>>this->m1>>this->m2>>this->m3;
	
}
void student::display(){
	cout<<"\n The name of student is :"<<this->name;
	cout<<"\n the roll no is :"<<this->roll;
	cout<<"\nThe marks is :"<<(this->m1)<<" "<<(this->m2)<<" "<<(this->m3);
	cout<<"\nThe sum of marks is "<<(m1+m2+m3);
	
}

