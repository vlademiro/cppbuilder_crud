//---------------------------------------------------------------------------

#ifndef UFormClienteH
#define UFormClienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormCliente : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFormCliente(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormCliente *FormCliente;
//---------------------------------------------------------------------------
#endif
