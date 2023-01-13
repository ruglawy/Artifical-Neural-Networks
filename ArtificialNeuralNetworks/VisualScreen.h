#pragma once
#include "MyForm5.h"
#include <Windows.h>
#include "NeuralScreen.h"
namespace ArtificialNeuralNetworks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for VisualScreen
	/// </summary>
	public ref class VisualScreen : public System::Windows::Forms::Form
	{
	public:
		VisualScreen(void)
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
		~VisualScreen()
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

		   List<System::Drawing::Rectangle> matrix;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(988, 757);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(419, 71);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(8, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Starting prediction 121212;";
			this->label1->Visible = false;
			// 
			// VisualScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"VisualScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VisualScreen";
			this->Load += gcnew System::EventHandler(this, &VisualScreen::VisualScreen_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &VisualScreen::VisualScreen_Paint);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void VisualScreen_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void VisualScreen_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		System::Drawing::Graphics^ g = e->Graphics;
		System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::White);
		System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::White);
		System::Drawing::Color color;
		pen->Width = 2;
		//List<System::Drawing::Rectangle> matrix;
		
		//int lineCount = 0;
		//int distance = 91 - 48 - 17;
		int distance = 91 - 48 - 25;
		//int newdist = distance;
		//int distBetLvls = distance; //27*1 = 27 
		int nodeCount = 0;

		for (int i = 0; i < 28; i++) {
			//lineCount++;
			for (int j = 0; j < 28; j++) {
				System::Drawing::Rectangle ellipse = System::Drawing::Rectangle((distance * j) + 300, (distance * i) + 85, 15, 15);
				matrix.Add(ellipse);
				//pen->Brush =
				/*
				int activation = Par::layerInput[nodeCount]; //j + (i * 27)
				color = System::Drawing::Color::FromArgb(activation, System::Drawing::Color::White);
				brush->Color = color;
				//pen->Brush = color;
				if (activation + 50 > 255) {
					pen->Color = System::Drawing::Color::FromArgb(255, System::Drawing::Color::White);
				}
				else {
					pen->Color = System::Drawing::Color::FromArgb(activation+50, System::Drawing::Color::White);
				}
				g->DrawEllipse(pen, ellipse);
				g->FillEllipse(brush, ellipse);
				nodeCount++;
				*/
			}
			//lineCount++;
		}
		for (int i = 0; i < Par::layerInput.size(); i++) {
			int activation = Par::layerInput[i];
			if (activation > 100) {
				color = System::Drawing::Color::FromArgb(activation, System::Drawing::Color::White);
				pen->Color = color;
				brush->Color = color;
				g->DrawEllipse(pen, matrix[i]);
				g->FillEllipse(brush, matrix[i]);
				Sleep(0.9);
			}
		}
		Sleep(1000);
		for (int i = 0; i < Par::layerInput.size(); i++) {
			int activation = Par::layerInput[i];
			if (!activation || activation <= 100) {
				color = System::Drawing::Color::FromArgb(activation, System::Drawing::Color::White);
				pen->Color = System::Drawing::Color::FromArgb(50, System::Drawing::Color::White);
				brush->Color = color;
				g->DrawEllipse(pen, matrix[i]);
				g->FillEllipse(brush, matrix[i]);
				Sleep(0.9);
			}
		}
		//panel1->Visible = true;
		label1->Visible = true;
		for (int i = 3; i >= 0; i--) {
			label1->Text = "Starting prediction in " + i + "...";
			Sleep(1000);
		}
		
		NeuralScreen^ form = gcnew NeuralScreen();
		this->Hide();
		form->ShowDialog();
		this->Close();
	}
	};
}
