#include "MyForm.h"

using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::Sql;
using namespace System::Data::SqlClient;
using namespace MySql::Data::MySqlClient;

[STAThread]
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MySQLProject::MyForm form;
	Application::Run(% form);
}