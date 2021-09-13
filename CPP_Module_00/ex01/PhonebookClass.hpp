#ifndef	PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include <string>
#include "ContactClass.hpp"

class	PhonebookClass
{
	private:
		ContactClass	Contact[8];
		int				ContactNbr;
	public:
		PhonebookClass(void);
		void	AddContactToPhonebook(void);
		void	ShowPhonebook(void);
};

#endif
