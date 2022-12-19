#include "MainForm.h"
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "TestwithoutPanel.h"
#include "HomeScreen.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Testingyabro::HomeScreen form;
	Application::Run(% form);
}