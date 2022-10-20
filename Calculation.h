#include <string>
#include <utility>
#include <vector>
#include "Types.h"

typedef std::pair<float, std::string> Result;

Result calculateBMI(float weight, float height);

std::string calculateState(float bmi)
{
	extern std::vector<Types> types();

	std::vector<Types> types_ptr = types();

	for(std::vector<Types>::size_type i = 0;
		i != types_ptr.size();
		++i)
	{
		if (bmi >= types_ptr[i].range.first && bmi < types_ptr[i].range.second)
		{
			return types_ptr[i].description;
		}
	}

	return "";
}

Result calculateBMI(float weight, float height)
{
	std::string Second = "";

	float bmi = (weight/(height*height));

	return make_pair(bmi, calculateState(bmi));
}
