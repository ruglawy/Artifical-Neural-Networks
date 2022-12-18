#pragma once
#include <list>
#include <ctime>

namespace Testingyabro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for NeuralScreen
	/// </summary>
	public ref class NeuralScreen : public System::Windows::Forms::Form
	{
	public:
		NeuralScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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

		List<System::Drawing::Rectangle> NodesInput;
		List<System::Drawing::Rectangle> NodesLevel1;
		List<System::Drawing::Rectangle> NodesLevel2;
		List<System::Drawing::Rectangle> NodesNumbers;
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
			this->labelNumber0 = (gcnew System::Windows::Forms::Label());
			this->labelNumber1 = (gcnew System::Windows::Forms::Label());
			this->labelNumber2 = (gcnew System::Windows::Forms::Label());
			this->labelNumber3 = (gcnew System::Windows::Forms::Label());
			this->labelNumber4 = (gcnew System::Windows::Forms::Label());
			this->labelNumber5 = (gcnew System::Windows::Forms::Label());
			this->labelNumber6 = (gcnew System::Windows::Forms::Label());
			this->labelNumber7 = (gcnew System::Windows::Forms::Label());
			this->labelNumber8 = (gcnew System::Windows::Forms::Label());
			this->labelNumber9 = (gcnew System::Windows::Forms::Label());
			this->NeuralPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// NeuralPanel
			// 
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
			// labelNumber0
			// 
			this->labelNumber0->AutoSize = true;
			this->labelNumber0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber0->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber0->Location = System::Drawing::Point(1107, 210);
			this->labelNumber0->Name = L"labelNumber0";
			this->labelNumber0->Size = System::Drawing::Size(31, 32);
			this->labelNumber0->TabIndex = 0;
			this->labelNumber0->Text = L"0";
			// 
			// labelNumber1
			// 
			this->labelNumber1->AutoSize = true;
			this->labelNumber1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber1->Location = System::Drawing::Point(1107, 251);
			this->labelNumber1->Name = L"labelNumber1";
			this->labelNumber1->Size = System::Drawing::Size(31, 32);
			this->labelNumber1->TabIndex = 1;
			this->labelNumber1->Text = L"1";
			// 
			// labelNumber2
			// 
			this->labelNumber2->AutoSize = true;
			this->labelNumber2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber2->Location = System::Drawing::Point(1107, 292);
			this->labelNumber2->Name = L"labelNumber2";
			this->labelNumber2->Size = System::Drawing::Size(31, 32);
			this->labelNumber2->TabIndex = 2;
			this->labelNumber2->Text = L"2";
			// 
			// labelNumber3
			// 
			this->labelNumber3->AutoSize = true;
			this->labelNumber3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber3->Location = System::Drawing::Point(1107, 333);
			this->labelNumber3->Name = L"labelNumber3";
			this->labelNumber3->Size = System::Drawing::Size(31, 32);
			this->labelNumber3->TabIndex = 3;
			this->labelNumber3->Text = L"3";
			// 
			// labelNumber4
			// 
			this->labelNumber4->AutoSize = true;
			this->labelNumber4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber4->Location = System::Drawing::Point(1107, 374);
			this->labelNumber4->Name = L"labelNumber4";
			this->labelNumber4->Size = System::Drawing::Size(31, 32);
			this->labelNumber4->TabIndex = 4;
			this->labelNumber4->Text = L"4";
			// 
			// labelNumber5
			// 
			this->labelNumber5->AutoSize = true;
			this->labelNumber5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber5->Location = System::Drawing::Point(1107, 416);
			this->labelNumber5->Name = L"labelNumber5";
			this->labelNumber5->Size = System::Drawing::Size(31, 32);
			this->labelNumber5->TabIndex = 5;
			this->labelNumber5->Text = L"5";
			// 
			// labelNumber6
			// 
			this->labelNumber6->AutoSize = true;
			this->labelNumber6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber6->Location = System::Drawing::Point(1107, 458);
			this->labelNumber6->Name = L"labelNumber6";
			this->labelNumber6->Size = System::Drawing::Size(31, 32);
			this->labelNumber6->TabIndex = 6;
			this->labelNumber6->Text = L"6";
			// 
			// labelNumber7
			// 
			this->labelNumber7->AutoSize = true;
			this->labelNumber7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber7->Location = System::Drawing::Point(1107, 499);
			this->labelNumber7->Name = L"labelNumber7";
			this->labelNumber7->Size = System::Drawing::Size(31, 32);
			this->labelNumber7->TabIndex = 7;
			this->labelNumber7->Text = L"7";
			// 
			// labelNumber8
			// 
			this->labelNumber8->AutoSize = true;
			this->labelNumber8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber8->Location = System::Drawing::Point(1107, 540);
			this->labelNumber8->Name = L"labelNumber8";
			this->labelNumber8->Size = System::Drawing::Size(31, 32);
			this->labelNumber8->TabIndex = 8;
			this->labelNumber8->Text = L"8";
			// 
			// labelNumber9
			// 
			this->labelNumber9->AutoSize = true;
			this->labelNumber9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber9->Location = System::Drawing::Point(1107, 581);
			this->labelNumber9->Name = L"labelNumber9";
			this->labelNumber9->Size = System::Drawing::Size(31, 32);
			this->labelNumber9->TabIndex = 9;
			this->labelNumber9->Text = L"9";
			// 
			// NeuralScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->NeuralPanel);
			this->Name = L"NeuralScreen";
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
		this->BackgroundImage = image;
		NeuralPanel->BackColor = System::Drawing::Color::Transparent;
		
	}
	private: System::Void NeuralPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			System::Drawing::Image^ image;
			image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
			//g->DrawImage(image, 0, 0);
			System::Drawing::Graphics^ g = e->Graphics;
			//BufferedGraphics^ buffer = BufferedGraphicsManager::Current->Allocate(e->Graphics, e->ClipRectangle);
			//Graphics^ g = buffer->Graphics;
			g->DrawImage(image, 0, 0);
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
				int x = rand() % 256; //float y = x * 255;
				color = Color::FromArgb(x, Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			for (int i = 0; i < smallNodes.Count; i++) {
				System::Drawing::Rectangle ellipse = smallNodes[i];
				g->DrawEllipse(pen, ellipse);
				//int x = rand() % 256; //float y = x * 255;
				color = Color::FromArgb(255, Color::White);
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
				int x = rand() % 256; //float y = x * 255;
				color = Color::FromArgb(x, Color::White);
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
				int x = rand() % 256; //float y = x * 255;
				color = Color::FromArgb(x, Color::White);
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
				int x = rand() % 256; //float y = x * 255;
				color = Color::FromArgb(x, Color::White);
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
			penLine->Color = Color::FromArgb(100, Color::White);

			/////////////////////DRAWING EDGES///////////////////////
			for (int i = 0; i < NodesInput.Count; i++) {
				for (int j = 0; j < NodesLevel1.Count; j++) {
					//////////////RANDOM COLOR VALUES FOR TESTING/////////
					int color1 = rand() % 256; int color2 = rand() % 256; int color3 = rand() % 256;
					penLine->Color = Color::FromArgb(100, color1, color2, color3);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////

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
					penLine->Color = Color::FromArgb(100, color1, color2, color3);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////

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
					penLine->Color = Color::FromArgb(100, color1, color2, color3);
					//////////////RANDOM COLOR VALUES FOR TESTING/////////

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
			labelNumber2->ForeColor = Color::Green;
			/*System::Drawing::Image^ image;
			image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
			g->DrawImage(image, 0, 0);*/
			//buffer->Render(e->Graphics);
			//panelDrawn = true;
			//NeuralPanel->Visible = false; 

	}
	};
}
