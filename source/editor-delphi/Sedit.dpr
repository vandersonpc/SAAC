program Sedit;

uses
  Forms,
  uMain in 'uMain.pas' {frmMain},
  uDisp in 'uDisp.pas' {frmDisp},
  uBar in 'uBar.pas' {frmBar},
  uDos in 'uDos.pas' {frmDos},
  uLoad in 'uLoad.pas' {frmLoad};

{$R *.RES}

begin
  Application.Initialize;
  
     frmLoad := TfrmLoad.Create(Application);
     frmLoad.Show;
     frmLoad.Update;
     frmLoad.Delay(5000);
     frmLoad.Close;
     
  Application.Title := 'SACC';
  Application.CreateForm(TfrmMain, frmMain);
  Application.CreateForm(TfrmDisp, frmDisp);
  Application.CreateForm(TfrmBar, frmBar);
  Application.CreateForm(TfrmDos, frmDos);
  Application.CreateForm(TfrmLoad, frmLoad);
  Application.Run;
end.
