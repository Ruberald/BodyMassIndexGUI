#include <string>
#include <utility>
#include <vector>

typedef std::pair<float, float> Range;

struct Types 
{
	Range range;
	std::string description;
};

std::vector<Types> types() 
{
	Types UNDERWEIGHT;
	UNDERWEIGHT.range = std::make_pair(0, 18.5);
	UNDERWEIGHT.description = "Underweight. Possible nutritional deficiency.";

	Types NORMAL;
	NORMAL.range = std::make_pair(18.5, 25.0);
	NORMAL.description = "Normal. In the healthy range. Low risk.";

	Types OVERWEIGHT;
	OVERWEIGHT.range = std::make_pair(25.0, 30.0);
	OVERWEIGHT.description = "Overweight. Moderate risk of developing heart disease, high blood pressure, stroke, diabetes mellitus.";

	Types OBESE;
	OBESE.range = std::make_pair(30.0, 100.0);
	OBESE.description = "Obese. High risk of developing heart disease, high blood pressure, stroke, diabetes mellitus. Metabolic Syndrome.";

	std::vector<Types> types {UNDERWEIGHT, NORMAL, OVERWEIGHT, OBESE};
	return types;
}