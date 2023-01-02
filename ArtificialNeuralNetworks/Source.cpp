#include "MainForm.h"
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "HomeScreen.h"
#include <vector>


using namespace System;
using namespace System::Windows::Forms;
std::vector<int> ArtificialNeuralNetworks::Par::layerInput;
std::vector<int> ArtificialNeuralNetworks::Par::layer1;
std::vector<int> ArtificialNeuralNetworks::Par::layer2;
std::vector<int> ArtificialNeuralNetworks::Par::layerResult;
int ArtificialNeuralNetworks::Par::result = 0;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ArtificialNeuralNetworks::HomeScreen form;
	Application::Run(% form);
}