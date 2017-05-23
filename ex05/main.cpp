#include "Human.hpp"

int	main()
{
	Human *bob = new Human;
	
	std::cout << bob->identify() << std::endl;
	delete bob;
	return (0);
}
