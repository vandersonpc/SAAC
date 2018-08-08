object frmConv: TfrmConv
  Left = 371
  Top = 249
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = 'Conversor HP x MVA'
  ClientHeight = 102
  ClientWidth = 190
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 5
    Top = 8
    Width = 100
    Height = 89
    BevelInner = bvRaised
    BevelOuter = bvLowered
    TabOrder = 0
    object StaticText38: TStaticText
      Left = 8
      Top = 8
      Width = 82
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'Potência (HP)'
      Color = 8454143
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -9
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      TabOrder = 0
    end
    object PHP: TEdit
      Left = 8
      Top = 24
      Width = 82
      Height = 17
      AutoSize = False
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clYellow
      Font.Height = -9
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      Text = '0'
    end
    object FP: TEdit
      Left = 8
      Top = 64
      Width = 82
      Height = 17
      AutoSize = False
      Color = clBlack
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clYellow
      Font.Height = -9
      Font.Name = 'Arial'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      Text = '0'
    end
    object StaticText1: TStaticText
      Left = 8
      Top = 48
      Width = 82
      Height = 17
      Alignment = taCenter
      AutoSize = False
      BorderStyle = sbsSunken
      Caption = 'f.p. '
      Color = 8454143
      Font.Charset = ANSI_CHARSET
      Font.Color = clWindowText
      Font.Height = -9
      Font.Name = 'Arial'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 3
    end
  end
  object BitBtn1: TBitBtn
    Left = 120
    Top = 16
    Width = 49
    Height = 25
    Caption = 'Calcular'
    ModalResult = 1
    TabOrder = 1
  end
  object BitBtn2: TBitBtn
    Left = 120
    Top = 56
    Width = 49
    Height = 25
    Caption = 'Fechar'
    TabOrder = 2
    OnClick = BitBtn2Click
  end
end
