#include "MainForm.h"
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "TestwithoutPanel.h"
#include "HomeScreen.h"
#include <vector>
//#include "MyForm5.h"
//#include "LayersToShow.h"





//int y[5] = { 1,2,3,4,5 };
//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
std::vector<int> Testingyabro::Par::layerInput;// = { 0 };
std::vector<int> Testingyabro::Par::layer1;// = { 0 };
std::vector<int> Testingyabro::Par::layer2;// = { 0 };
std::vector<int> Testingyabro::Par::layerResult;// = { 0 };
int Testingyabro::Par::result = 0;
int Testingyabro::Par::idkok[16] = {0};
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Testingyabro::HomeScreen form;
	//std::vector<int> Testingyabro::Par::layerInput = { 0 };
	//int x[5] = { 1,2,3,4,5 };
	Application::Run(% form);
}