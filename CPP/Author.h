#ifndef AUTHOR_H
#define AUTHOR_H
#include <String.h>

class Author
{
	public:
		int author_id;
		String author_name;
		String book_name;
		int noofbookpub;
		int totalbooks;
		
		
		Author(int id,String an,String bn, int nb, int tb);
		void display();
		void calavcp();
		int avcp();
	protected:
};

#endif
