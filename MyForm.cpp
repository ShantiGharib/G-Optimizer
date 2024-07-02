#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int WinMain()
{Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
UserInterfaceWizard::MyForm Form;
Application::Run(% Form);
}