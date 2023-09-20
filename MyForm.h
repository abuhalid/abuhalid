#pragma once

namespace colculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ryu;
	protected:


	private: float bir;
	private: char nir = ' ';
		   bool c = false;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ ravno;
	private: System::Windows::Forms::Button^ zapitaya;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ devit;
	private: System::Windows::Forms::Button^ vosem;
	private: System::Windows::Forms::Button^ sem;
	private: System::Windows::Forms::Button^ minis;
	private: System::Windows::Forms::Button^ shest;
	private: System::Windows::Forms::Button^ pat;
	private: System::Windows::Forms::Button^ chetr;
	private: System::Windows::Forms::Button^ umnojet;
	private: System::Windows::Forms::Button^ tre;
	private: System::Windows::Forms::Button^ dva;
	private: System::Windows::Forms::Button^ number;
	private: System::Windows::Forms::Button^ dileniye;
	private: System::Windows::Forms::Button^ prachent;
	private: System::Windows::Forms::Button^ pulusdileniyeninus;
	private: System::Windows::Forms::Button^ ac;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ryu = (gcnew System::Windows::Forms::Label());
			this->C = (gcnew System::Windows::Forms::Button());
			this->ravno = (gcnew System::Windows::Forms::Button());
			this->zapitaya = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->devit = (gcnew System::Windows::Forms::Button());
			this->vosem = (gcnew System::Windows::Forms::Button());
			this->sem = (gcnew System::Windows::Forms::Button());
			this->minis = (gcnew System::Windows::Forms::Button());
			this->shest = (gcnew System::Windows::Forms::Button());
			this->pat = (gcnew System::Windows::Forms::Button());
			this->chetr = (gcnew System::Windows::Forms::Button());
			this->umnojet = (gcnew System::Windows::Forms::Button());
			this->tre = (gcnew System::Windows::Forms::Button());
			this->dva = (gcnew System::Windows::Forms::Button());
			this->number = (gcnew System::Windows::Forms::Button());
			this->dileniye = (gcnew System::Windows::Forms::Button());
			this->prachent = (gcnew System::Windows::Forms::Button());
			this->pulusdileniyeninus = (gcnew System::Windows::Forms::Button());
			this->ac = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ryu
			// 
			this->ryu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ryu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ryu->Location = System::Drawing::Point(13, 9);
			this->ryu->Name = L"ryu";
			this->ryu->Size = System::Drawing::Size(275, 58);
			this->ryu->TabIndex = 72;
			this->ryu->Text = L"0";
			this->ryu->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// C
			// 
			this->C->BackColor = System::Drawing::Color::Silver;
			this->C->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(153, 78);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(134, 55);
			this->C->TabIndex = 71;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = false;
			this->C->Click += gcnew System::EventHandler(this, &MyForm::C_Click);
			// 
			// ravno
			// 
			this->ravno->BackColor = System::Drawing::Color::DarkGreen;
			this->ravno->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ravno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ravno->Location = System::Drawing::Point(224, 383);
			this->ravno->Name = L"ravno";
			this->ravno->Size = System::Drawing::Size(64, 55);
			this->ravno->TabIndex = 70;
			this->ravno->Text = L"=";
			this->ravno->UseVisualStyleBackColor = false;
			this->ravno->Click += gcnew System::EventHandler(this, &MyForm::ravno_Click);
			// 
			// zapitaya
			// 
			this->zapitaya->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->zapitaya->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->zapitaya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zapitaya->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zapitaya->Location = System::Drawing::Point(154, 383);
			this->zapitaya->Name = L"zapitaya";
			this->zapitaya->Size = System::Drawing::Size(64, 55);
			this->zapitaya->TabIndex = 69;
			this->zapitaya->Text = L",";
			this->zapitaya->UseVisualStyleBackColor = false;
			this->zapitaya->Click += gcnew System::EventHandler(this, &MyForm::zapitaya_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(14, 383);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(133, 55);
			this->button4->TabIndex = 68;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::Gold;
			this->plus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(224, 322);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(64, 55);
			this->plus->TabIndex = 67;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// devit
			// 
			this->devit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->devit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->devit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->devit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->devit->Location = System::Drawing::Point(154, 322);
			this->devit->Name = L"devit";
			this->devit->Size = System::Drawing::Size(64, 55);
			this->devit->TabIndex = 66;
			this->devit->Text = L"9";
			this->devit->UseVisualStyleBackColor = false;
			this->devit->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// vosem
			// 
			this->vosem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->vosem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->vosem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->vosem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vosem->Location = System::Drawing::Point(84, 322);
			this->vosem->Name = L"vosem";
			this->vosem->Size = System::Drawing::Size(64, 55);
			this->vosem->TabIndex = 65;
			this->vosem->Text = L"8";
			this->vosem->UseVisualStyleBackColor = false;
			this->vosem->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// sem
			// 
			this->sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sem->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->sem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sem->Location = System::Drawing::Point(14, 322);
			this->sem->Name = L"sem";
			this->sem->Size = System::Drawing::Size(64, 55);
			this->sem->TabIndex = 64;
			this->sem->Text = L"7";
			this->sem->UseVisualStyleBackColor = false;
			this->sem->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// minis
			// 
			this->minis->BackColor = System::Drawing::Color::Gold;
			this->minis->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->minis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minis->Location = System::Drawing::Point(223, 261);
			this->minis->Name = L"minis";
			this->minis->Size = System::Drawing::Size(64, 55);
			this->minis->TabIndex = 63;
			this->minis->Text = L"-";
			this->minis->UseVisualStyleBackColor = false;
			this->minis->Click += gcnew System::EventHandler(this, &MyForm::minis_Click);
			// 
			// shest
			// 
			this->shest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->shest->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->shest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->shest->Location = System::Drawing::Point(153, 261);
			this->shest->Name = L"shest";
			this->shest->Size = System::Drawing::Size(64, 55);
			this->shest->TabIndex = 62;
			this->shest->Text = L"6";
			this->shest->UseVisualStyleBackColor = false;
			this->shest->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// pat
			// 
			this->pat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pat->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pat->Location = System::Drawing::Point(83, 261);
			this->pat->Name = L"pat";
			this->pat->Size = System::Drawing::Size(64, 55);
			this->pat->TabIndex = 61;
			this->pat->Text = L"5";
			this->pat->UseVisualStyleBackColor = false;
			this->pat->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// chetr
			// 
			this->chetr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->chetr->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->chetr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chetr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetr->Location = System::Drawing::Point(13, 261);
			this->chetr->Name = L"chetr";
			this->chetr->Size = System::Drawing::Size(64, 55);
			this->chetr->TabIndex = 60;
			this->chetr->Text = L"4";
			this->chetr->UseVisualStyleBackColor = false;
			this->chetr->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// umnojet
			// 
			this->umnojet->BackColor = System::Drawing::Color::Gold;
			this->umnojet->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->umnojet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->umnojet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->umnojet->Location = System::Drawing::Point(224, 200);
			this->umnojet->Name = L"umnojet";
			this->umnojet->Size = System::Drawing::Size(64, 55);
			this->umnojet->TabIndex = 59;
			this->umnojet->Text = L"*";
			this->umnojet->UseVisualStyleBackColor = false;
			this->umnojet->Click += gcnew System::EventHandler(this, &MyForm::umnojet_Click);
			// 
			// tre
			// 
			this->tre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tre->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tre->Location = System::Drawing::Point(154, 200);
			this->tre->Name = L"tre";
			this->tre->Size = System::Drawing::Size(64, 55);
			this->tre->TabIndex = 58;
			this->tre->Text = L"3";
			this->tre->UseVisualStyleBackColor = false;
			this->tre->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// dva
			// 
			this->dva->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dva->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dva->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dva->Location = System::Drawing::Point(84, 200);
			this->dva->Name = L"dva";
			this->dva->Size = System::Drawing::Size(64, 55);
			this->dva->TabIndex = 57;
			this->dva->Text = L"2";
			this->dva->UseVisualStyleBackColor = false;
			this->dva->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// number
			// 
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->number->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->number->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number->Location = System::Drawing::Point(14, 200);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(64, 55);
			this->number->TabIndex = 56;
			this->number->Text = L"1";
			this->number->UseVisualStyleBackColor = false;
			this->number->Click += gcnew System::EventHandler(this, &MyForm::number_Click);
			// 
			// dileniye
			// 
			this->dileniye->BackColor = System::Drawing::Color::Gold;
			this->dileniye->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dileniye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dileniye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dileniye->Location = System::Drawing::Point(223, 139);
			this->dileniye->Name = L"dileniye";
			this->dileniye->Size = System::Drawing::Size(64, 55);
			this->dileniye->TabIndex = 55;
			this->dileniye->Text = L"/";
			this->dileniye->UseVisualStyleBackColor = false;
			this->dileniye->Click += gcnew System::EventHandler(this, &MyForm::dileniye_Click);
			// 
			// prachent
			// 
			this->prachent->BackColor = System::Drawing::Color::Silver;
			this->prachent->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->prachent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prachent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prachent->Location = System::Drawing::Point(153, 139);
			this->prachent->Name = L"prachent";
			this->prachent->Size = System::Drawing::Size(64, 55);
			this->prachent->TabIndex = 54;
			this->prachent->Text = L"%";
			this->prachent->UseVisualStyleBackColor = false;
			this->prachent->Click += gcnew System::EventHandler(this, &MyForm::prachent_Click);
			// 
			// pulusdileniyeninus
			// 
			this->pulusdileniyeninus->BackColor = System::Drawing::Color::Silver;
			this->pulusdileniyeninus->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pulusdileniyeninus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pulusdileniyeninus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->pulusdileniyeninus->Location = System::Drawing::Point(14, 139);
			this->pulusdileniyeninus->Name = L"pulusdileniyeninus";
			this->pulusdileniyeninus->Size = System::Drawing::Size(64, 55);
			this->pulusdileniyeninus->TabIndex = 53;
			this->pulusdileniyeninus->Text = L"+/-";
			this->pulusdileniyeninus->UseVisualStyleBackColor = false;
			this->pulusdileniyeninus->Click += gcnew System::EventHandler(this, &MyForm::pulusdileniyeninus_Click);
			// 
			// ac
			// 
			this->ac->BackColor = System::Drawing::Color::Silver;
			this->ac->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ac->Location = System::Drawing::Point(14, 78);
			this->ac->Name = L"ac";
			this->ac->Size = System::Drawing::Size(134, 55);
			this->ac->TabIndex = 52;
			this->ac->Text = L"AC";
			this->ac->UseVisualStyleBackColor = false;
			this->ac->Click += gcnew System::EventHandler(this, &MyForm::ac_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(83, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 55);
			this->button1->TabIndex = 73;
			this->button1->Text = L"π";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(300, 463);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ryu);
			this->Controls->Add(this->C);
			this->Controls->Add(this->ravno);
			this->Controls->Add(this->zapitaya);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->devit);
			this->Controls->Add(this->vosem);
			this->Controls->Add(this->sem);
			this->Controls->Add(this->minis);
			this->Controls->Add(this->shest);
			this->Controls->Add(this->pat);
			this->Controls->Add(this->chetr);
			this->Controls->Add(this->umnojet);
			this->Controls->Add(this->tre);
			this->Controls->Add(this->dva);
			this->Controls->Add(this->number);
			this->Controls->Add(this->dileniye);
			this->Controls->Add(this->prachent);
			this->Controls->Add(this->pulusdileniyeninus);
			this->Controls->Add(this->ac);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Colculator 2.1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ryu->Text = "0";
		this->ryu->ForeColor = Color::Black;
		this->bir = 0;
		this->nir = ' ';
		this->c = false;
	}
	private: System::Void number_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ryu->ForeColor = Color::Black;
		Button^ button = safe_cast<Button^>(sender);
		if (this->ryu->Text == "0" || c) {
			this->ryu->Text = button->Text;
			c = false;
		}
		else {
			this->ryu->Text = this->ryu->Text + button->Text;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ryu->Text = "3,14";
}
	   private: System::Void matimatika(char opr) {
		   this->bir = System::Convert::ToDouble(this->ryu->Text);
		   this->nir = opr;
		   this->ryu->Text = "0";
	   };

private: System::Void dileniye_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('/');
}
private: System::Void umnojet_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('*');
}
private: System::Void minis_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('-');
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('+');
}
private: System::Void ravno_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nir == ' ')
		return;


	float doit = System::Convert::ToDouble(this->ryu->Text);
	float res;
	switch (this->nir) {
	case '+': res = this->bir + doit; break;
	case '-': res = this->bir - doit; break;
	case '*': res = this->bir * doit; break;
	case '%': res = this->bir * doit / 100; break;
	case '/':
		if (doit == 0) {
			res = 0;
			this->ryu->ForeColor = Color::Red;
			MessageBox::Show(this, "Действие запрещено!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->bir / doit; break;
	}
	c = true;
	this->ryu->Text = System::Convert::ToString(res);
}

private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->ryu->Text->Length > 0)
		this->ryu->Text = this->ryu->Text->Remove(this->ryu->Text->Length - 1, 1);
}
private: System::Void pulusdileniyeninus_Click(System::Object^ sender, System::EventArgs^ e) {
	float num1 = System::Convert::ToDouble(this->ryu->Text);
	num1 *= -1;
	this->ryu->Text = System::Convert::ToString(num1);
}
private: System::Void prachent_Click(System::Object^ sender, System::EventArgs^ e) {
	matimatika('%');
}

private: System::Void zapitaya_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ yuk = this->ryu->Text;
	if (!yuk->Contains(","))
		this->ryu->Text = yuk + ",";+

}
};
}
