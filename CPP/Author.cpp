#include "Author.h"
#include<string>
#include <iostream>
using namespace std;
Author::Author(int id,string an,string bn, int nb, int tb)
{
	author_id=id;
	author_name=an;
	book_name=bn;
	noofbookpub=nb;
	totalbooks=tb;
}

void Author::display(){
	cout<< "Autor id= " << author_id << endl;
	cout<<"Autor name= "<<author_name<<endl;
	cout<<"Book name= "<<book_name<<endl;
	cout<<"No of books published = "<<noofbookpub<<endl;
	cout<<"Total Books= "<<totalbooks<<endl;
	
}
void Author::calavcp(){
	cout<<"Available copies= "<<avcp()<<endl;
}
int Author::avcp(){
	return (totalbooks-noofbookpub);
	
}
