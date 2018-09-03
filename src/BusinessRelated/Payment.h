/***********************************************************************
* Module:  Payment.h
* Author:  Administrator
* Modified: 2018��6��8�� 11:08:02
* Purpose: Declaration of the class Payment
* Comment: Payment���������֧�����󡢻�ȡ֧����ϸ��Ϣ
***********************************************************************/
#if !defined(__Account_Payment_h)
#define __Account_Payment_h
#include "Client.h"
#include <string>
#include "MbedJSONValue.h"
#include "Account.h"
using namespace std;
class Payment:public Account
{
public:
	string submitPayment(MbedJSONValue& in,string sUrl,string sAddr,string otherInfo);//֧������
	bool SetJsonBody(MbedJSONValue& out, string src_accIn, string dst_accIn, string direction, int start_ledger, int end_ledger, int per_page, int page);
	bool SetJsonBody(MbedJSONValue& out,string secretIn,string src_accIn,string dst_accIn,string amt_In,string memtypeIn,string memdataIn);//��json��
	string getPaymentInfo(string sUrl, string sAddr, string otherInfo);//���֧����Ϣ
	string getPaymentList((MbedJSONValue& in,string sUrl,string sAddr);//���֧����ʷ
	string getTransactionInfo(string sUrl, string sAddr, string otherInfo);//��ý�������
	string getTransactionList((MbedJSONValue& in,string sUrl,string sAddr);//��ý�����ʷ		
	
protected:
private:
	Client client;
};

#endif