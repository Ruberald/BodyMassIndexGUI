#include <iostream>
#include <string>
#include <utility>
#include "Calculation.h"
#include "app.h"

typedef std::pair<float, std::string> Result;

extern Result calculateBMI(float weight, float height);

void DemoFrame::OnPress(wxCommandEvent& event)
{
	float height = std::stof(std::string((textctrlHeight->GetLineText(0)).mb_str()));
	float weight = std::stof(std::string((textctrlWeight->GetLineText(0)).mb_str()));

	Result res = calculateBMI(weight, height);
	std::string res_string = std::to_string(res.first) + "\n" + res.second;
	wxString res_wxstring(res_string.c_str(), wxConvUTF8);

	result->SetLabelText(res_wxstring);
}

// int main()
// {
// 	float weight, height;

// 	std::cout << "Enter weight: ";
// 	std::cin >> weight;

// 	std::cout << "Enter height: ";
// 	std::cin >> height;

// 	Result result = calculateBMI(weight, height);
// 	std::cout << "Your BMI is " << result.first << std::endl;
// 	std::cout << "Result: " << result.second << std::endl;
// }

IMPLEMENT_APP(MainApp);