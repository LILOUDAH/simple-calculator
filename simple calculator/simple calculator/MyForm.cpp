#include "MyForm.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	simplecalculator::MyForm form;
	Application::Run(% form);
}