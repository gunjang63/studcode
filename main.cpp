#include <iostream>
#include "student.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	student s;
	
	s.display();
	
	student s1;
	s1.accept();
	s1.display();
	return 0;
}
