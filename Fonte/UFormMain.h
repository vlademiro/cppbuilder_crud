//---------------------------------------------------------------------------

#ifndef UFormMainH
#define UFormMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TBitBtn *btnProfessor;
	TMainMenu *MainMenu1;
	TMenuItem *C1;
	TMenuItem *Professor1;
	TMenuItem *N1;
	TMenuItem *Sair1;
	void __fastcall EvEncerrarSistemaOnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
