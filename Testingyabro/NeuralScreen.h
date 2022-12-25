#pragma once
//#include <list>
//#include <ctime>
//#include "Header.h"
//#include "HomeScreen.h"
#include "MyForm5.h"
#include "OK.h"
#include "MyForm5.h"
//#include "MyForm.h"
//#include "HomeScreen.h"
//#include <vector>
//#include <vector>
//using namespace std;
//Testingyabro::Par qw;
namespace Testingyabro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Testingyabro;

	/// <summary>
	/// Summary for NeuralScreen
	/// </summary>
	//Par qw;
	public ref class NeuralScreen : public System::Windows::Forms::Form
	{
	public:
		NeuralScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//this->FormBorderStyle =
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~NeuralScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		//List<System::> x = { 1, 2 };dd
		//List<int>^ primeNumbers = { 1,2 };
		
		List<System::Drawing::Rectangle> NodesInput;
		List<System::Drawing::Rectangle> NodesLevel1;
		List<System::Drawing::Rectangle> NodesLevel2;
		List<System::Drawing::Rectangle> NodesNumbers;
		//System::Collections::Generic::List<int>^ a1 = gcnew System::Collections::Generic::List<int>();
		List<int> ko;
	private: System::Windows::Forms::Label^ labelNumber0;
	private: System::Windows::Forms::Label^ labelNumber1;
	private: System::Windows::Forms::Label^ labelNumber2;
	private: System::Windows::Forms::Label^ labelNumber9;
	private: System::Windows::Forms::Label^ labelNumber8;
	private: System::Windows::Forms::Label^ labelNumber7;
	private: System::Windows::Forms::Label^ labelNumber6;
	private: System::Windows::Forms::Label^ labelNumber5;
	private: System::Windows::Forms::Label^ labelNumber4;
	private: System::Windows::Forms::Label^ labelNumber3;


	///////////////////////////////////////////TEST////////////////////////////////////////
	//private: array<int>^ a1 = {74, 169, 148, 145, 111, 157, 113, 101, 120, 126, 162, 113, 115, 110, 127}; //115, 79, 143, 115, 109, 117, 163, 166, 115, 119, 88, 99, 83, 125, 124, 127, 124, 138, 134, 108, 157, 171, 111, 127, 153, 177, 125, 130, 129, 111, 140, 122, 178, 135, 138, 120, 176, 121, 128, 84, 114, 135, 119, 141, 149, 130, 104, 131, 135, 137, 104, 125, 83, 126, 156, 132, 156, 124, 169, 128, 165, 132, 96, 107, 168, 139, 102, 119, 120, 103, 105, 111, 113, 120, 125, 138, 126, 93, 132, 102, 122, 174, 165, 128, 142, 119, 126, 121, 109, 141, 158, 149, 103, 157, 153, 144, 125, 138, 150, 156, 137, 150, 114, 118, 113, 114, 117, 90, 135, 152, 134, 129, 156, 168, 101, 143, 169, 140, 104, 98, 149, 105, 141, 147, 86, 98, 151, 153, 132, 126, 132, 96, 138, 158, 147, 63, 158, 136, 124, 98, 121, 125, 114, 85, 130, 103, 67, 142, 76, 83, 136, 111, 110, 84, 159, 148, 131, 157, 130, 112, 114, 136, 111, 89, 74, 123, 146, 94, 128, 110, 109, 136, 140, 142, 142, 124, 101, 157, 192, 139, 129, 159, 170, 100, 96, 103, 193, 84, 70, 73, 133, 134, 142, 129, 172, 97, 100, 112, 90, 103, 119, 138, 138, 58, 140, 85, 110, 136, 171, 139, 102, 130, 136, 113, 117, 142, 101, 100, 153, 110, 86, 105, 136, 139, 69, 104, 121, 169, 110, 148, 95, 105, 121, 83, 103, 164, 157, 156, 139, 149, 158, 148, 134, 139, 149, 112, 150, 144, 165, 149, 149, 117, 141, 156, 143, 152, 105, 166, 153, 143, 111, 153, 123, 105, 127, 86, 103, 102, 104, 121, 116, 118, 147, 135, 101, 143, 134, 115, 154, 136, 95, 125, 125, 141, 108, 154, 174, 101, 95, 134, 135, 137, 120, 139, 127, 94, 142, 148, 89, 144, 149, 70, 158, 143, 126, 110, 120, 160, 124, 142, 79, 144, 121, 135, 141, 72, 101, 198, 104, 168, 129, 108, 140, 128, 122, 159, 94, 140, 124, 128, 127, 127, 140, 123, 105, 141, 146, 145, 122, 115, 103, 148, 122, 99, 137, 109, 152, 136, 138, 198, 113, 135, 147, 151, 143, 123, 118, 118, 87, 155, 127, 113, 114, 184, 125, 143, 135, 82, 109, 120, 146, 148, 121, 100, 101, 142, 75, 127, 144, 139, 119, 123, 149, 113, 160, 116, 140, 116, 167, 172, 211, 128, 50, 126, 93, 136, 101, 110, 239, 125, 132, 139, 108, 128, 116, 174, 119, 145, 174, 121, 133, 95, 138, 112, 101, 147, 162, 100, 105, 166, 144, 126, 135, 139, 97, 106, 117, 117, 109, 167, 153, 95, 93, 122, 140, 94, 94, 130, 118, 123, 100, 152, 124, 145, 111, 105, 145, 145, 112, 111, 110, 148, 141, 113, 149, 95, 134, 161, 156, 110, 125, 127, 93, 74, 119, 131, 152, 125, 156, 168, 90, 104, 123, 163, 128, 105, 135, 113, 131, 121, 115, 142, 144, 157, 127, 155, 133, 165, 123, 105, 112, 115, 175, 141, 75, 89, 111, 119, 122, 120, 137, 185, 109, 169, 139, 150, 136, 115, 135, 134, 161, 146, 123, 137, 140, 141, 158, 92, 137, 141, 130, 103, 126, 165, 91, 100, 103, 98, 125, 135, 110, 156, 82, 80, 112, 150, 167, 90, 160, 125, 130, 93, 156, 118, 154, 94, 147, 105, 139, 151, 120, 152, 142, 115, 110, 135, 156, 135, 141, 145, 121, 122, 142, 126, 108, 70, 79, 98, 121, 103, 114, 111, 127, 128, 122, 123, 138, 79, 133, 127, 172, 137, 140, 118, 105, 121, 114, 114, 124, 156, 119, 189, 121, 136, 165, 121, 130, 146, 145, 127, 134, 118, 121, 137, 97, 115, 100, 122, 85, 172, 134, 97, 106, 74, 114, 113, 109, 172, 138, 153, 81, 141, 100, 92, 178, 209, 121, 125, 114, 180, 124, 120, 118, 106, 147, 117, 95, 85, 109, 120, 173, 83, 105, 151, 122, 121, 117, 155, 186, 137, 101, 139, 102, 115, 91, 89, 119, 157, 123, 112, 137, 139, 79, 113, 95, 122, 124, 157, 124, 154, 171, 190, 98, 96, 106, 113, 101, 125, 141, 103, 163, 100, 177, 125, 131, 131, 123, 87, 141, 130, 148, 153, 126, 151, 139, 137, 151, 148, 100, 147, 144, 144, 149, 133, 139, 146, 127, 157, 101, 113, 135, 117, 112, 119, 148, 136, 148, 113, 67, 131, 122, 91, 119, 177, 112, 135, 144, 118, 152, 117, 108, 137, 112, 144, 145, 130, 126, 88, 113, 196, 112, 159, 162, 107, 144, 120, 139, 96, 132, 104, 135, 115, 163, 167, 109, 83, 136, 148, 104, 65, 139, 125, 120, 97, 155, 138, 134, 147, 93
	//};
	//private: array<int>^ ok = { 1,2 };
	//private: static vector<int> a2 = { 113, 253, 125, 53, 80, 12, 57, 195, 182, 157, 97, 133, 179, 116, 155, 242 };
	//private: int a3[] = {156, 98, 111, 162, 213, 245, 50, 151, 7, 197, 167, 165, 99, 249, 220, 78};
	//private: System::Collections::Generic::List<int>^ a4 = { 2, 15, 1, 1, 49, 6, 40, 126, 2, 7 };
	




	private: System::Windows::Forms::Panel^ NeuralPanel;

	private: bool panelDrawn = false;
		   


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NeuralPanel = (gcnew System::Windows::Forms::Panel());
			this->labelNumber9 = (gcnew System::Windows::Forms::Label());
			this->labelNumber8 = (gcnew System::Windows::Forms::Label());
			this->labelNumber7 = (gcnew System::Windows::Forms::Label());
			this->labelNumber6 = (gcnew System::Windows::Forms::Label());
			this->labelNumber5 = (gcnew System::Windows::Forms::Label());
			this->labelNumber4 = (gcnew System::Windows::Forms::Label());
			this->labelNumber3 = (gcnew System::Windows::Forms::Label());
			this->labelNumber2 = (gcnew System::Windows::Forms::Label());
			this->labelNumber1 = (gcnew System::Windows::Forms::Label());
			this->labelNumber0 = (gcnew System::Windows::Forms::Label());
			this->NeuralPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// NeuralPanel
			// 
			this->NeuralPanel->BackColor = System::Drawing::Color::Black;
			this->NeuralPanel->Controls->Add(this->labelNumber9);
			this->NeuralPanel->Controls->Add(this->labelNumber8);
			this->NeuralPanel->Controls->Add(this->labelNumber7);
			this->NeuralPanel->Controls->Add(this->labelNumber6);
			this->NeuralPanel->Controls->Add(this->labelNumber5);
			this->NeuralPanel->Controls->Add(this->labelNumber4);
			this->NeuralPanel->Controls->Add(this->labelNumber3);
			this->NeuralPanel->Controls->Add(this->labelNumber2);
			this->NeuralPanel->Controls->Add(this->labelNumber1);
			this->NeuralPanel->Controls->Add(this->labelNumber0);
			this->NeuralPanel->Location = System::Drawing::Point(0, 0);
			this->NeuralPanel->Name = L"NeuralPanel";
			this->NeuralPanel->Size = System::Drawing::Size(1458, 971);
			this->NeuralPanel->TabIndex = 0;
			this->NeuralPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NeuralScreen::NeuralPanel_Paint);
			// 
			// labelNumber9
			// 
			this->labelNumber9->AutoSize = true;
			this->labelNumber9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelNumber9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber9->Location = System::Drawing::Point(1107, 572);
			this->labelNumber9->Name = L"labelNumber9";
			this->labelNumber9->Size = System::Drawing::Size(30, 33);
			this->labelNumber9->TabIndex = 9;
			this->labelNumber9->Text = L"9";
			this->labelNumber9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelNumber8
			// 
			this->labelNumber8->AutoSize = true;
			this->labelNumber8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber8->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber8->Location = System::Drawing::Point(1107, 531);
			this->labelNumber8->Name = L"labelNumber8";
			this->labelNumber8->Size = System::Drawing::Size(30, 33);
			this->labelNumber8->TabIndex = 8;
			this->labelNumber8->Text = L"8";
			// 
			// labelNumber7
			// 
			this->labelNumber7->AutoSize = true;
			this->labelNumber7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber7->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber7->Location = System::Drawing::Point(1107, 499);
			this->labelNumber7->Name = L"labelNumber7";
			this->labelNumber7->Size = System::Drawing::Size(30, 33);
			this->labelNumber7->TabIndex = 7;
			this->labelNumber7->Text = L"7";
			// 
			// labelNumber6
			// 
			this->labelNumber6->AutoSize = true;
			this->labelNumber6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber6->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber6->Location = System::Drawing::Point(1107, 458);
			this->labelNumber6->Name = L"labelNumber6";
			this->labelNumber6->Size = System::Drawing::Size(30, 33);
			this->labelNumber6->TabIndex = 6;
			this->labelNumber6->Text = L"6";
			// 
			// labelNumber5
			// 
			this->labelNumber5->AutoSize = true;
			this->labelNumber5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber5->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber5->Location = System::Drawing::Point(1107, 416);
			this->labelNumber5->Name = L"labelNumber5";
			this->labelNumber5->Size = System::Drawing::Size(30, 33);
			this->labelNumber5->TabIndex = 5;
			this->labelNumber5->Text = L"5";
			// 
			// labelNumber4
			// 
			this->labelNumber4->AutoSize = true;
			this->labelNumber4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber4->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber4->Location = System::Drawing::Point(1107, 374);
			this->labelNumber4->Name = L"labelNumber4";
			this->labelNumber4->Size = System::Drawing::Size(30, 33);
			this->labelNumber4->TabIndex = 4;
			this->labelNumber4->Text = L"4";
			// 
			// labelNumber3
			// 
			this->labelNumber3->AutoSize = true;
			this->labelNumber3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber3->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber3->Location = System::Drawing::Point(1107, 333);
			this->labelNumber3->Name = L"labelNumber3";
			this->labelNumber3->Size = System::Drawing::Size(30, 33);
			this->labelNumber3->TabIndex = 3;
			this->labelNumber3->Text = L"3";
			// 
			// labelNumber2
			// 
			this->labelNumber2->AutoSize = true;
			this->labelNumber2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber2->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber2->Location = System::Drawing::Point(1107, 292);
			this->labelNumber2->Name = L"labelNumber2";
			this->labelNumber2->Size = System::Drawing::Size(30, 33);
			this->labelNumber2->TabIndex = 2;
			this->labelNumber2->Text = L"2";
			// 
			// labelNumber1
			// 
			this->labelNumber1->AutoSize = true;
			this->labelNumber1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber1->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber1->Location = System::Drawing::Point(1107, 251);
			this->labelNumber1->Name = L"labelNumber1";
			this->labelNumber1->Size = System::Drawing::Size(30, 33);
			this->labelNumber1->TabIndex = 1;
			this->labelNumber1->Text = L"1";
			// 
			// labelNumber0
			// 
			this->labelNumber0->AutoSize = true;
			this->labelNumber0->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber0->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber0->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber0->Location = System::Drawing::Point(1107, 210);
			this->labelNumber0->Name = L"labelNumber0";
			this->labelNumber0->Size = System::Drawing::Size(30, 33);
			this->labelNumber0->TabIndex = 0;
			this->labelNumber0->Text = L"0";
			// 
			// NeuralScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->NeuralPanel);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"NeuralScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NeuralScreen";
			this->Load += gcnew System::EventHandler(this, &NeuralScreen::NeuralScreen_Load);
			this->NeuralPanel->ResumeLayout(false);
			this->NeuralPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NeuralScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		System::Drawing::Image^ image;
		image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
		//this->BackgroundImage = image;
		//NeuralPanel->BackColor = System::Drawing::Color::Transparent;
	}
	bool isDrawn = false;
	//Par qw;
	private: System::Void NeuralPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		if (!isDrawn) {
			srand(1);
			//HomeScreen^ h = gcnew HomeScreen;
			Par qw;
			//System::Drawing::Image^ image;
			//MyForm^ f = gcnew MyForm;
			vector<int> a1;// = qw.layerInput;//{74, 169, 148, 145, 111, 157, 113, 101, 120, 126, 162, 113, 115, 110, 127, 115};
			vector<int> a2;// = qw.layer1;//{113, 253, 125, 53, 80, 12, 57, 195, 182, 157, 97, 133, 179, 116, 155, 242};
			vector<int> a3;// = qw.layer2;//{156, 98, 111, 162, 213, 245, 50, 151, 7, 197, 167, 165, 99, 249, 220, 78};
			vector<int> a4;// = qw.layerResult;//{2, 15, 1, 1, 49, 6, 40, 126, 2, 7};
			int damn[16];
			String^ ok;
			for (int i = 0; i < qw.layerInput.size(); i++)
				a1.push_back(qw.layerInput[i]);
			for (int i = 0; i < qw.layer1.size(); i++)
				a2.push_back(qw.layer1[i]);
			for (int i = 0; i < qw.layer2.size(); i++)
				a3.push_back(qw.layer2[i]);
			for (int i = 0; i < qw.layerResult.size(); i++)
				a4.push_back(qw.layerResult[i]);
			for (int i = 0; i < 16; i++)
				damn[i] = qw.idkok[i];
			//vector<int> x = { 1,2,3 };
			//array<int>^ ok = {1,2};
			//ok->Add(10);
			//image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
			//g->DrawImage(image, 0, 0);
			System::Drawing::Graphics^ g = e->Graphics;
			//BufferedGraphics^ buffer = BufferedGraphicsManager::Current->Allocate(e->Graphics, e->ClipRectangle);
			//Testingyabro::Graphics^ g = buffer->Graphics;
			//g->DrawImage(image, 0, 0);
			//System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Green);
			//g->FillEllipse(brush, 0, 0, 100, 100);
			System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::White);
			System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::White);
			System::Drawing::Color color;
			/////////////////////////////////////
			//Color trans = Color::Red;
			//trans.FromArgb(0.5);
			/////////////////////////////////////
			pen->Width = 2;
			int distance = 91 - 48 - 17;
			int newdist = distance;
			int distBetLvls = 200;
			////////////////////////Nodes INPUT//////////////////////////
			List<System::Drawing::Rectangle>smallNodes;
			int distforInputLayer = distance - 37;
			for (int i = 1; i <= 16; i++) {
				if (i == 9) {
					int newdistSmall = distforInputLayer + 20;
					int newnewdistSmall = newdistSmall;
					for (int i = 1; i <= 3; i++) {
						smallNodes.Add(System::Drawing::Rectangle(distBetLvls + 9, newnewdistSmall + 100, 2, 2));
						//newdistSmall += newdist;
						newnewdistSmall += 10;
					}
					distforInputLayer = newdistSmall + 50;
				}

				NodesInput.Add(System::Drawing::Rectangle(distBetLvls, distforInputLayer + 100, 20, 20));
				distforInputLayer += distance;

			}
			for (int i = 0; i < NodesInput.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesInput[i];
				g->DrawEllipse(pen, ellipse);
				int x = a1[rand() % (28*28)]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			for (int i = 0; i < smallNodes.Count; i++) {
				System::Drawing::Rectangle ellipse = smallNodes[i];
				g->DrawEllipse(pen, ellipse);
				//int x = rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(255, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}

			newdist = distance;
			////////////////////////Nodes LEVEL 1////////////////////////
			for (int i = 1; i <= 16; i++) {
				NodesLevel1.Add(System::Drawing::Rectangle(distBetLvls * 2, newdist + 100, 20, 20));
				newdist += distance;
			}
			for (int i = 0; i < NodesLevel1.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel1[i];
				g->DrawEllipse(pen, ellipse);
				int x = a2[i]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			newdist = distance;
			////////////////////////Nodes LEVEL 2////////////////////////
			for (int i = 1; i <= 16; i++) {
				NodesLevel2.Add(System::Drawing::Rectangle(distBetLvls * 3, newdist + 100, 20, 20));
				newdist += distance;
			}
			for (int i = 0; i < NodesLevel2.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel2[i];
				g->DrawEllipse(pen, ellipse);
				int x = a3[i]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			newdist = distance + 7;
			////////////////////////Nodes RESULT////////////////////////
			for (int i = 1; i <= 10; i++) {
				NodesNumbers.Add(System::Drawing::Rectangle(distBetLvls * 4, newdist + 140, 20, 20));
				newdist += distance + 7;
			}
			for (int i = 0; i < NodesNumbers.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesNumbers[i];
				g->DrawEllipse(pen, ellipse);
				int x = a4[i]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			/////////////////////EDGES/////////////////////////////////
			/*int x1 = NodesLevel1[0].X + NodesLevel1[0].Width / 2;
			int y1 = NodesLevel1[0].Y + NodesLevel1[0].Height / 2;
			int x2 = NodesLevel2[1].X + NodesLevel2[1].Width / 2;
			int y2 = NodesLevel2[1].Y + NodesLevel2[1].Height / 2;
			System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesLevel1[0]);
			System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesLevel2[1]);
			//region->Exclude(NodesLevel2[0]);
			g->ExcludeClip(region);
			g->ExcludeClip(region2);
			//System::Drawing::Region^ r;
			//r->Union(NodesLevel1[0]);
			//r->Union(NodesLevel2[0]);
			//g->ExcludeClip(r);
			g->DrawLine(pen, x1, y1, x2, y2);

			//g->ResetClip();*/
			System::Drawing::Pen^ penLine = gcnew System::Drawing::Pen(System::Drawing::Color::White);
			penLine->Color = System::Drawing::Color::FromArgb(100, System::Drawing::Color::White);

			/////////////////////DRAWING EDGES///////////////////////
			for (int i = 0; i < NodesInput.Count; i++) {
				for (int j = 0; j < NodesLevel1.Count; j++) {
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					int color1 = rand() % 256; int color2 = rand() % 256; int color3 = rand() % 256;
					penLine->Color = System::Drawing::Color::FromArgb(60, 255, 255, 255);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					Sleep(1);
					int x1 = NodesInput[i].X + NodesInput[i].Width / 2;
					int y1 = NodesInput[i].Y + NodesInput[i].Height / 2;
					int x2 = NodesLevel1[j].X + NodesLevel1[j].Width / 2;
					int y2 = NodesLevel1[j].Y + NodesLevel1[j].Height / 2;

					System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesInput[i]);
					System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesLevel1[j]);
					//region->Exclude(NodesLevel2[0]);
					g->ExcludeClip(region);
					g->ExcludeClip(region2);

					g->DrawLine(penLine, x1, y1, x2, y2);
					g->ResetClip();

				}
			}
			for (int i = 0; i < NodesLevel1.Count; i++) {
				for (int j = 0; j < NodesLevel2.Count; j++) {
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					int color1 = rand() % 256; int color2 = rand() % 256; int color3 = rand() % 256;
					penLine->Color = System::Drawing::Color::FromArgb(60, 255, 255, 255);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					Sleep(1);
					int x1 = NodesLevel1[i].X + NodesLevel1[i].Width / 2;
					int y1 = NodesLevel1[i].Y + NodesLevel1[i].Height / 2;
					int x2 = NodesLevel2[j].X + NodesLevel2[j].Width / 2;
					int y2 = NodesLevel2[j].Y + NodesLevel2[j].Height / 2;

					System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesLevel1[i]);
					System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesLevel2[j]);
					//region->Exclude(NodesLevel2[0]);
					g->ExcludeClip(region);
					g->ExcludeClip(region2);

					g->DrawLine(penLine, x1, y1, x2, y2);
					g->ResetClip();

				}
			}
			for (int i = 0; i < NodesLevel2.Count; i++) {
				for (int j = 0; j < NodesNumbers.Count; j++) {
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					int color1 = rand() % 256; int color2 = rand() % 256; int color3 = rand() % 256;
					penLine->Color = System::Drawing::Color::FromArgb(60, 255, 255, 255);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					Sleep(1);
					int x1 = NodesLevel2[i].X + NodesLevel2[i].Width / 2;
					int y1 = NodesLevel2[i].Y + NodesLevel2[i].Height / 2;
					int x2 = NodesNumbers[j].X + NodesNumbers[j].Width / 2;
					int y2 = NodesNumbers[j].Y + NodesNumbers[j].Height / 2;

					System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesLevel2[i]);
					System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesNumbers[j]);

					g->ExcludeClip(region);
					g->ExcludeClip(region2);

					g->DrawLine(penLine, x1, y1, x2, y2);
					g->ResetClip();

				}
			}
			switch (Par::result) {
			case 0:
				labelNumber0->ForeColor = System::Drawing::Color::Green;
				break;
			case 1:
				labelNumber1->ForeColor = System::Drawing::Color::Green;
				break;
			case 2:
				labelNumber2->ForeColor = System::Drawing::Color::Green;
				break;
			case 3:
				labelNumber3->ForeColor = System::Drawing::Color::Green;
				break;
			case 4:
				labelNumber4->ForeColor = System::Drawing::Color::Green;
				break;
			case 5:
				labelNumber5->ForeColor = System::Drawing::Color::Green;
				break;
			case 6:
				labelNumber6->ForeColor = System::Drawing::Color::Green;
				break;
			case 7:
				labelNumber7->ForeColor = System::Drawing::Color::Green;
				break;
			case 8:
				labelNumber8->ForeColor = System::Drawing::Color::Green;
				break;
			case 9:
				labelNumber9->ForeColor = System::Drawing::Color::Green;
				break;
			default:
				labelNumber7->ForeColor = System::Drawing::Color::Green;
			}
			//labelNumber7->ForeColor = System::Drawing::Color::Green;
			/*System::Drawing::Image^ image;
			image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
			g->DrawImage(image, 0, 0);*/
			//buffer->Render(e->Graphics);
			//panelDrawn = true;
			//NeuralPanel->Visible = false; 
			isDrawn = true;
		}
	}
	};
}
