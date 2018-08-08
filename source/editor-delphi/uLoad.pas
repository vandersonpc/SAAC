unit uLoad;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  ExtCtrls, StdCtrls, jpeg, ScrollText;

type
  TfrmLoad = class(TForm)
    Image1: TImage;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    ver: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    closebtn: TButton;
    procedure closebtnClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }

  public
    { Public declarations }
    procedure Delay(msecs:integer);
  end;

var
  frmLoad: TfrmLoad;

implementation
 uses uMain;
{$R *.DFM}
 procedure TFrmLoad.Delay(msecs:integer);
var
   Tmin,FirstTickCount:longint;

   begin
     FirstTickCount:=GetTickCount;
     repeat
     TMin:=(msecs - (GetTickCount-FirstTickCount)) div 1000;
           Application.ProcessMessages; {allowing access to other
                                         controls, etc.}
 //    StBar.Panels[0].text:='Aguarde..... ' + inttostr(Tmin);
     until ((GetTickCount-FirstTickCount) >= Longint(msecs));
end;

procedure TfrmLoad.closebtnClick(Sender: TObject);
begin
  Close;
end;

procedure TfrmLoad.FormClose(Sender: TObject; var Action: TCloseAction);
begin
    frmLoad.Closebtn.Visible := False;
end;

procedure TfrmLoad.FormCreate(Sender: TObject);
begin
  ver.Caption := 'Versão ' + uMain.version;
end;

end.
