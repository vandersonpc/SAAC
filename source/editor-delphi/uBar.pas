unit uBar;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Buttons, ComCtrls, ExtCtrls;

type
  TfrmBar = class(TForm)
    Panel1: TPanel;
    Label1: TLabel;
    Label5: TLabel;
    Label16: TLabel;
    BarCombo: TComboBox;
    pg: TEdit;
    Barname: TEdit;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    Label17: TLabel;
    Label2: TLabel;
    qg: TEdit;
    Label3: TLabel;
    pc: TEdit;
    Label4: TLabel;
    qc: TEdit;
    Label6: TLabel;
    vmag: TEdit;
    Label7: TLabel;
    vdeg: TEdit;
    Label8: TLabel;
    vbase: TEdit;
    procedure FormShow(Sender: TObject);
    procedure BitBtn2Click(Sender: TObject);
    procedure BitBtn1Click(Sender: TObject);
    procedure pgKeyPress(Sender: TObject; var Key: Char);
    procedure qgKeyPress(Sender: TObject; var Key: Char);
    procedure pcKeyPress(Sender: TObject; var Key: Char);
    procedure qcKeyPress(Sender: TObject; var Key: Char);
    procedure vmagKeyPress(Sender: TObject; var Key: Char);
    procedure vdegKeyPress(Sender: TObject; var Key: Char);
    procedure vbaseKeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
  public
    { Public declarations }
    procedure AddAt(idx: Integer; s: string);
  end;

var
  frmBar: TfrmBar;

implementation

uses uMain;

{$R *.DFM}
procedure TfrmBar.AddAt(idx: Integer; s: string);
 begin
   
  end;


procedure TfrmBar.FormShow(Sender: TObject);
begin
  frmBar.Caption := frmBarrCap;
  if frmMain.isBedit then
    Begin
      frmBar.Caption := frmBarrCap1;
      Barname.Text := frmMain.Barlist.Selected.Caption ;
      BarCombo.ItemIndex := BarCombo.Items.IndexOf(frmMain.Barlist.Selected.SubItems.Strings[0]);
      Pg.text :=  frmMain.Barlist.Selected.SubItems.Strings[1];
      Qg.text :=  frmMain.Barlist.Selected.SubItems.Strings[2];
      Pc.text :=  frmMain.Barlist.Selected.SubItems.Strings[3];
      Qc.text :=  frmMain.Barlist.Selected.SubItems.Strings[4];
      Vmag.text  :=  frmMain.Barlist.Selected.SubItems.Strings[5];
      Vdeg.text  :=  frmMain.Barlist.Selected.SubItems.Strings[6];
      Vbase.text :=  frmMain.Barlist.Selected.SubItems.Strings[7];
    end;
end;

procedure TfrmBar.BitBtn2Click(Sender: TObject);
begin
  Close;
end;

procedure TfrmBar.BitBtn1Click(Sender: TObject);
Var
ListItem: TListItem;
X : Integer;

begin
if trim(barname.Text) = '' then
    MessageDlg(Erro9, mtError,[mbOk], 0)
 else
    if Barcombo.ItemIndex = -1  then
       MessageDlg(Erro10, mtError,[mbOk], 0)
    else
 begin
  If frmMain.isBEdit = False then
     begin
       with frmMain.BarList do
          Begin
            ListItem := Items.Add;
            ListItem.Caption := barname.text;
            ListItem.SubItems.Add(BarCombo.Items.Strings[BarCombo.ItemIndex]);
            ListItem.SubItems.Add(pg.Text);
            ListItem.SubItems.Add(qg.Text);
            ListItem.SubItems.Add(pc.Text);
            ListItem.SubItems.Add(qc.Text);
            ListItem.SubItems.Add(vmag.Text);
            ListItem.SubItems.Add(vdeg.Text);
            ListItem.SubItems.Add(vbase.Text);
            if not uMain.NotSaved  then frmMain.Caption := frmMain.Caption + '*';
            uMain.NotSaved := True;
            frmMain.Enbus.Caption := InttoStr(frmMain.Barlist.Items.Count);

          end;
    end
 else
    begin
      frmMain.Barlist.Selected.Caption := barname.text;
      frmMain.Barlist.Selected.SubItems.Insert(0,BarCombo.Items.Strings[BarCombo.ItemIndex]);
      frmMain.Barlist.Selected.SubItems.Insert(1,pg.Text);
      frmMain.Barlist.Selected.SubItems.Insert(2,qg.Text);
      frmMain.Barlist.Selected.SubItems.Insert(3,pc.Text);
      frmMain.Barlist.Selected.SubItems.Insert(4,qc.Text);
      frmMain.Barlist.Selected.SubItems.Insert(5,vmag.Text);
      frmMain.Barlist.Selected.SubItems.Insert(6,vdeg.Text);
      frmMain.Barlist.Selected.SubItems.Insert(7,vbase.Text);
      if not uMain.NotSaved  then frmMain.Caption := frmMain.Caption + '*';
      uMain.NotSaved := True;
    end;
close;
end;
end;

procedure TfrmBar.pgKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.qgKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.pcKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.qcKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.vmagKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.vdegKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmBar.vbaseKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

end.

