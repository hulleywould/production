#include <iostream>
#include <string>
#include <sstream>

class Brain {
	
	public:
		std::stringstream identity;
		std::string 	iq;
		std::string 	matter;
		int		age;
		std::string identify()
		{
			this->identity << std::hex << this;
			return this->identity.str();
		}

};
