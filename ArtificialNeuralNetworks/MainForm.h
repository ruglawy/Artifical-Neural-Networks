#pragma once
#include <list>
#include <ctime>
namespace ArtificialNeuralNetworks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	//using Color = System::Drawing::Color;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
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

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ Number0;
	private: System::Windows::Forms::Label^ Number1;
	private: System::Windows::Forms::Label^ Number8;
	private: System::Windows::Forms::Label^ Number7;
	private: System::Windows::Forms::Label^ Number6;
	private: System::Windows::Forms::Label^ Number5;
	private: System::Windows::Forms::Label^ Number4;
	private: System::Windows::Forms::Label^ Number3;
	private: System::Windows::Forms::Label^ Number2;
	private: System::Windows::Forms::Label^ Number9;







	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Number9 = (gcnew System::Windows::Forms::Label());
			this->Number8 = (gcnew System::Windows::Forms::Label());
			this->Number7 = (gcnew System::Windows::Forms::Label());
			this->Number6 = (gcnew System::Windows::Forms::Label());
			this->Number5 = (gcnew System::Windows::Forms::Label());
			this->Number4 = (gcnew System::Windows::Forms::Label());
			this->Number3 = (gcnew System::Windows::Forms::Label());
			this->Number2 = (gcnew System::Windows::Forms::Label());
			this->Number1 = (gcnew System::Windows::Forms::Label());
			this->Number0 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(542, 140);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(182, 792);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(769, 140);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(182, 792);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Number9);
			this->panel3->Controls->Add(this->Number8);
			this->panel3->Controls->Add(this->Number7);
			this->panel3->Controls->Add(this->Number6);
			this->panel3->Controls->Add(this->Number5);
			this->panel3->Controls->Add(this->Number4);
			this->panel3->Controls->Add(this->Number3);
			this->panel3->Controls->Add(this->Number2);
			this->panel3->Controls->Add(this->Number1);
			this->panel3->Controls->Add(this->Number0);
			this->panel3->Location = System::Drawing::Point(1005, 197);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(104, 792);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// Number9
			// 
			this->Number9->AutoSize = true;
			this->Number9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number9->ForeColor = System::Drawing::SystemColors::Control;
			this->Number9->Location = System::Drawing::Point(58, 399);
			this->Number9->Name = L"Number9";
			this->Number9->Size = System::Drawing::Size(36, 38);
			this->Number9->TabIndex = 3;
			this->Number9->Text = L"9";
			// 
			// Number8
			// 
			this->Number8->AutoSize = true;
			this->Number8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number8->ForeColor = System::Drawing::SystemColors::Control;
			this->Number8->Location = System::Drawing::Point(58, 360);
			this->Number8->Name = L"Number8";
			this->Number8->Size = System::Drawing::Size(36, 38);
			this->Number8->TabIndex = 3;
			this->Number8->Text = L"8";
			// 
			// Number7
			// 
			this->Number7->AutoSize = true;
			this->Number7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number7->ForeColor = System::Drawing::SystemColors::Control;
			this->Number7->Location = System::Drawing::Point(58, 312);
			this->Number7->Name = L"Number7";
			this->Number7->Size = System::Drawing::Size(36, 38);
			this->Number7->TabIndex = 3;
			this->Number7->Text = L"7";
			// 
			// Number6
			// 
			this->Number6->AutoSize = true;
			this->Number6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number6->ForeColor = System::Drawing::SystemColors::Control;
			this->Number6->Location = System::Drawing::Point(58, 273);
			this->Number6->Name = L"Number6";
			this->Number6->Size = System::Drawing::Size(36, 38);
			this->Number6->TabIndex = 3;
			this->Number6->Text = L"6";
			// 
			// Number5
			// 
			this->Number5->AutoSize = true;
			this->Number5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number5->ForeColor = System::Drawing::SystemColors::Control;
			this->Number5->Location = System::Drawing::Point(58, 234);
			this->Number5->Name = L"Number5";
			this->Number5->Size = System::Drawing::Size(36, 38);
			this->Number5->TabIndex = 3;
			this->Number5->Text = L"5";
			// 
			// Number4
			// 
			this->Number4->AutoSize = true;
			this->Number4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number4->ForeColor = System::Drawing::SystemColors::Control;
			this->Number4->Location = System::Drawing::Point(58, 195);
			this->Number4->Name = L"Number4";
			this->Number4->Size = System::Drawing::Size(36, 38);
			this->Number4->TabIndex = 3;
			this->Number4->Text = L"4";
			// 
			// Number3
			// 
			this->Number3->AutoSize = true;
			this->Number3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number3->ForeColor = System::Drawing::SystemColors::Control;
			this->Number3->Location = System::Drawing::Point(58, 157);
			this->Number3->Name = L"Number3";
			this->Number3->Size = System::Drawing::Size(36, 38);
			this->Number3->TabIndex = 3;
			this->Number3->Text = L"3";
			// 
			// Number2
			// 
			this->Number2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number2->ForeColor = System::Drawing::SystemColors::Control;
			this->Number2->Location = System::Drawing::Point(58, 108);
			this->Number2->Name = L"Number2";
			this->Number2->Size = System::Drawing::Size(36, 49);
			this->Number2->TabIndex = 3;
			this->Number2->Text = L"2";
			// 
			// Number1
			// 
			this->Number1->AutoSize = true;
			this->Number1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number1->ForeColor = System::Drawing::SystemColors::Control;
			this->Number1->Location = System::Drawing::Point(58, 70);
			this->Number1->Name = L"Number1";
			this->Number1->Size = System::Drawing::Size(36, 38);
			this->Number1->TabIndex = 3;
			this->Number1->Text = L"1";
			// 
			// Number0
			// 
			this->Number0->AutoSize = true;
			this->Number0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Number0->ForeColor = System::Drawing::SystemColors::Control;
			this->Number0->Location = System::Drawing::Point(58, 32);
			this->Number0->Name = L"Number0";
			this->Number0->Size = System::Drawing::Size(36, 38);
			this->Number0->TabIndex = 0;
			this->Number0->Text = L"0";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		panel1->BackColor = System::Drawing::Color::Transparent;
		//List<System::Drawing::Rectangle> ellipses;
		System::Drawing::Graphics^ g = e->Graphics;
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
		for (int i = 1; i <= 16; i++) {
			NodesLevel1.Add(System::Drawing::Rectangle(0, newdist, 20, 20));
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
		//int x1 = NodesLevel1[0].X + NodesLevel1[0].Width / 2;
		//int y1 = NodesLevel1[0].Y + NodesLevel1[0].Height / 2;
		//int x2 = NodesLevel2[0].X + 20 + NodesLevel2[0].Width / 2;
		//int y2 = NodesLevel2[0].Y + NodesLevel2[0].Height / 2;
		//System::Drawing::Region^ r;
		//r->Union(NodesLevel1[0]);
		//r->Union(NodesLevel1[0]);
		//g->ExcludeClip(r);
		//g->DrawLine(pen, x1, y1, x2, y2);
		//g->ResetClip();
		/*for (int i = 1; i <= 16; i++) {
			g->DrawEllipse(pen, 0, newdist, 20, 20);
			newdist += distance;

			if (i == 8) {
				newdist += (distance + 10);
				for (int j = 1; j <= 3; j++) {
					g->DrawEllipse(pen, 7, newdist, 5, 5);
					newdist += distance;
				} // end for
				newdist += (distance + 10);
				} // end if
			
			}// end for*/
		
		}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Image^ image;
		image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\links.png");
		this->BackgroundImage = image;
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		panel2->BackColor = System::Drawing::Color::Transparent;
		//List<System::Drawing::Rectangle> ellipses;
		System::Drawing::Graphics^ g = e->Graphics;
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
		for (int i = 1; i <= 16; i++) {
			NodesLevel2.Add(System::Drawing::Rectangle(0, newdist, 20, 20));
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
	}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	panel3->BackColor = System::Drawing::Color::Transparent;
	//List<System::Drawing::Rectangle> ellipses;
	System::Drawing::Graphics^ g = e->Graphics;
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
	int distance = 91 - 48 - 10;
	int newdist = distance;
	for (int i = 1; i <= 10; i++) {
		NodesNumbers.Add(System::Drawing::Rectangle(0, newdist, 20, 20));
		newdist += distance;
	}
	for (int i = 0; i < NodesNumbers.Count; i++) {
		System::Drawing::Rectangle ellipse = NodesNumbers[i];
		g->DrawEllipse(pen, ellipse);
		int x = rand() % 256; //float y = x * 255;
		color = Color::FromArgb(x, Color::White);
		brush->Color = color;
		g->FillEllipse(brush, ellipse);
	}
	Number0->ForeColor = Color::Green;
}


};
}
