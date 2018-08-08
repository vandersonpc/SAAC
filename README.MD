                   ***************************************
                      SSSS      AAAA      CCCC      CCCC
                     SSSSSS    AAAAAA    CCCCCC    CCCCCC                                         
                    SS    SS  AA    AA  CC    CC  CC    CC
                    SS        AA    AA  CC    CC  CC    CC
                     SSSSS    AA AA AA  CC        CC 
                      SSSSS   AA AA AA  CC        CC
                          SS  AA    AA  CC    CC  CC    CC
                    SS    SS  AA    AA  CC    CC  CC    CC
                     SSSSSS   AA    AA   CCCCCC    CCCCCC
                      SSSS    AA    AA    CCCC      CCCC 
                   **************************************** 
                    SOFTWARE DE ANALISE DE CURTO CIRCUITO
                          EM SISTEMAS DE POTENCIA 

SACC is a software used to calculate and analyse power systems short circuits. It's **BackEnd** is developed in [Matlab](https://www.mathworks.com/products/matlab.html) and the **FrontEnd** develop in [Delhi](https://www.embarcadero.com/products/delphi) **Object-Pascal**.

### 3 Bus system example

  ---   1         T.L.        2   ---
  
 | G |--|---------------------|--| G |
 
  ---   |---------+  +--------|   ---
  
                  |  |    
                  
                 ------ 3
                 
                   |                   
Where, 

**G**    = Generator
**TL**   = Transmission Line
**1..3** = Bus Bars
