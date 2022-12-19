#pragma once
#include <list>

namespace Testingyabro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for TestwithoutPanel
	/// </summary>
	public ref class TestwithoutPanel : public System::Windows::Forms::Form
	{
	public:
		TestwithoutPanel(void)
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
		~TestwithoutPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		List<System::Drawing::Rectangle> NodesInput;
		List<System::Drawing::Rectangle> NodesLevel1;
		List<System::Drawing::Rectangle> NodesLevel2;
		System::Collections::Generic::List<System::Windows::Forms::Label^>^ Numbers =
			gcnew System::Collections::Generic::List<System::Windows::Forms::Label^>;
	private: System::Windows::Forms::Label^ label1;



		   List<System::Drawing::Rectangle> NodesNumbers;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Location = System::Drawing::Point(975, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// TestwithoutPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->label1);
			this->Name = L"TestwithoutPanel";
			this->Text = L"TestwithoutPanel";
			this->Load += gcnew System::EventHandler(this, &TestwithoutPanel::TestwithoutPanel_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TestwithoutPanel::TestwithoutPanel_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TestwithoutPanel_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Image^ image;
		image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
		this->BackgroundImage = image;

		///////////////////////////////////////

		

	}
	private: System::Void TestwithoutPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		System::Drawing::Graphics^ g = e->Graphics;
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

		/////////////////////////////////////NUMBER LABELS/////////////////////////////
		
		for (int i = 0; i <= 9; i++) {
			System::Windows::Forms::Label^ label = gcnew System::Windows::Forms::Label;
			String^ s = i.ToString();
			label->Text = s;
			label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label->ForeColor = System::Drawing::Color::Red;
			label->Location = System::Drawing::Point(1107, 210 * (i+1));
			label->Size = System::Drawing::Size(31, 32);
			label->TabIndex = i;
			Numbers->Add(label);
		}
		//this->Controls->AddRange(Numbers->ToArray());

		for (int i = 0; i < Numbers->Count; i++) {
			Numbers[i]->Visible = true;
			Numbers[i]->Parent = this;
			//Numbers[i]->Parent = this;
			//Numbers[i]->Refresh();
			this->Controls->Add(Numbers[i]);
			Numbers[i]->Show();
			Numbers[i]->BringToFront();
		}

		//////////////////////////////////////NUMBER LABELS/////////////////////////////
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
		//labelNumber2->ForeColor = Color::Green;
		/*System::Drawing::Image^ image;
		image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.jpeg");
		g->DrawImage(image, 0, 0);*/
		//buffer->Render(e->Graphics);
		//panelDrawn = true;
		//NeuralPanel->Visible = false;
	}
	};
}
