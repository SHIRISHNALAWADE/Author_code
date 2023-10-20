#include<string>
using namespace std;

#ifndef AUTHOR_H
#define AUTHOR_H



class Author
{
	public:
		int author_id;
		std::string author_name;
		std::string book_name;
		int noofbookpub;
		int totalbooks;
		
		
		Author(int id,string an,string bn, int nb, int tb);
		void display();
		void calavcp();
		int avcp();
	protected:
};

#endif
