unit uConv;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  ExtCtrls, StdCtrls, Buttons;

type
  TfrmConv = class(TForm)
    Panel1: TPanel;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    StaticText38: TStaticText;
    PHP: TEdit;
    FP: TEdit;
    StaticText1: TStaticText;
    procedure BitBtn2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmConv: TfrmConv;

implementation

{$R *.DFM}

procedure TfrmConv.BitBtn2Click(Sender: TObject);
begin
  Close;
end;

end.
