#ifndef	CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>

class	ContactClass
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNbr;
		std::string	Secret;
	public:
		ContactClass(void);
		void			AddContact();
		void			DisplayContacts();
};

#endif
