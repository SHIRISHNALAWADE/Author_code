#include "Author.h"
#include <String.h>

Author::Author(int id,String an,String bn, int nb, int tb)
{
	author_id=id;
	author_name=an;
	book_name=bn;
	noofbookpub=nb;
	totalbooks=tb;
}

void display(){
	cout<<"Autor id= "<<author_id<<endl;
	cout<<"Autor name= "<<author_name<<endl;
	cout<<"Book name= "<<book_name<<endl;
	cout<<"No of books published = "<<noofbookpub<<endl;
	cout<<"Total Books= "<<totalbooks<<endl;
	
}
void calavcp(){
	cout<<"Available copies= "<<avcp()<<endl;
}
int avcp(){
	return (totalbooks-noofbookpub);
	
}
