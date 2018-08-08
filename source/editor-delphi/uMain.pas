unit uMain;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, Buttons, ComCtrls, Menus, ToolWin, ImgList,ExtCtrls,printers,
  jpeg, ScrollText;

type
  TfrmMain = class(TForm)
    Tabs: TPageControl;
    MainMenu1: TMainMenu;
    Arquivo1: TMenuItem;
    Sobre1: TMenuItem;
    Sistema: TTabSheet;
    Barramentos: TTabSheet;
    ElemList: TListView;
    Label1: TLabel;
    sName: TEdit;
    Label2: TLabel;
    sBase: TEdit;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    GroupBox1: TGroupBox;
    ToolBar1: TToolBar;
    Status: TStatusBar;
    BitBtn3: TBitBtn;
    ToolButton1: TToolButton;
    ToolButton2: TToolButton;
    ToolButton3: TToolButton;
    ToolButton4: TToolButton;
    ToolButton5: TToolButton;
    ImageList1: TImageList;
    Novo1: TMenuItem;
    Abrir1: TMenuItem;
    Salvar1: TMenuItem;
    Salvarcomo1: TMenuItem;
    Barlist: TListView;
    GroupBox2: TGroupBox;
    BitBtn4: TBitBtn;
    BitBtn5: TBitBtn;
    BitBtn6: TBitBtn;
    Open1: TOpenDialog;
    Savedat: TSaveDialog;
    N1: TMenuItem;
    Sair2: TMenuItem;
    Openout: TOpenDialog;
    Relat: TTabSheet;
    RelMemo: TMemo;
    Printbtn: TToolButton;
    ToolButton7: TToolButton;
    Print1: TPrintDialog;
    ToolButton6: TToolButton;
    Elempop: TPopupMenu;
    Editar1: TMenuItem;
    Remover1: TMenuItem;
    PopupMenu1: TPopupMenu;
    MenuItem1: TMenuItem;
    MenuItem2: TMenuItem;
    GroupBox3: TGroupBox;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    fout: TEdit;
    tpfop: TRadioGroup;
    Zf: TEdit;
    pfv: TEdit;
    BitBtn7: TBitBtn;
    CriaOut: TBitBtn;
    GroupBox4: TGroupBox;
    ed: TLabel;
    ed1: TLabel;
    Label8: TLabel;
    Label9: TLabel;
    Label10: TLabel;
    Enbus: TLabel;
    Engen: TLabel;
    Entf: TLabel;
    Enc: TLabel;
    Enlt: TLabel;
    procedure BitBtn1Click(Sender: TObject);
    procedure Sair1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure sBaseKeyPress(Sender: TObject; var Key: Char);
    procedure BitBtn2Click(Sender: TObject);
    procedure BarNKeyPress(Sender: TObject; var Key: Char);
    procedure BitBtn4Click(Sender: TObject);
    procedure BitBtn6Click(Sender: TObject);
    procedure BitBtn5Click(Sender: TObject);
    procedure BitBtn3Click(Sender: TObject);
    procedure ToolButton3Click(Sender: TObject);
    procedure ToolButton2Click(Sender: TObject);
    procedure ToolButton1Click(Sender: TObject);
    procedure Salvarcomo1Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure CriaOutClick(Sender: TObject);
    procedure BitBtn7Click(Sender: TObject);
    procedure pfvKeyPress(Sender: TObject; var Key: Char);
    procedure ZfKeyPress(Sender: TObject; var Key: Char);
    procedure PrintbtnClick(Sender: TObject);
    procedure TabsChange(Sender: TObject);
    procedure ToolButton1MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure FormMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure ToolButton2MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure ToolButton3MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure PrintbtnMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure ToolButton5MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn1MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn3MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn2MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn5MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn6MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn4MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BitBtn7MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure SistemaMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure GroupBox3MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure GroupBox1MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure BarramentosMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure RelMemoMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure GroupBox2MouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure sNameMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure sBaseMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure foutMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure ZfMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure pfvMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure Sobre1Click(Sender: TObject);
    procedure CriaOutMouseMove(Sender: TObject; Shift: TShiftState; X,
      Y: Integer);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure ElemListMouseDown(Sender: TObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure FormCreate(Sender: TObject);
    procedure sNameKeyDown(Sender: TObject; var Key: Word;
      Shift: TShiftState);
    procedure sBaseKeyDown(Sender: TObject; var Key: Word;
      Shift: TShiftState);
    procedure tpfopClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
     isEdit : boolean;
     isBedit: boolean;
     function chkNum(PKey: Char):Char ;
     procedure SaveFile(FileName:String);
     procedure ReadFile(FileName:String);
     procedure readcolum(destlist:Tstrings;sline:String;delim_ini:string;delim_fin:string);
     procedure Estatistica;
  end;

const
  version     = '2.3/2006';
  frmCaption  = 'SACC - Software de Análise de Curto-Circuito Versão ' + version + ' - ';
  frmDispCap  = 'Adicionar Dispositivo';
  frmBarrCap  = 'Adicionar Barramento';
  frmDispCap1 = 'Editar Dispositivo';
  frmBarrCap1 = 'Editar Barramento';
  MSG1       = 'Deseja remover o item selecionado?';
  MSG2       = 'Deseja salvar o arquivo atual?';
  MSG3       = 'Aguarde.Iniciando análise....';
  MSG4       = 'Arquivo já existe!Sobregravar?';
  Erro1      = 'Nenhum item foi selecionado!';
  Erro2      = 'O número de barramentos deve ser maior que zero!';
  Erro3      = 'Nenhum item para ser salvo!';
  Erro4      = 'O nome do dispositivo está em branco!';
  Erro5      = 'Tipo de dispositivo não selecionado!';
  Erro6      = 'Tipo de ligação não selecionada!';
  Erro7      = 'Arquivo não foi salvo,Nome do sistema ou potência base não definidos!';
  Erro8      = 'A potência base deve ser maior que zero!';
  Erro9      = 'Nome do barramento não definido!';
  Erro10     = 'Tipo de barramento não definido!';
  Erro11     = 'Nome do arquivo de saída não definido!';
  Erro12     = 'Erro ao visualizar relatório';
  Erro13     = 'Ligação não permitida para este dispositivo!';
var
  frmMain: TfrmMain;
  FileName : String;
  NotSaved : Boolean;
  MsgRes : Word;
implementation

uses uDisp, uBar, uDos, uLoad;

{$R *.DFM}

procedure PrintMemo(Memo: TMemo);
const
  cEspacoLinha = 5;
  cMargemSuperior = 50;
  cMargemEsquerda = 30;
var
  AlturaLinha, Y, I: integer;
begin

  Printer.BeginDoc;
  try
    { Usa na impressora a mesma fonte do memo }
    Printer.Canvas.Font.Assign(Memo.Font);

    AlturaLinha := Printer.Canvas.TextHeight('Tg');

    Y := cMargemSuperior;
    for I := 0 to Memo.Lines.Count -1 do begin

      if Y > Printer.PageHeight then begin
        Printer.NewPage;
        Y := cMargemSuperior;
      end;

      Printer.Canvas.TextOut(cMargemEsquerda, Y, Memo.Lines[I]);

      Y := Y + AlturaLinha + cEspacoLinha;
    end;
  finally
    Printer.EndDoc;
  end;
end;

procedure RunDosInMemo(DosApp:String;AMemo:TMemo) ;
  const
     ReadBuffer = 2400;
  var
   Security : TSecurityAttributes;
   ReadPipe,WritePipe : THandle;
   start : TStartUpInfo;
   ProcessInfo : TProcessInformation;
   Buffer : Pchar;
   BytesRead : DWord;
   Apprunning : DWord;
  begin
   With Security do begin
    nlength := SizeOf(TSecurityAttributes) ;
    binherithandle := true;
    lpsecuritydescriptor := nil;
   end;
   if Createpipe (ReadPipe, WritePipe,
                  @Security, 0) then begin
    Buffer := AllocMem(ReadBuffer + 1) ;
    FillChar(Start,Sizeof(Start),#0) ;
    start.cb := SizeOf(start) ;
    start.hStdOutput := WritePipe;
    start.hStdInput := ReadPipe;
    start.dwFlags := STARTF_USESTDHANDLES +
                         STARTF_USESHOWWINDOW;
    start.wShowWindow := SW_HIDE;

    if CreateProcess(nil,
           PChar(DosApp),
           @Security,
           @Security,
           true,
           NORMAL_PRIORITY_CLASS,
           nil,
           nil,
           start,
           ProcessInfo)
    then
    begin
     repeat
      Apprunning := WaitForSingleObject
                   (ProcessInfo.hProcess,100) ;
      Application.ProcessMessages;
     until (Apprunning <> WAIT_TIMEOUT) ;
     AMemo.lines.clear;
      Repeat
        BytesRead := 0;
        ReadFile(ReadPipe,Buffer[0],
ReadBuffer,BytesRead,nil) ;
        Buffer[BytesRead]:= #0;
        OemToAnsi(Buffer,Buffer) ;
        AMemo.Text := AMemo.text + String(Buffer) ;
      until (BytesRead < ReadBuffer) ;
   end;
   FreeMem(Buffer) ;
   CloseHandle(ProcessInfo.hProcess) ;
   CloseHandle(ProcessInfo.hThread) ;
   CloseHandle(ReadPipe) ;
   CloseHandle(WritePipe) ;
   end;
  end;

procedure TfrmMain.Estatistica;
Var
x : integer;
ntf : integer;
ngen: integer;
nc  : integer;
nlt : integer;
begin
  ngen := 0;
  ntf  := 0;
  nc   := 0;
  nlt  := 0;  
  For x := 0 to ElemList.Items.Count - 1 do
     Begin
       if Elemlist.Items.Item[x].SubItems.Strings[0] = 'Gerador' then ngen := ngen + 1;
       if Elemlist.Items.Item[x].SubItems.Strings[0] = 'Transformador' then ntf := ntf + 1;
       if Elemlist.Items.Item[x].SubItems.Strings[0] = 'Carga' then nc := nc + 1;
       if Elemlist.Items.Item[x].SubItems.Strings[0] = 'Linha de Transmissão' then nlt := nlt + 1;
     end;
   Engen.Caption := InttoStr(ngen);
   Entf.Caption  := InttoStr(ntf);
   Enc.Caption   := InttoStr(nc);
   Enlt.Caption  := InttoStr(nlt);

end;

procedure TfrmMain.readcolum(destlist:Tstrings;sline:String;delim_ini:string;delim_fin:string);
Var
X : integer;
A : integer;
delim : string;
Begin
  A := 0;
  sline := TrimLeft(sline);
  sline := TrimRight(sline);
  destlist.clear;
  for x := 1 to length(sline)do
     Begin
       delim := copy(sline,x,length(delim_ini));
       If delim = delim_ini then
          Begin
            destlist.Add(Copy(sline,A+1,x-A-1));
            A := X;
          end;
       delim := copy(sline,x,length(delim_fin));   
       If delim = delim_fin  then
          destlist.add(Copy(sline,A+1,X-A-1));
     end;
      If trim(delim_fin) = '@'  then
         destlist.add(Copy(sline,A+1,X-A-1));
End;


procedure TfrmMain.ReadFile(FileName:String);
Var
 F     : TextFile;
 Rline : String;
 a     : Integer;
 Btext : String;
 Bline : String;
 RBUS  : Boolean;
 RSYS  : Boolean;
 Temp1 : Tstrings;
 i     : integer;
 ii    : integer;
Begin
  i := 0;
  ii:= 0;
  RBUS := False;
  RSYS := False;
  Assignfile(F,FileName);
  Reset(F);
 
  Temp1 := TStringlist.create;
  while not EOF(F) do
  Begin
    Readln(F,Rline);
    If Trim(Rline) <> '' then
        If Pos('%',Rline) <> 1 then
           Begin
              If RBUS then
                 Begin
                   If Pos(';',Rline) = 0 then
                      Begin
                        Bline := Copy(Rline,Pos(' ',Rline)+1, length(Rline) - Pos(' ',Rline) - 1) ;
                        readcolum(Temp1,Bline,'  ','@');
                        Barlist.Items.Item[i].SubItems.Insert(0,frmBar.BarCombo.Items.Strings[strtoint(Temp1.Strings[0]) - 1]);
                        Barlist.Items.Item[i].SubItems.Insert(1,floattostr(strtofloat(Temp1.Strings[1])));
                        Barlist.Items.Item[i].SubItems.Insert(2,floattostr(strtofloat(Temp1.Strings[2])));
                        Barlist.Items.Item[i].SubItems.Insert(3,floattostr(strtofloat(Temp1.Strings[3])));
                        Barlist.Items.Item[i].SubItems.Insert(4,floattostr(strtofloat(Temp1.Strings[4])));
                        Barlist.Items.Item[i].SubItems.Insert(5,floattostr(strtofloat(Temp1.Strings[5])));
                        Barlist.Items.Item[i].SubItems.Insert(6,floattostr(strtofloat(Temp1.Strings[6])));
                        Barlist.Items.Item[i].SubItems.Insert(7,floattostr(strtofloat(Temp1.Strings[7])));
                        i := i + 1;
                      end
                   Else
                      RBUS := False;
                 End;

              If RSYS then
                 Begin
                   If Pos(';',Rline) = 0 then
                      Begin
                        readcolum(Temp1,Rline,'  ','@');
                        Elemlist.Items.Item[ii].SubItems.Insert(0,frmdisp.DispCombo.Items.Strings[strtoint(Temp1.Strings[2])]);
                        If (strtoint(Temp1.Strings[2]) = 0) or (strtoint(Temp1.Strings[2]) = 3) then
                           Elemlist.Items.Item[ii].SubItems.Insert(1,frmdisp.LigCombo.Items.Strings[strtoint(Temp1.Strings[3]) + 9])
                        else
                           Elemlist.Items.Item[ii].SubItems.Insert(1,frmdisp.LigCombo.Items.Strings[strtoint(Temp1.Strings[3])]);

                        Elemlist.Items.Item[ii].SubItems.Insert(2,floattostr(strtofloat(Temp1.Strings[0])));
                        Elemlist.Items.Item[ii].SubItems.Insert(3,floattostr(strtofloat(Temp1.Strings[1])));
                        Elemlist.Items.Item[ii].SubItems.Insert(4,floattostr(strtofloat(Temp1.Strings[6])));
                        Elemlist.Items.Item[ii].SubItems.Insert(5,floattostr(strtofloat(Temp1.Strings[4])));
                        Elemlist.Items.Item[ii].SubItems.Insert(6,floattostr(strtofloat(Temp1.Strings[5])));
                        Elemlist.Items.Item[ii].SubItems.Insert(7,floattostr(strtofloat(Temp1.Strings[7])));
                        Elemlist.Items.Item[ii].SubItems.Insert(8,floattostr(strtofloat(Temp1.Strings[8])));
                        Elemlist.Items.Item[ii].SubItems.Insert(9,floattostr(strtofloat(Temp1.Strings[9])));

                        Elemlist.Items.Item[ii].SubItems.Insert(10,floattostr(strtofloat(Temp1.Strings[10])));
                        Elemlist.Items.Item[ii].SubItems.Insert(11,floattostr(strtofloat(Temp1.Strings[11])));
                        Elemlist.Items.Item[ii].SubItems.Insert(12,floattostr(strtofloat(Temp1.Strings[12])));
                        Elemlist.Items.Item[ii].SubItems.Insert(13,floattostr(strtofloat(Temp1.Strings[14])));
                        Elemlist.Items.Item[ii].SubItems.Insert(14,floattostr(strtofloat(Temp1.Strings[15])));
                        Elemlist.Items.Item[ii].SubItems.Insert(15,floattostr(strtofloat(Temp1.Strings[13])));

                        ii := ii + 1;
                      end
                   Else
                      RSYS := False;
                 End;


              If Pos('NAME =',UpperCase(Rline)) > 0 then
                 sName.text := Trim(Copy(Rline,Pos('=',Rline)+1, Pos(';',Rline) - Pos('=',Rline) - 1));
              If Pos('SBASE =',UpperCase(Rline)) > 0 then
                 sBase.text := Trim(Copy(Rline,Pos('=',Rline)+1, Pos(';',Rline) - Pos('=',Rline) - 1));
              If Pos('BUSNAMES =',UpperCase(Rline)) > 0 then
                 begin
                   Btext := Trim(Copy(Rline,Pos('=',Rline)+1, Pos(';',Rline) - Pos('=',Rline)));
                   readcolum(Temp1,Btext,',',';');
                   for a := 0 to Temp1.count - 1 do
                       Barlist.Items.add.Caption := temp1.Strings[a];
                   end;
              If Pos('BUSDATA =',UpperCase(Rline)) > 0 then
                 RBUS := true;

              If Pos('DISPS =',UpperCase(Rline)) > 0 then
                 begin
                   Btext := Trim(Copy(Rline,Pos('=',Rline)+1, Pos(';',Rline) - Pos('=',Rline)));
                   readcolum(Temp1,Btext,',',';');
                   for a := 0 to Temp1.count - 1 do
                       Elemlist.Items.add.Caption := temp1.Strings[a];
                 end;

              If Pos('SYSDATA =',UpperCase(Rline)) > 0 then
                 RSYS := true;

           End;
 end;
  Temp1.free;
  CloseFile(F);
End;

procedure TfrmMain.SaveFile(FileName:String);
Var

DFile : Textfile;
X     : Integer;
Begin
  Assignfile(DFile,FileName);
  Rewrite(DFile);
  Writeln(DFile,'SACC');
  Writeln(DFile,'');
  Writeln(DFile,'');
  Writeln(DFile,'name = ' + sName.Text + ';');
  Writeln(DFile,'');
  Writeln(DFile,'sbase = ' + sBase.Text + ';');
  Writeln(DFile,'');
  Writeln(DFile,'');
  write(Dfile,'busnames = ');
  for X:=0 to Barlist.Items.Count-1 do
     Begin
       if X <> Barlist.Items.Count-1 then
          write(Dfile,frmMain.Barlist.Items.Item[X].Caption  + ',')
       else
          write(Dfile,frmMain.Barlist.Items.Item[X].Caption);
     end;
  Writeln(DFile,';');
  Writeln(DFile,'');
  Writeln(DFile,'');
  Writeln(DFile,'busdata =');
  Writeln(DFile,'');
  for X:=0 to Barlist.Items.Count-1 do
     Begin
       Write(DFile,formatfloat('####  ',X+1));
       Write(DFile,formatfloat('0  ',frmBar.BarCombo.Items.IndexOf(frmMain.Barlist.Items.Item[X].SubItems.Strings[0]) + 1));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[1])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[2])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[3])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[4])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[5])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[6])));
       Writeln(DFile,formatfloat('0.000  ',StrtoFloat(Barlist.Items.Item[X].SubItems.Strings[7])));
     End;
  Writeln(DFile,'');
  Writeln(DFile,';');
  Writeln(DFile,'');

  write(Dfile,'disps = ');
  for X:=0 to Elemlist.Items.Count-1 do
     Begin
       if X <> Elemlist.Items.Count-1 then
          write(Dfile,frmMain.Elemlist.Items.Item[X].Caption  + ',')
       else
          write(Dfile,frmMain.Elemlist.Items.Item[X].Caption);
     end;

  Writeln(DFile,';');
  Writeln(DFile,'');
  Writeln(DFile,'');
  Writeln(DFile,'sysdata =');
  Writeln(DFile,'');
  for X:=0 to Elemlist.Items.Count-1 do
     Begin
       Write(DFile,formatfloat('####  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[2])));
       Write(DFile,formatfloat('####  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[3])));
       Write(DFile,formatfloat('0  ',frmdisp.DispCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[0])));
       If frmdisp.DispCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[0]) = 0 then
          Write(DFile,formatfloat('0  ',frmdisp.LigCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[1]) - 9))
       else
       If frmdisp.DispCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[0]) = 3 then
          Write(DFile,formatfloat('0  ',frmdisp.LigCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[1]) - 9))
       else
       Write(DFile,formatfloat('0  ',frmdisp.LigCombo.Items.IndexOf(Elemlist.Items.Item[X].SubItems.Strings[1])));
       
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[5])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[6])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[4])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[7])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[8])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[9])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[10])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[11])));
       Write(DFile,formatfloat('0.000#  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[12])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[15])));
       Write(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[13])));
       Writeln(DFile,formatfloat('0.000  ',StrtoFloat(Elemlist.Items.Item[X].SubItems.Strings[14])));

     End;
  Writeln(DFile,'');
  Writeln(DFile,';');
  Writeln(DFile,'');
  Writeln(DFile,'');
  Writeln(DFile,'END');
  closefile(DFile);
  NotSaved := False;
  frmMain.Caption := frmCaption + FileName;
End;


function TfrmMain.chkNum(PKey: Char):Char ;
Begin
  If not( PKey in['0'..'9',#8] )and not( PKey in[DecimalSeparator]) then
     chkNum := #0
  else
     chkNum := PKey;
end;
procedure TfrmMain.BitBtn1Click(Sender: TObject);
begin
  isEdit := False;
  if Barlist.Items.Count > 0 then
     frmDisp.show
  else
     MessageDlg(Erro2, mtError,[mbOk], 0);
end;

procedure TfrmMain.Sair1Click(Sender: TObject);
begin
   If NotSaved then
     Begin
       MsgRes := MessageDlg(Msg2,mtConfirmation, [mbYes, mbNo,mbCancel], 0);
       if MsgRes = mrYes then
          ToolButton3Click(self);
       if MsgRes = mrNo then
     end;
       if MsgRes <> mrCancel then
          Application.terminate;
end;

procedure TfrmMain.FormShow(Sender: TObject);
begin
if ParamCount > 0 then
     begin
       FileName := ParamStr(1);
       frmMain.Caption := frmCaption + FileName;
       Elemlist.Items.Clear;
       Barlist.Items.Clear;
       RelMemo.Lines.Clear;
       frmDos.DosMemo.Lines.Clear;
       fout.text := '';
       sName.Text := '';
       sbase.text := '100';
       ReadFile(ParamStr(1));
       NotSaved := False;
     end
 else
    Begin
 FileName := 'Sem Nome';
 frmMain.Caption := frmCaption + FileName;
 DecimalSeparator := '.';
 NotSaved := False;
end; 
end;

procedure TfrmMain.sBaseKeyPress(Sender: TObject; var Key: Char);
begin
   Key := ChkNum(Key);
end;

procedure TfrmMain.BitBtn2Click(Sender: TObject);
begin

If Elemlist.Items.Count > 0 then
   If Elemlist.Selected <> nil then
      begin
        if MessageDlg(Msg1,mtConfirmation, [mbYes, mbNo], 0) = mrYes then
           Begin
             ElemList.Items.Delete(Elemlist.Selected.Index);
             if not NotSaved then frmMain.Caption := frmMain.Caption + '*';
                NotSaved := True;
             Estatistica;   
           end;
      end
   else
     MessageDlg(Erro1, mtError,[mbOk], 0)
else
  MessageDlg(Erro1, mtError,[mbOk], 0);

end;

procedure TfrmMain.BarNKeyPress(Sender: TObject; var Key: Char);
begin
   Key := ChkNum(Key);
end;

procedure TfrmMain.BitBtn4Click(Sender: TObject);
begin
  isBedit := False;
  frmBar.Show;
end;

procedure TfrmMain.BitBtn6Click(Sender: TObject);
begin
  If Barlist.Items.Count > 0 then
    If Barlist.Selected <> nil then
       begin
         if MessageDlg(Msg1,mtConfirmation, [mbYes, mbNo], 0) = mrYes then
            Begin
              BarList.Items.Delete(Barlist.Selected.Index);
              NotSaved := True;
              frmMain.Caption := frmMain.Caption + '*';
              frmMain.Enbus.Caption := InttoStr(frmMain.Barlist.Items.Count);
            end;
       end
     else
       MessageDlg(Erro1, mtError,[mbOk], 0)
  else
    MessageDlg(Erro1, mtError,[mbOk], 0);


end;

procedure TfrmMain.BitBtn5Click(Sender: TObject);
begin
  if Barlist.SelCount > 0 then
     begin
       isBedit := true;
       frmbar.show;
       NotSaved := True;
       frmMain.Caption := frmMain.Caption + '*';
     end
  else
     MessageDlg(Erro1, mtError,[mbOk], 0);

end;

procedure TfrmMain.BitBtn3Click(Sender: TObject);
begin
  if Elemlist.SelCount > 0 then
     begin
       isEdit := true;
       frmdisp.show;

       if not NotSaved then frmMain.Caption := frmMain.Caption + '*';
       NotSaved := True;
       
     end
  else
     MessageDlg(Erro1, mtError,[mbOk], 0);
end;

procedure TfrmMain.ToolButton3Click(Sender: TObject);
begin
If (trim(sName.text) = '') or (trim(sbase.Text) = '') then
MessageDlg(Erro7, mtError,[mbOk], 0)
else
  If strtoint(sbase.text) = 0 then
     MessageDlg(Erro8, mtError,[mbOk], 0)
  else
  If Elemlist.Items.Count > 0 then
    If Barlist.Items.Count > 0 then
       Begin
         if FileName = 'Sem Nome' then
            begin
              if savedat.Execute then
                 begin
                   Savefile(Savedat.filename);
                   FileName := Savedat.filename;
                   frmMain.Caption := frmCaption + FileName;
                 end;
            end     
         Else
            Savefile(FileName);
       end
     else
       MessageDlg(Erro3, mtError,[mbOk], 0)
  else
    MessageDlg(Erro3, mtError,[mbOk], 0);
end;
procedure TfrmMain.ToolButton2Click(Sender: TObject);

begin

  If NotSaved then
     Begin
       MsgRes := MessageDlg(Msg2,mtConfirmation, [mbYes, mbNo,mbCancel], 0);
       if MsgRes = mrYes then
          ToolButton3Click(self);
       if MsgRes = mrNo then
     end;
       if MsgRes <> mrCancel then
          If open1.Execute then
             Begin
               FileName := Open1.FileName;
               frmMain.Caption := frmCaption + FileName;
               Elemlist.Items.Clear;
               Barlist.Items.Clear;
               RelMemo.Lines.Clear;
               frmDos.DosMemo.Lines.Clear;
               fout.text := '';
               sName.Text := '';
               sbase.text := '100';
               ReadFile(Open1.Filename);
               NotSaved := False;
               frmMain.Enbus.Caption := InttoStr(frmMain.Barlist.Items.Count);
               Estatistica;
             end;
end;

procedure TfrmMain.ToolButton1Click(Sender: TObject);
begin
  If NotSaved then
     Begin
       MsgRes := MessageDlg(Msg2,mtConfirmation, [mbYes, mbNo,mbCancel], 0);
       if MsgRes = mrYes then
          ToolButton3Click(self);
       if MsgRes = mrNo then
     end;
       if MsgRes <> mrCancel then
          begin
            Elemlist.Items.Clear;
            Barlist.Items.Clear;
            sName.Text := '';
            sbase.text := '100';
            fout.Text  := '';
            frmMain.Caption := frmCaption + 'Sem Nome';
            FileName := 'Sem Nome';
            NotSaved := False;
            frmMain.Enbus.Caption := InttoStr(0);
            Estatistica;
          end;
end;

procedure TfrmMain.Salvarcomo1Click(Sender: TObject);
begin
If Elemlist.Items.Count > 0 then
    If Barlist.Items.Count > 0 then
       Begin
         if savedat.Execute then
            begin
              If Fileexists(Savedat.filename) then
                 MsgRes := MessageDlg(Msg4,mtConfirmation, [mbYes, mbNo], 0);
                 if MsgRes = mrYes then
                    Begin
                      Savefile(Savedat.filename);
                      FileName := Savedat.filename;
                      frmMain.Caption := frmCaption + FileName;
                      NotSaved := False;
                    end;
            end;
       end
      else
       MessageDlg(Erro3, mtError,[mbOk], 0)
  else
    MessageDlg(Erro3, mtError,[mbOk], 0);
end;

procedure TfrmMain.Button1Click(Sender: TObject);
begin
//SellExecute(frmMain.handle, nil, 'sacc gq1c gq1out 0 0 1',nil, nil, SW_SHOWNORMAL);
end;

procedure TfrmMain.CriaOutClick(Sender: TObject);
begin
  If openout.Execute then
     begin
        fout.Text := Openout.FileName;
     End;
end;

procedure TfrmMain.BitBtn7Click(Sender: TObject);
Var
Exec : String;
begin
If (trim(sName.text) = '') or (trim(sbase.Text) = '') or (FileName = 'Sem Nome') then
   MessageDlg(Erro7, mtError,[mbOk], 0)
else
  If strtoint(sbase.text) = 0 then
     MessageDlg(Erro8, mtError,[mbOk], 0)
  else
     If Elemlist.Items.Count > 0 then
        If Barlist.Items.Count > 0 then
           Begin
             RelMemo.Lines.Clear;
             frmDos.DosMemo.Lines.Clear;
             if trim(pfv.Text) = ''then
                pfv.Text := '1';
             if trim(Zf.Text) = ''then
                Zf.Text := '1';
             if trim(fout.text) = ''  then
                MessageDlg(Erro11, mtError,[mbOk], 0)
             else
                begin
                  Exec := ('sacc.exe' + ' ' +ExtractFileName(FileName) + ' ' +ExtractFileName(fout.text) + ' ' + Zf.text +' ' +inttostr(tpfop.ItemIndex) + ' ' + pfv.text);
                  frmDos.Caption := 'SACC RunTime - Analizando....';
                  frmDos.Show;
                  frmDos.DosMemo.Font.Color := clYellow;
                  frmDos.DosMemo.Lines.add('SACC VERSÃO ' + version);
                  frmDos.DosMemo.Lines.add(MSG3);
                  RunDosinMemo(Exec,frmDos.DosMemo);
                  frmDos.Caption := 'SACC RunTime - Análise Terminada.';
                  try
                    RelMemo.Lines.LoadFromFile(fout.text);
                  except
                    RelMemo.Lines.Add(Erro12);
                  end;
                end;
           end;     
end;

procedure TfrmMain.pfvKeyPress(Sender: TObject; var Key: Char);
begin
Key := ChkNum(Key);
end;

procedure TfrmMain.ZfKeyPress(Sender: TObject; var Key: Char);
begin
  Key := ChkNum(Key);
end;

procedure TfrmMain.PrintbtnClick(Sender: TObject);
begin
  If print1.Execute then
     PrintMemo(RelMemo);
end;

procedure TfrmMain.TabsChange(Sender: TObject);
begin
  If tabs.ActivePageIndex = 2 then
     if RelMemo.Lines.Count > 0 then
       Begin
         Printbtn.Enabled := True;
       end
     else
       Printbtn.Enabled := False
  else
    Printbtn.Enabled := False;

end;

procedure TfrmMain.ToolButton1MouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  Status.SimpleText := 'Criar Novo Arquivo.';
end;

procedure TfrmMain.FormMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.ToolButton2MouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  Status.SimpleText := 'Abrir Arquivo Existente.';
end;

procedure TfrmMain.ToolButton3MouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  Status.SimpleText := 'Salvar Arquivo Atual.';
end;

procedure TfrmMain.PrintbtnMouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
  Status.SimpleText := 'Imprimir Relatório.';
end;

procedure TfrmMain.ToolButton5MouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
  Status.SimpleText := 'Fechar Programa.';
end;

procedure TfrmMain.BitBtn1MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Adicionar Elementos ao Sistema.';
end;

procedure TfrmMain.BitBtn3MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Editar Elemento Selecionado.';
end;

procedure TfrmMain.BitBtn2MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Remover Elemento Selecionado.';
end;

procedure TfrmMain.BitBtn5MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Editar Barramento Selecionado.';
end;

procedure TfrmMain.BitBtn6MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Remover Barramento Selecionado.';
end;

procedure TfrmMain.BitBtn4MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Adicionar Novo Barramento.';
end;

procedure TfrmMain.BitBtn7MouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
  Status.SimpleText := 'Analisar Sistema Atual.';
end;

procedure TfrmMain.SistemaMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.GroupBox3MouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.GroupBox1MouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.BarramentosMouseMove(Sender: TObject;
  Shift: TShiftState; X, Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.RelMemoMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Arquivo de Saída: ' + fout.text;
end;

procedure TfrmMain.GroupBox2MouseMove(Sender: TObject; Shift: TShiftState;
  X, Y: Integer);
begin
   Status.SimpleText := 'Arquivo Atual: ' + FileName;
end;

procedure TfrmMain.sNameMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Nome do Sistema.';
end;

procedure TfrmMain.sBaseMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Potência Base do Sistema.';
end;

procedure TfrmMain.foutMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
 Status.SimpleText := 'Nome do Arquivo de Saída.';
end;

procedure TfrmMain.ZfMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Impedância de Falta.';
end;

procedure TfrmMain.pfvMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Tensão de Pré-Falta do Sistema.';
end;

procedure TfrmMain.Sobre1Click(Sender: TObject);
begin
  frmLoad.Closebtn.Visible := True;
  frmLoad.Show;
  
end;

procedure TfrmMain.CriaOutMouseMove(Sender: TObject; Shift: TShiftState; X,
  Y: Integer);
begin
   Status.SimpleText := 'Abre arquivo de saída.';
end;

procedure TfrmMain.FormClose(Sender: TObject; var Action: TCloseAction);
begin
If NotSaved then
     Begin
       MsgRes := MessageDlg(Msg2,mtConfirmation, [mbYes, mbNo,mbCancel], 0);
       if MsgRes = mrYes then
          ToolButton3Click(self);
       if MsgRes = mrNo then
     end;
       if MsgRes <> mrCancel then
          Application.terminate;
end;

procedure TfrmMain.ElemListMouseDown(Sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: Integer);
begin
  If Button = mbRight then
     elempop.Popup(Y,X);
end;

procedure TfrmMain.FormCreate(Sender: TObject);
begin
  DecimalSeparator := '.';
end;

procedure TfrmMain.sNameKeyDown(Sender: TObject; var Key: Word;
  Shift: TShiftState);
begin
  if not NotSaved then frmMain.Caption := frmMain.Caption + '*';
       NotSaved := True;
end;

procedure TfrmMain.sBaseKeyDown(Sender: TObject; var Key: Word;
  Shift: TShiftState);
begin
  if not NotSaved then frmMain.Caption := frmMain.Caption + '*';
       NotSaved := True;
end;

procedure TfrmMain.tpfopClick(Sender: TObject);
begin
  if tpfop.ItemIndex = 0 then
     pfv.Enabled := true
  else
     pfv.Enabled := false;
end;

end.
