#pragma once

#include "MyForm5.h"
#include "OK.h"
#include "MyForm5.h"

namespace ArtificialNeuralNetworks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ArtificialNeuralNetworks;

	/// <summary>
	/// Summary for NeuralScreen
	/// </summary>
	
	public ref class NeuralScreen : public System::Windows::Forms::Form
	{
	public:
		Form^ obj1;
		NeuralScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
		NeuralScreen(Form^ obj)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			obj1 = obj;
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
		
		///////////////// -- Declaring Lists for Nodes -- //////////////
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
		   
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->NeuralPanel = (gcnew System::Windows::Forms::Panel());
			this->labelNumber0 = (gcnew System::Windows::Forms::Label());
			this->labelNumber9 = (gcnew System::Windows::Forms::Label());
			this->labelNumber8 = (gcnew System::Windows::Forms::Label());
			this->labelNumber7 = (gcnew System::Windows::Forms::Label());
			this->labelNumber6 = (gcnew System::Windows::Forms::Label());
			this->labelNumber5 = (gcnew System::Windows::Forms::Label());
			this->labelNumber4 = (gcnew System::Windows::Forms::Label());
			this->labelNumber3 = (gcnew System::Windows::Forms::Label());
			this->labelNumber2 = (gcnew System::Windows::Forms::Label());
			this->labelNumber1 = (gcnew System::Windows::Forms::Label());
			this->NeuralPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// NeuralPanel
			// 
			this->NeuralPanel->BackColor = System::Drawing::Color::Black;
			this->NeuralPanel->Controls->Add(this->labelNumber0);
			this->NeuralPanel->Controls->Add(this->labelNumber9);
			this->NeuralPanel->Controls->Add(this->labelNumber8);
			this->NeuralPanel->Controls->Add(this->labelNumber7);
			this->NeuralPanel->Controls->Add(this->labelNumber6);
			this->NeuralPanel->Controls->Add(this->labelNumber5);
			this->NeuralPanel->Controls->Add(this->labelNumber4);
			this->NeuralPanel->Controls->Add(this->labelNumber3);
			this->NeuralPanel->Controls->Add(this->labelNumber2);
			this->NeuralPanel->Controls->Add(this->labelNumber1);
			this->NeuralPanel->Location = System::Drawing::Point(0, 0);
			this->NeuralPanel->Name = L"NeuralPanel";
			this->NeuralPanel->Size = System::Drawing::Size(1458, 971);
			this->NeuralPanel->TabIndex = 0;
			this->NeuralPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NeuralScreen::NeuralPanel_Paint);
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
			// labelNumber9
			// 
			this->labelNumber9->AutoSize = true;
			this->labelNumber9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelNumber9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelNumber9->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNumber9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->labelNumber9->Location = System::Drawing::Point(1107, 577);
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
			this->labelNumber8->Location = System::Drawing::Point(1107, 535);
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
			this->labelNumber7->Location = System::Drawing::Point(1107, 495);
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
			this->labelNumber6->Location = System::Drawing::Point(1107, 452);
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
			this->labelNumber5->Location = System::Drawing::Point(1107, 413);
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
			this->labelNumber4->Location = System::Drawing::Point(1107, 372);
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
			this->labelNumber3->Location = System::Drawing::Point(1107, 331);
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
	}
	
	bool isDrawn = false;
	
	private: System::Void NeuralPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		if (!isDrawn) {
			srand(1);
			
			Par qw;
			
			vector<int> a1; //// -- Declaring vector for activations for Nodes Level Input -- ////
			vector<int> a2; //// -- Declaring vector for activations for Nodes Level  One  -- ////
			vector<int> a3; //// -- Declaring vector for activations for Nodes Level  Two  -- ////
			vector<int> a4; //// -- Declaring vector for activations for Nodes Level Three -- ////
			
			//// -- Filling up the vectors -- ////
			for (int i = 0; i < qw.layerInput.size(); i++)
				a1.push_back(qw.layerInput[i]);
			for (int i = 0; i < qw.layer1.size(); i++)
				a2.push_back(qw.layer1[i]);
			for (int i = 0; i < qw.layer2.size(); i++)
				a3.push_back(qw.layer2[i]);
			for (int i = 0; i < qw.layerResult.size(); i++)
				a4.push_back(qw.layerResult[i]);
			
			//// -- Setting up the required variables for drawing -- ////
			System::Drawing::Graphics^ g = e->Graphics;
			System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::White);
			System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::White);
			System::Drawing::Color color;
			pen->Width = 2;

			//// -- Declaring distances between each node & node level -- ////
			int distance = 91 - 48 - 17;
			int newdist = distance;
			int distBetLvls = 200;

			//// --                                NODES INPUT                                -- ////
			//// -- Setting up the nodes for Nodes Level Input to be drawn, then drawing them -- ////
			List<System::Drawing::Rectangle>smallNodes;
			int distforInputLayer = distance - 37;
			for (int i = 1; i <= 16; i++) {

				if (i == 9) {
					int newdistSmall = distforInputLayer + 20;
					int newnewdistSmall = newdistSmall;
					for (int i = 1; i <= 3; i++) {
						smallNodes.Add(System::Drawing::Rectangle(distBetLvls + 9, newnewdistSmall + 100, 2, 2));
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
			}

			for (int i = 0; i < smallNodes.Count; i++) {
				System::Drawing::Rectangle ellipse = smallNodes[i];
				g->DrawEllipse(pen, ellipse);
				color = System::Drawing::Color::FromArgb(255, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}
			newdist = distance;

			//// --                             NODES LEVEL ONE                              -- ////
			//// -- Setting up the nodes for Nodes Level One to be drawn, then drawing them  -- ////
			for (int i = 1; i <= 16; i++) {
				NodesLevel1.Add(System::Drawing::Rectangle(distBetLvls * 2, newdist + 100, 20, 20));
				newdist += distance;
			}
			for (int i = 0; i < NodesLevel1.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel1[i];
				g->DrawEllipse(pen, ellipse);
			}
			newdist = distance;

			//// --                             NODES LEVEL TWO                              -- ////
			//// -- Setting up the nodes for Nodes Level Two to be drawn, then drawing them  -- ////
			for (int i = 1; i <= 16; i++) {
				NodesLevel2.Add(System::Drawing::Rectangle(distBetLvls * 3, newdist + 100, 20, 20));
				newdist += distance;
			}
			for (int i = 0; i < NodesLevel2.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel2[i];
				g->DrawEllipse(pen, ellipse);
			}
			newdist = distance + 7;
			
			//// --                             NODES LEVEL RESULT                              -- ////
			//// -- Setting up the nodes for Nodes Level Result to be drawn, then drawing them  -- ////
			for (int i = 1; i <= 10; i++) {
				NodesNumbers.Add(System::Drawing::Rectangle(distBetLvls * 4, newdist + 140, 20, 20));
				newdist += distance + 7;
			}
			for (int i = 0; i < NodesNumbers.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesNumbers[i];
				g->DrawEllipse(pen, ellipse);
			}
			
			//// --            Setting up the variables for drawing edges            -- ////
			System::Drawing::Pen^ penLine = gcnew System::Drawing::Pen(System::Drawing::Color::White);
			penLine->Color = System::Drawing::Color::FromArgb(100, System::Drawing::Color::White);

			//// --                             NODES LEVEL INPUT                              -- ////
			//// --             Filling up the nodes with the given activations                -- ////
			for (int i = 0; i < NodesInput.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesInput[i];
				int x = a1[rand() % (28 * 28)];
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
				Sleep(50);
			}
			
			//// --             Drawing edges between Level Input & Level One              -- ////
			for (int i = 0; i < NodesInput.Count; i++) {
				for (int j = 0; j < NodesLevel1.Count; j++) {

					Sleep(1);

					// -- Setting up coordinates to draw the edge -- //
					int x1 = NodesInput[i].X + NodesInput[i].Width / 2;
					int y1 = NodesInput[i].Y + NodesInput[i].Height / 2;
					int x2 = NodesLevel1[j].X + NodesLevel1[j].Width / 2;
					int y2 = NodesLevel1[j].Y + NodesLevel1[j].Height / 2;

					// -- Setting up regions, so the edges don't appear inside the node -- //
					System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesInput[i]);
					System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesLevel1[j]);
					
					// -- Excluding the region from the edge -- //
					g->ExcludeClip(region);
					g->ExcludeClip(region2);

					g->DrawLine(penLine, x1, y1, x2, y2);
					g->ResetClip();

				}
			}

			//// --                             NODES LEVEL ONE                              -- ////
			//// --             Filling up the nodes with the given activations              -- ////
			for (int i = 0; i < NodesLevel1.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel1[i];
				int x = a2[i]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
				Sleep(50);
			}
			
			//// --             Drawing edges between Level One & Level Two              -- ////
			for (int i = 0; i < NodesLevel1.Count; i++) {
				for (int j = 0; j < NodesLevel2.Count; j++) {
					
					Sleep(1);

					int x1 = NodesLevel1[i].X + NodesLevel1[i].Width / 2;
					int y1 = NodesLevel1[i].Y + NodesLevel1[i].Height / 2;
					int x2 = NodesLevel2[j].X + NodesLevel2[j].Width / 2;
					int y2 = NodesLevel2[j].Y + NodesLevel2[j].Height / 2;

					System::Drawing::Region^ region = gcnew System::Drawing::Region(NodesLevel1[i]);
					System::Drawing::Region^ region2 = gcnew System::Drawing::Region(NodesLevel2[j]);
					
					g->ExcludeClip(region);
					g->ExcludeClip(region2);

					g->DrawLine(penLine, x1, y1, x2, y2);
					g->ResetClip();

				}
			}

			//// --                             NODES LEVEL TWO                              -- ////
			//// --             Filling up the nodes with the given activations              -- ////
			for (int i = 0; i < NodesLevel2.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesLevel2[i];
				int x = a3[i];
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
				Sleep(50);
			}

			//// --             Drawing edges between Level Two & Level Result              -- ////
			for (int i = 0; i < NodesLevel2.Count; i++) {
				for (int j = 0; j < NodesNumbers.Count; j++) {
					
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
			
			//// --                             NODES LEVEL RESULT                              -- ////
			//// --             Filling up the nodes with the given activations              -- ////
			for (int i = 0; i < NodesNumbers.Count; i++) {
				System::Drawing::Rectangle ellipse = NodesNumbers[i];
				int x = a4[i]; //rand() % 256; //float y = x * 255;
				color = System::Drawing::Color::FromArgb(x, System::Drawing::Color::White);
				brush->Color = color;
				g->FillEllipse(brush, ellipse);
			}

			//// -- A switch for coloring the number predicted with green -- ////
			//// --           Par::result is the number predicted         -- ////
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
			
			//// -- isDrawn is set to true so the form doesn't draw more than once -- ////
			isDrawn = true;
		}
	}
	};
}
