object frmDisp: TfrmDisp
  Left = 341
  Top = 327
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Adicionar Dispositivo'
  ClientHeight = 298
  ClientWidth = 395
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 7
    Top = 8
    Width = 381
    Height = 249
    BevelInner = bvSpace
    BevelOuter = bvLowered
    TabOrder = 0
    object Label1: TLabel
      Left = 227
      Top = 16
      Width = 49
      Height = 13
      Caption = 'Dispostivo'
    end
    object Label2: TLabel
      Left = 16
      Top = 64
      Width = 77
      Height = 13
      Caption = 'Tipo de Ligação'
    end
    object Label3: TLabel
      Left = 227
      Top = 64
      Width = 55
      Height = 13
      Caption = 'Barra Inicial'
    end
    object Label4: TLabel
      Left = 299
      Top = 64
      Width = 50
      Height = 13
      Caption = 'Barra Final'
    end
    object Label5: TLabel
      Left = 101
      Top = 112
      Width = 52
      Height = 13
      Caption = 'V1nom(kV)'
    end
    object cap1: TLabel
      Left = 166
      Top = 112
      Width = 52
      Height = 13
      Caption = 'V2nom(kV)'
    end
    object Label7: TLabel
      Left = 228
      Top = 112
      Width = 56
      Height = 13
      Caption = 'Snom(MVA)'
    end
    object Label8: TLabel
      Left = 72
      Top = 160
      Width = 43
      Height = 13
      Caption = 'Rpos(pu)'
    end
    object Label9: TLabel
      Left = 73
      Top = 200
      Width = 42
      Height = 13
      Caption = 'Xpos(pu)'
    end
    object Label10: TLabel
      Left = 137
      Top = 160
      Width = 44
      Height = 13
      Caption = 'Rneg(pu)'
    end
    object Label11: TLabel
      Left = 138
      Top = 200
      Width = 43
      Height = 13
      Caption = 'Xneg(pu)'
    end
    object Label12: TLabel
      Left = 199
      Top = 160
      Width = 46
      Height = 13
      Caption = 'Rzero(pu)'
    end
    object Label13: TLabel
      Left = 201
      Top = 200
      Width = 45
      Height = 13
      Caption = 'Xzero(pu)'
    end
    object Label14: TLabel
      Left = 268
      Top = 160
      Width = 36
      Height = 13
      Caption = 'Ysh(pu)'
    end
    object Label15: TLabel
      Left = 263
      Top = 200
      Width = 47
      Height = 13
      Caption = 'Trafo Tap'
    end
    object Label16: TLabel
      Left = 16
      Top = 16
      Width = 28
      Height = 13
      Caption = 'Nome'
    end
    object cap: TLabel
      Left = 327
      Top = 176
      Width = 31
      Height = 13
      Caption = 'Zn(pu)'
    end
    object DispCombo: TComboBox
      Left = 227
      Top = 32
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 0
      Text = 'Tipo de Dispositivo....'
      OnChange = DispComboChange
      Items.Strings = (
        'Gerador'
        'Transformador'
        'Linha de Transmissão'
        'Carga')
    end
    object Ligcombo: TComboBox
      Left = 16
      Top = 80
      Width = 197
      Height = 21
      ItemHeight = 13
      TabOrder = 1
      Text = 'Selecione ao Tipo de Ligação...'
      OnChange = LigcomboChange
      Items.Strings = (
        'Estrela Aterrado/Estrela Aterrado '
        'Estrela Aterrado/Estrela'
        'Estrela Aterrado/Delta '
        'Estrela/Estrela Aterrado'
        'Estrela/Estrela'
        'Estrela/Delta'
        'Delta/Estrela Aterrado'
        'Delta/Estrela'
        'Delta/Delta'
        'Estrela'
        'Estrela Aterrado'
        'N.A.')
    end
    object Bini: TEdit
      Left = 227
      Top = 80
      Width = 45
      Height = 21
      ReadOnly = True
      TabOrder = 2
      Text = '1'
    end
    object UpDown1: TUpDown
      Left = 272
      Top = 80
      Width = 12
      Height = 21
      Associate = Bini
      Min = 1
      Position = 1
      TabOrder = 3
      Wrap = False
      OnClick = UpDown1Click
    end
    object Bfin: TEdit
      Left = 299
      Top = 80
      Width = 45
      Height = 21
      ReadOnly = True
      TabOrder = 4
      Text = '1'
    end
    object UpDown2: TUpDown
      Left = 344
      Top = 80
      Width = 12
      Height = 21
      Associate = Bfin
      Min = 1
      Position = 1
      TabOrder = 5
      Wrap = False
    end
    object v1nom: TEdit
      Left = 100
      Top = 128
      Width = 53
      Height = 21
      TabOrder = 6
      Text = '0'
      OnKeyPress = v1nomKeyPress
    end
    object v2nom: TEdit
      Left = 165
      Top = 128
      Width = 53
      Height = 21
      TabOrder = 7
      Text = '0'
      OnKeyPress = v2nomKeyPress
    end
    object snom: TEdit
      Left = 230
      Top = 128
      Width = 75
      Height = 21
      PopupMenu = PopupMenu1
      TabOrder = 8
      Text = '0'
      OnKeyPress = snomKeyPress
    end
    object rpos: TEdit
      Left = 71
      Top = 176
      Width = 46
      Height = 21
      TabOrder = 9
      Text = '0'
      OnKeyPress = rposKeyPress
    end
    object xpos: TEdit
      Left = 71
      Top = 216
      Width = 45
      Height = 21
      TabOrder = 10
      Text = '0'
      OnKeyPress = xposKeyPress
    end
    object rneg: TEdit
      Left = 136
      Top = 176
      Width = 45
      Height = 21
      TabOrder = 11
      Text = '0'
      OnKeyPress = rnegKeyPress
    end
    object xneg: TEdit
      Left = 136
      Top = 216
      Width = 45
      Height = 21
      TabOrder = 12
      Text = '0'
      OnKeyPress = xnegKeyPress
    end
    object rzero: TEdit
      Left = 200
      Top = 176
      Width = 45
      Height = 21
      TabOrder = 13
      Text = '0'
      OnKeyPress = rzeroKeyPress
    end
    object xzero: TEdit
      Left = 200
      Top = 216
      Width = 45
      Height = 21
      TabOrder = 14
      Text = '0'
      OnKeyPress = xzeroKeyPress
    end
    object Ysh: TEdit
      Left = 264
      Top = 176
      Width = 45
      Height = 21
      TabOrder = 15
      Text = '0'
      OnKeyPress = YshKeyPress
    end
    object tap: TEdit
      Left = 264
      Top = 216
      Width = 45
      Height = 21
      TabOrder = 16
      Text = '1'
      OnKeyPress = tapKeyPress
    end
    object dispname: TEdit
      Left = 15
      Top = 32
      Width = 199
      Height = 21
      TabOrder = 17
    end
    object Zn: TEdit
      Left = 320
      Top = 192
      Width = 45
      Height = 21
      TabOrder = 18
      Text = '0'
      OnKeyPress = tapKeyPress
    end
  end
  object BitBtn1: TBitBtn
    Left = 80
    Top = 264
    Width = 75
    Height = 25
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 248
    Top = 264
    Width = 75
    Height = 25
    Caption = 'Cancelar'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object PopupMenu1: TPopupMenu
    Left = 32
    Top = 264
    object ConverterHPparaMVA1: TMenuItem
      Caption = '&Converter HP para MVA'
      OnClick = ConverterHPparaMVA1Click
    end
  end
end
