unit uDisp;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Buttons, ExtCtrls, ComCtrls, Menus;

type
  TfrmDisp = class(TForm)
    Panel1: TPanel;
    DispCombo: TComboBox;
    Label1: TLabel;
    Label2: TLabel;
    Ligcombo: TComboBox;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    Label3: TLabel;
    Label4: TLabel;
    Bini: TEdit;
    UpDown1: TUpDown;
    Bfin: TEdit;
    UpDown2: TUpDown;
    Label5: TLabel;
    v1nom: TEdit;
    cap1: TLabel;
    v2nom: TEdit;
    Label7: TLabel;
    snom: TEdit;
    rpos: TEdit;
    Label8: TLabel;
    xpos: TEdit;
    Label9: TLabel;
    Label10: TLabel;
    rneg: TEdit;
    Label11: TLabel;
    xneg: TEdit;
    Label12: TLabel;
    rzero: TEdit;
    Label13: TLabel;
    xzero: TEdit;
    Label14: TLabel;
    Ysh: TEdit;
    tap: TEdit;
    Label15: TLabel;
    Label16: TLabel;
    dispname: TEdit;
    Zn: TEdit;
    cap: TLabel;
    PopupMenu1: TPopupMenu;
    ConverterHPparaMVA1: TMenuItem;
    procedure BitBtn2Click(Sender: TObject);
    procedure v2nomKeyPress(Sender: TObject; var Key: Char);
    procedure snomKeyPress(Sender: TObject; var Key: Char);
    procedure v1nomKeyPress(Sender: TObject; var Key: Char);
    procedure rposKeyPress(Sender: TObject; var Key: Char);
    procedure rnegKeyPress(Sender: TObject; var Key: Char);
    procedure rzeroKeyPress(Sender: TObject; var Key: Char);
    procedure YshKeyPress(Sender: TObject; var Key: Char);
    procedure xposKeyPress(Sender: TObject; var Key: Char);
    procedure xnegKeyPress(Sender: TObject; var Key: Char);
    procedure xzeroKeyPress(Sender: TObject; var Key: Char);
    procedure tapKeyPress(Sender: TObject; var Key: Char);
    procedure BitBtn1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure DispComboChange(Sender: TObject);
    procedure UpDown1Click(Sender: TObject; Button: TUDBtnType);
    procedure LigcomboChange(Sender: TObject);
    procedure ConverterHPparaMVA1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmDisp: TfrmDisp;
   Dpos : Integer;
Dn1  : Extended;
Dn2  : Extended;
implementation

uses uMain, uConv;

{$R *.DFM}
function InStr(Start: integer; Source: string; SourceToFind: string): integer;
    begin
    	Result := pos(SourceToFind,copy(Source,Start,Length(Source) - (Start - 1)));
    end;

procedure TfrmDisp.BitBtn2Click(Sender: TObject);
begin
  Close;
end;

procedure TfrmDisp.v2nomKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;
 procedure TfrmDisp.snomKeyPress(Sender: TObject; var Key: Char);

begin
  //Key := frmMain.ChkNum(Key);

 
 If Key = '.' then Key := DecimalSeparator;
 If (Key = '=') and (inStr(1,snom.text,'@') > 0) then
    begin
      Dpos := inStr(1,snom.Text,'@');
      if Dpos = 1 then
      snom.Text := Copy(snom.Text,Dpos+1,Length(snom.Text))
    else
    if (Dpos = Length(snom.Text)) and (Length(snom.Text) > 1) then
       snom.Text := Copy(snom.Text,1,Length(snom.Text)-1)
     else
    if Dpos > 1 then
       Begin
         Dn1 := StrToFloat(Copy(snom.Text,1,Dpos-1));
         Dn2 := StrToFloat(Copy(snom.Text,Dpos+1,Length(snom.Text) - Dpos));
         snom.Text := FormatFloat('###0.00', ((Dn1 * 736)/Dn2)/1e6 );
       end;
    end;

 If not( key in['0'..'9',#8,Decimalseparator,'@'] ) then
    begin
      key:=#0;
    end;
end;
procedure TfrmDisp.v1nomKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.rposKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.rnegKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.rzeroKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.YshKeyPress(Sender: TObject; var Key: Char);
begin
  Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.xposKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.xnegKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.xzeroKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.tapKeyPress(Sender: TObject; var Key: Char);
begin
 Key := frmMain.ChkNum(Key);
end;

procedure TfrmDisp.BitBtn1Click(Sender: TObject);
Var
ListItem: TListItem;

begin
 if trim(dispname.Text) = '' then
    MessageDlg(Erro4, mtError,[mbOk], 0)
 else
    if dispcombo.ItemIndex = -1  then
       MessageDlg(Erro5, mtError,[mbOk], 0)
    else
       if ligcombo.ItemIndex = -1  then
          MessageDlg(Erro6, mtError,[mbOk], 0)
       else
 Begin
  If frmMain.isEdit = False then
     begin
       with frmMain.ElemList do
          Begin
           Dpos := inStr(1,snom.Text,'@');
      if Dpos = 1 then
      snom.Text := Copy(snom.Text,Dpos+1,Length(snom.Text))
    else
    if (Dpos = Length(snom.Text)) and (Length(snom.Text) > 1) then
       snom.Text := Copy(snom.Text,1,Length(snom.Text)-1)
     else
    if Dpos > 1 then
       Begin
         Dn1 := StrToFloat(Copy(snom.Text,1,Dpos-1));
         Dn2 := StrToFloat(Copy(snom.Text,Dpos+1,Length(snom.Text) - Dpos));
         snom.Text := FormatFloat('###0.00', ((Dn1 * 736)/Dn2)/1e6 );
         snom.Refresh;
       end;
            ListItem := Items.Add;
            ListItem.Caption := dispname.text;
            ListItem.SubItems.Add(DispCombo.Items.Strings[DispCombo.ItemIndex]);
            ListItem.SubItems.Add(LigCombo.Items.Strings[LigCombo.ItemIndex]);
            ListItem.SubItems.Add(bini.Text);
            ListItem.SubItems.Add(bfin.Text);
            ListItem.SubItems.Add(snom.Text);
            ListItem.SubItems.Add(v1nom.Text);
            ListItem.SubItems.Add(v2nom.Text);
            ListItem.SubItems.Add(rpos.Text);
            ListItem.SubItems.Add(xpos.Text);
            ListItem.SubItems.Add(rneg.Text);
            ListItem.SubItems.Add(xneg.Text);
            ListItem.SubItems.Add(rzero.Text);
            ListItem.SubItems.Add(xzero.Text);
            ListItem.SubItems.Add(ysh.Text);
            ListItem.SubItems.Add(tap.Text);
            ListItem.SubItems.Add(zn.Text);
            if not uMain.NotSaved  then frmMain.Caption := frmMain.Caption + '*';
            uMain.NotSaved := True;
            frmMain.Estatistica;
          end;
    end
  else
    begin
      frmMain.Elemlist.Selected.Caption := dispname.text;
      frmMain.Elemlist.Selected.SubItems.Insert(0,DispCombo.Items.Strings[DispCombo.ItemIndex]);
      frmMain.Elemlist.Selected.SubItems.Insert(1,LigCombo.Items.Strings[LigCombo.ItemIndex]);
      frmMain.Elemlist.Selected.SubItems.Insert(2,bini.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(3,bfin.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(4,snom.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(5,v1nom.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(6,v2nom.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(7,rpos.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(8,xpos.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(9,rneg.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(10,xneg.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(11,rzero.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(12,xzero.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(13,ysh.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(14,tap.Text);
      frmMain.Elemlist.Selected.SubItems.Insert(15,zn.Text);
      if not uMain.NotSaved  then frmMain.Caption := frmMain.Caption + '*';
      uMain.NotSaved := True;

    end;
close;
end;
end;

procedure TfrmDisp.FormShow(Sender: TObject);
begin
  frmDisp.Caption := frmDispCap;
  UpDown1.Max := frmMain.Barlist.Items.Count;
  UpDown2.Max := frmMain.Barlist.Items.Count;
  If frmMain.isEdit then
    Begin
      frmDisp.Caption := frmDispCap1;
      Dispname.Text := frmMain.Elemlist.Selected.Caption ;
      DispCombo.ItemIndex := DispCombo.Items.IndexOf(frmMain.Elemlist.Selected.SubItems.Strings[0]);
      LigCombo.ItemIndex  := LigCombo.Items.IndexOf(frmMain.Elemlist.Selected.SubItems.Strings[1]);
      bini.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[2];
      bfin.text :=  frmMain.Elemlist.Selected.SubItems.Strings[3];
      snom.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[4];
      v1nom.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[5];
      v2nom.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[6];
      rpos.Text  :=  frmMain.Elemlist.Selected.SubItems.Strings[7];
      xpos.Text  :=  frmMain.Elemlist.Selected.SubItems.Strings[8];
      rneg.Text  :=  frmMain.Elemlist.Selected.SubItems.Strings[9];
      xneg.Text  :=  frmMain.Elemlist.Selected.SubItems.Strings[10];
      rzero.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[11];
      xzero.Text :=  frmMain.Elemlist.Selected.SubItems.Strings[12];
      Ysh.Text   :=  frmMain.Elemlist.Selected.SubItems.Strings[13];
      tap.Text   :=  frmMain.Elemlist.Selected.SubItems.Strings[14];
      Zn.Text    :=  frmMain.Elemlist.Selected.SubItems.Strings[15];

    end;
end;

procedure TfrmDisp.DispComboChange(Sender: TObject);
begin
  If (Dispcombo.ItemIndex = 0) or (DispCombo.ItemIndex = 3) then
     Begin
       UpDown2.Enabled := False;
       Bfin.Text := Bini.Text;
       Ligcombo.ItemIndex := 9;
     end
  else
     UpDown2.Enabled := True;

  If (Dispcombo.ItemIndex = 0) or (DispCombo.ItemIndex = 1) or (DispCombo.ItemIndex = 3) then
    Begin
      Ysh.Enabled := false;
      V1nom.Enabled := true;
      V2nom.Enabled := true;
      Snom.Enabled:= true;
      Zn.Enabled := true;      
    end
  else
     Begin
       Ligcombo.ItemIndex := 11;
       Ysh.Enabled := true;
       V1nom.Enabled := False;
       V2nom.Enabled := False;
       Snom.Enabled:= False;
       Zn.Enabled := False;
     end;

  If (Dispcombo.ItemIndex <> 1) then
    Begin
     Tap.Enabled := False;
     V2nom.Enabled := False;
    end
  else
     begin
     V2nom.Enabled := True;
      Tap.Enabled := True;
      Ligcombo.ItemIndex := 0;
     end;
  
end;

procedure TfrmDisp.UpDown1Click(Sender: TObject; Button: TUDBtnType);
begin
  If (Dispcombo.ItemIndex = 0) or (DispCombo.ItemIndex = 3) then
     Begin
       UpDown2.Enabled := False;
       Bfin.Text := Bini.Text;
     end
  else
     UpDown2.Enabled := True;
  
end;

procedure TfrmDisp.LigcomboChange(Sender: TObject);
begin
  If (Dispcombo.ItemIndex = 0) or (DispCombo.ItemIndex = 3) then
     If (Ligcombo.ItemIndex < 8 ) or (Ligcombo.ItemIndex > 10 )then
        Begin
          MessageDlg(uMain.Erro13,mtError, [mbOk], 0);
          Ligcombo.ItemIndex := 9;
        end;
  If (Dispcombo.ItemIndex = 1) then
     If (Ligcombo.ItemIndex > 8 ) then
        Begin
          MessageDlg(uMain.Erro13,mtError, [mbOk], 0);
          Ligcombo.ItemIndex := 0;
        end;
  If (Dispcombo.ItemIndex = 2) then
     If (Ligcombo.ItemIndex < 11 ) then
        Begin
          MessageDlg(uMain.Erro13,mtError, [mbOk], 0);
          Ligcombo.ItemIndex := 11;
        end;
end;

procedure TfrmDisp.ConverterHPparaMVA1Click(Sender: TObject);
begin

      Dpos := inStr(1,snom.Text,'@');
      if Dpos = 1 then
      snom.Text := Copy(snom.Text,Dpos+1,Length(snom.Text))
    else
    if (Dpos = Length(snom.Text)) and (Length(snom.Text) > 1) then
       snom.Text := Copy(snom.Text,1,Length(snom.Text)-1)
     else
    if Dpos > 1 then
       Begin
         Dn1 := StrToFloat(Copy(snom.Text,1,Dpos-1));
         Dn2 := StrToFloat(Copy(snom.Text,Dpos+1,Length(snom.Text) - Dpos));
         snom.Text := FormatFloat('###0.00', ((Dn1 * 746)/Dn2)/1e6 );
       end;
end;

end.
