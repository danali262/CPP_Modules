#include "Serialization.hpp"

int	main()
{
	Data		ptr;
	uintptr_t	raw;
	Data		*res;

	ptr.age = 20;
	ptr.name = "Dani";
	ptr.height = 1.68f;
	raw = serialize(&ptr);
	res = deserialize(raw);
	std::cout << "Initial Data address: " << &ptr << std::endl;
	std::cout << "Deserialized Data address: " << res << std::endl;
	std::cout << std::endl;
	std::cout << "Age: " << ptr.age << std::endl;
	std::cout << "Serialized age: " << res->age << std::endl; 
	std::cout << "Name: " << ptr.name << std::endl;
	std::cout << "Serialized name: " << res->name << std::endl; 
	std::cout << "Height: " << ptr.height << std::endl;
	std::cout << "Serialized height: " << res->height << std::endl; 
	return (0);
}
