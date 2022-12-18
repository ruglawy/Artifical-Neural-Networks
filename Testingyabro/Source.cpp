#include "MainForm.h"
#include "NeuralScreen.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Testingyabro::NeuralScreen form;
	Application::Run(% form);
}