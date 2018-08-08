object frmBar: TfrmBar
  Left = 449
  Top = 220
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'frmBar'
  ClientHeight = 167
  ClientWidth = 393
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
  object Label17: TLabel
    Left = 336
    Top = 72
    Width = 31
    Height = 13
    Caption = 'Pg(pu)'
  end
  object Panel1: TPanel
    Left = 7
    Top = 8
    Width = 381
    Height = 121
    BevelInner = bvSpace
    BevelOuter = bvLowered
    TabOrder = 0
    object Label1: TLabel
      Left = 227
      Top = 16
      Width = 21
      Height = 13
      Caption = 'Tipo'
    end
    object Label5: TLabel
      Left = 8
      Top = 64
      Width = 31
      Height = 13
      Caption = 'Pg(pu)'
    end
    object Label16: TLabel
      Left = 8
      Top = 16
      Width = 28
      Height = 13
      Caption = 'Nome'
    end
    object Label2: TLabel
      Left = 63
      Top = 64
      Width = 32
      Height = 13
      Caption = 'Qg(pu)'
    end
    object Label3: TLabel
      Left = 115
      Top = 64
      Width = 31
      Height = 13
      Caption = 'Pc(pu)'
    end
    object Label4: TLabel
      Left = 170
      Top = 64
      Width = 32
      Height = 13
      Caption = 'Qc(pu)'
    end
    object Label6: TLabel
      Left = 219
      Top = 64
      Width = 45
      Height = 13
      Caption = 'Vmag(pu)'
    end
    object Label7: TLabel
      Left = 275
      Top = 64
      Width = 37
      Height = 13
      Caption = 'Vdeg(o)'
    end
    object Label8: TLabel
      Left = 321
      Top = 64
      Width = 49
      Height = 13
      Caption = 'Vbase(kV)'
    end
    object BarCombo: TComboBox
      Left = 227
      Top = 32
      Width = 145
      Height = 21
      ItemHeight = 13
      TabOrder = 1
      Text = 'Tipo de Barramento....'
      Items.Strings = (
        'Swing'
        'Geração'
        'Carga')
    end
    object pg: TEdit
      Left = 7
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 2
      Text = '0'
      OnKeyPress = pgKeyPress
    end
    object Barname: TEdit
      Left = 7
      Top = 32
      Width = 199
      Height = 21
      TabOrder = 0
    end
    object qg: TEdit
      Left = 61
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 3
      Text = '0'
      OnKeyPress = qgKeyPress
    end
    object pc: TEdit
      Left = 114
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 4
      Text = '0'
      OnKeyPress = pcKeyPress
    end
    object qc: TEdit
      Left = 167
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 5
      Text = '0'
      OnKeyPress = qcKeyPress
    end
    object vmag: TEdit
      Left = 220
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 6
      Text = '0'
      OnKeyPress = vmagKeyPress
    end
    object vdeg: TEdit
      Left = 273
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 7
      Text = '0'
      OnKeyPress = vdegKeyPress
    end
    object vbase: TEdit
      Left = 327
      Top = 80
      Width = 42
      Height = 21
      TabOrder = 8
      Text = '0'
      OnKeyPress = vbaseKeyPress
    end
  end
  object BitBtn1: TBitBtn
    Left = 80
    Top = 136
    Width = 75
    Height = 25
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 248
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Cancelar'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
end
