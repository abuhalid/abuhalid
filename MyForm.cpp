#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array < String^>^ num) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	colculator::MyForm form;
	Application::Run(% form);

}
