#pragma once
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "OK.h"
#include <vector>
#include <vector>
#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

namespace Testingyabro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HomeScreen : public System::Windows::Forms::Form
	{
	public:
		HomeScreen(void)
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
		~HomeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeScreen::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Location = System::Drawing::Point(56, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(693, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Artificial Neural Networks";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Location = System::Drawing::Point(225, 332);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 45);
			this->label2->TabIndex = 1;
			this->label2->Text = L"OCR PROJECT";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(297, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 53);
			this->button1->TabIndex = 2;
			this->button1->Text = L"UPLOAD IMAGE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &HomeScreen::button1_Click);
			// 
			// HomeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1440, 924);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"HomeScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HomeScreen";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &HomeScreen::HomeScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HomeScreen_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	//// -- Normalize function, to set up the activations in a specific range [0-255] -- ////
	public: void normalize(vector<int> &v) {

		int max = v[0];
		int min = max;
		int newMax = 255, newMin = 0;

		for (int i = 1; i < v.size(); i++) {
			if (v[i] > max)
				max = v[i];
			if (v[i] < min)
				min = v[i];
		}

		for (int i = 0; i < v.size(); i++) {
			v[i] = int((v[i] - min) * (double(newMax - newMin)/(max-min)));
		}

	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dia = gcnew OpenFileDialog;
	dia->Filter = "Image Files|*.bmp;*.jpg;*.jpeg;*.png;*.csv|All Files|*.*";
	dia->FilterIndex = 1;
	if (dia->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		//// --             Initializing a Neural Network to start predicting           -- ////
		vector<int> NeuralNetworkParams = { 28 * 28, 16, 16, 10 };
		NeuralNetwork n = NeuralNetwork(NeuralNetworkParams);
		String^ path = dia->FileName;
		string pathbro = msclr::interop::marshal_as<std::string>(path);
		
		//// --   Loading up a pre-trained model in order to increase the prediction accuracy  -- ////
		String^ pretrainmodel = "C:/Users/Kareem/Desktop/Artificial-Neural-Network-in-Cpp-main/Project/pretrainedModel/";
		string ptm = msclr::interop::marshal_as<std::string>(pretrainmodel);
		n.loadPretrainedModel(ptm);
		
		//// --   Storing the predicted number in a variable to be used for later   -- ////
		int predictedResult = n.infer(pathbro);
		
		Par p;
		
		//// --   Loading up the static variables to be used in the NeuralScreen form -- ////
		p.result = predictedResult;
		p.layerInput = n.getLayerActivations(0);
		p.layer1 = n.getLayerActivations(1);
		p.layer2 = n.getLayerActivations(2);
		p.layerResult = n.getLayerActivations(3);

		normalize(p.layerInput);
		normalize(p.layer1);
		normalize(p.layer2);
		normalize(p.layerResult);
		
		NeuralScreen^ form = gcnew NeuralScreen;
		this->Hide();
		form->ShowDialog();
		this->Close();
	}
}
};
}
