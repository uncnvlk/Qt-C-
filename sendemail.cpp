//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Method=sslvTLSv1;//Метод отправики TLS версии 1
IdSMTP1->IOHandler=IdSSLIOHandlerSocketOpenSSL1;//Присоединяем SSL
IdSMTP1->AuthType=satDefault; //Использоватб авторизацию
IdSMTP1->UseTLS=utUseImplicitTLS;//Использовать TLS
IdSMTP1->Port=465;//Порт
IdSMTP1->Username="cpptutor1";//  Логин почтовика отправителя
IdSMTP1->Password="12345678pass";// Пароль от почтовика отправителя
IdSMTP1->Host="smtp.yandex.ru";//Хост отправителя
IdSMTP1->ReadTimeout=15000;//Таймаут
//Само письмо
IdMessage1->CharSet="UTF-8"; //Кодировка для письма. Чтобы не пришли вместо букв символы.
IdMessage1->Subject="Первое письмо на С++";//Тема письма
IdMessage1->Body->Text=L"Тестовое письмо";// Текст поля письма
IdMessage1->From->Text="cpptutor1@yandex.ru";// Кто отправил
 IdMessage1->Recipients->EMailAddresses="cpptutor2@yandex.ru";//Кому письмо

 //Соединяемся
  IdSMTP1->Connect();
  //Отправляем письмо
  IdSMTP1->Send(IdMessage1);
  //Закрываем соединение
  IdSMTP1->Disconnect();
}
//---------------------------------------------------------------------------
