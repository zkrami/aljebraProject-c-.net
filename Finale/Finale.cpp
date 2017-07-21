// Finale.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "poly.h"
#include "Report.h"
#include "matrix_form.h"
#include "grid.h"
using namespace Finale;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
 try{
	if(args->Length){

		matrix <long double > t; 
		matrix_form f;
		 string s= f.String_to_string(args[0]);
		 t.loadf(s);
		 grid::get_datagrid_from_matrixt(t,f.metroGrid1);
		 f.ShowDialog();
		 return 0;
	}
	if(args->Length) return 0;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	}
	catch(int e){
		MyForm1 r;
		r.ShowDialog();
		//Console::WriteLine(e);
		//Console::ReadLine();
	}
	return 0;
}
