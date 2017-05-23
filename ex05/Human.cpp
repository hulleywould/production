#include <string>
#include "Brain.hpp"

class Human {
	public:
		const Brain brain;
		Human(Brain *brain) {
			this.brain = brain;
		}
		std::string identify()
		{
			return brain.identify();
		}

};
