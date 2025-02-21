{******************************************************************************}
{ Projeto: FortesReport Community Edition                                      }
{ � um poderoso gerador de relat�rios dispon�vel como um pacote de componentes }
{ para Delphi. Em FortesReport, os relat�rios s�o constitu�dos por bandas que  }
{ t�m fun��es espec�ficas no fluxo de impress�o. Voc� definir agrupamentos     }
{ subn�veis e totais simplesmente pela rela��o hier�rquica entre as bandas.    }
{ Al�m disso possui uma rica paleta de Componentes                             }
{                                                                              }
{ Direitos Autorais Reservados(c) Copyright � 1999-2015 Fortes Inform�tica     }
{                                                                              }
{ Colaboradores nesse arquivo: M�rcio Martins                                  }
{                              Ronaldo Moreira                                 }
{                              R�gys Borges da Silveira                        }
{                              Juliomar Marchetti                              }
{                                                                              }
{  Voc� pode obter a �ltima vers�o desse arquivo na pagina do  Projeto         }
{  localizado em                                                               }
{ https://github.com/fortesinformatica/fortesreport-ce                         }
{                                                                              }
{  Esta biblioteca � software livre; voc� pode redistribu�-la e/ou modific�-la }
{ sob os termos da Licen�a P�blica Geral Menor do GNU conforme publicada pela  }
{ Free Software Foundation; tanto a vers�o 2.1 da Licen�a, ou (a seu crit�rio) }
{ qualquer vers�o posterior.                                                   }
{                                                                              }
{  Esta biblioteca � distribu�da na expectativa de que seja �til, por�m, SEM   }
{ NENHUMA GARANTIA; nem mesmo a garantia impl�cita de COMERCIABILIDADE OU      }
{ ADEQUA��O A UMA FINALIDADE ESPEC�FICA. Consulte a Licen�a P�blica Geral Menor}
{ do GNU para mais detalhes. (Arquivo LICEN�A.TXT ou LICENSE.TXT)              }
{                                                                              }
{  Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral Menor do GNU junto}
{ com esta biblioteca; se n�o, escreva para a Free Software Foundation, Inc.,  }
{ no endere�o 59 Temple Street, Suite 330, Boston, MA 02111-1307 USA.          }
{ Voc� tamb�m pode obter uma copia da licen�a em:                              }
{ http://www.opensource.org/licenses/gpl-license.php                           }
{                                                                              }
{******************************************************************************}

{******************************************************************************
|* Historico
|*
|* xx/xx/xxxx:  Autor...
|* - Descri��o...
******************************************************************************}

//Atualmente homologado somente para VCL, por�m h� uma trabalho sendo feito para
//que o mesmo c�digo seja usado no Delphi ou no Lazarus
{.$DEFINE VCL}
{.$DEFINE FMK}
{.$DEFINE KYLIX}
{.$DEFINE FREEPASCAL}

{$IFDEF FPC}
  {$DEFINE VCL}
  {$DEFINE UNICODE} // Lazarus 0.9.26 usa UnicodeString como default para String
  {$DEFINE DELPHI7}
  {$DEFINE COMPILER7}
  {$DEFINE HAS_FORMATSETTINGS}
  {$H+}
{$ELSE}
  {$DEFINE BORLAND}
{$ENDIF}

// biblioteca do Jedi assim temos atualizado sempre
{$I RLReport_jedi.inc}

//Para compila��o em IDE C++Builder (sem Delphi personality)
{$IFDEF BCB}
  {$I RLReport_BCB.inc}
{$ENDIF}

{$IFDEF DELPHI15_UP}
  {$DEFINE HAS_FORMATSETTINGS}
{$ENDIF}





