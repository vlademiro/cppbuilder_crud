//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFormMain.h"
#include "UFormCliente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------
__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::EvEncerrarSistemaOnClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TFormMain::btnProfessorClick(TObject *Sender)
{
    new TFormCliente(this);
}
//---------------------------------------------------------------------------

