#include <iostream>
#include "Author.h"
#include<string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Author a1(101,"SSN","Rift",5000,10000);
	a1.display();
	
	a1.calavcp();
	return 0;
}
