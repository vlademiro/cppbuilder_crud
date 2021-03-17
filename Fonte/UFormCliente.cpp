//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFormCliente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormCliente *FormCliente;
//---------------------------------------------------------------------------
__fastcall TFormCliente::TFormCliente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormCliente::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action = TCloseAction::caFree;
}
//---------------------------------------------------------------------------
