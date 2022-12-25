#pragma once
#include "NeuralScreen.h"
#include "MyForm5.h"
#include "OK.h"
#include <vector>
#include <vector>
#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
//#include "Paramters.h"
//#include "LayersToShow.h"
//#include "LayersClass.h"
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")

//#include <gdiplus.h>
//#include "MainDriver.h"

namespace Testingyabro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeScreen
	/// </summary>
      //vector<int> NeuralNetworkParams = { 28 * 28, 16, 16, 10 };
	  //NeuralNetwork n = NeuralNetwork(NeuralNetworkParams);
	/*public class Param {
	public: vector<int> layer0;
	public: vector<int> layer1;
	public: vector<int> layer2;
	public: vector<int> layer3;
	};*/
	public ref class HomeScreen : public System::Windows::Forms::Form
	{
	public:
		HomeScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//vector<int> NeuralNetworkParams = { 28 * 28, 16, 16, 10 };
			//NeuralNetwork n = NeuralNetwork(NeuralNetworkParams);
		}
	//public: vector<int> NeuralNetworkParams = { 28 * 28, 16, 16, 10 };
	//public: NeuralNetwork = NeuralNetwork(NeuralNetworkParams);
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
		//System::Drawing::Image^ image;
		//image = System::Drawing::Image::FromFile("C:\\Users\\Kareem\\Desktop\\RobotMain.jpg");
		//this->BackgroundImage = image;
		//this->label1->ForeColor = Color::FromArgb(9, SystemColors::ActiveBorder);
	}
	/*public: int sigmoid(int s) {
		return int(255*(1 / (1 + exp(-s))));
	}*/
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
			//v[i] = sigmoid(v[i]);
			/*v[i] += max;
			v[i] *= 255;
			v[i] /= (2 * max);*/
			v[i] = int((v[i] - min) * (double(newMax - newMin)/(max-min)));
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dia = gcnew OpenFileDialog;
	dia->Filter = "Image Files|*.bmp;*.jpg;*.jpeg;*.png|All Files|*.csv*";
	dia->FilterIndex = 1;
	if (dia->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		//////////////////INSERT FUNCTION THAT TAKES IMAGE AS PARAMETER/////////////////////
		vector<int> NeuralNetworkParams = { 28 * 28, 16, 16, 10 };
		NeuralNetwork n = NeuralNetwork(NeuralNetworkParams);
		String^ path = dia->FileName; //System::IO::Path::GetDirectoryName(dia->FileName);
		String^ pathmodel = System::IO::Path::GetDirectoryName(dia->FileName) + "\\pretrainedModel";
		//string pathmodelstring = msclr::interop::marshal_as<std::string>(pathmodel);
		//path += dia->FileName;
		wstring idk = msclr::interop::marshal_as<std::wstring>(path);
		std::wstring filePath = idk;
		Gdiplus::Bitmap im(filePath.c_str());
		string pathbro = msclr::interop::marshal_as<std::string>(path);
		//////
		std::vector<int> pixels;
		for (int x = 0; x < im.GetWidth(); x++) {
			for (int y = 0; y < im.GetHeight(); y++) {
				Gdiplus::Color color;
				im.GetPixel(x, y, &color);
				// Add the color of the pixel to the vector
				pixels.push_back(color.GetValue());
			}
		}
		String^ pretrainmodel = "C:/Users/Kareem/Desktop/Artificial-Neural-Network-in-Cpp-main/Project/pretrainedModel/";
		string ptm = msclr::interop::marshal_as<std::string>(pretrainmodel);
		n.loadPretrainedModel(ptm);
		int x = n.infer(pathbro);
		String^ answer = x.ToString(); 
		//////
		//string idk = "C:\Users\Kareem\Desktop\download.jpg";
		//n.infer(pathbro);
		//n.infer("C:\\Users\\Kareem\\Desktop\\uploadim.jpg");
		//MessageBox::Show(path);
		//MessageBox::Show(answer);
		//Param p;
		Par p;
		//p.layerInput = { 0 };
		p.result = x;
		p.layerInput = n.getLayerActivations(0);
		p.layer1 = n.getLayerActivations(1);
		p.layer2 = n.getLayerActivations(2);
		p.layerResult = n.getLayerActivations(3);

		normalize(p.layerInput);
		normalize(p.layer1);
		normalize(p.layer2);
		normalize(p.layerResult);
		//int max = abs(p.layer1[0]);
		/*for (int i = 1; i < 16; i++) {
			if (abs(p.layer1[i]) > max)
				max = abs(p.layer1[i]);
		}
		for (int i = 0; i < 16; i++) {
			p.layer1[i] += max;
			p.layer1[i] *= 255;
			p.layer1[i] /= (2*max);
		}*/
		for (int i = 0; i < 16; i++)
			p.idkok[i] = n.getLayerActivations(0)[i];
		String^ an;
		for (int i = 0; i < 10; i++) {
			an += (n.getLayerActivations(3)[i].ToString() + " ");
			//MessageBox::Show(an);
		}
		//MessageBox::Show(an);
			//p.layerInput.push_back(n.getLayerActivations(0)[i]);
		//for (int i = 0; i < n.getLayerActivations(1).size(); i++)
			//p.layer1.push_back(n.getLayerActivations(1)[i]);
		//for (int i = 0; i < n.getLayerActivations(2).size(); i++)
			//p.layer2.push_back(n.getLayerActivations(2)[i]);
		//for (int i = 0; i < n.getLayerActivations(3).size(); i++)
			//p.layerResult.push_back(n.getLayerActivations(3)[i]);
		//////////////////INSERT FUNCTION THAT TAKES IMAGE AS PARAMETER/////////////////////
		/////////TEST////////
		NeuralScreen^ form = gcnew NeuralScreen;
		this->Hide();
		form->ShowDialog();
		this->Close();
	}
}
};
}
