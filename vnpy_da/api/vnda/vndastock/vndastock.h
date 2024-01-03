//系统
#ifdef WIN32
#include "stdafx.h"
#endif

#include <string>

#include "vnda.h"
#include "pybind11/pybind11.h"
#include "da/DAStockApi.h"

using namespace pybind11;
using namespace std;
using namespace Directaccess;

///-------------------------------------------------------------------------------------
///C++ SPI的回调函数方法实现
///-------------------------------------------------------------------------------------

//API的继承实现
class StockApi : public IStockEvent
{
private:
	CStockApi* api;            //API对象

public:
	StockApi()
	{
	};

	~StockApi()
	{
	};

	//-------------------------------------------------------------------------------------
	//API回调函数
	//-------------------------------------------------------------------------------------

	void OnFrontConnected();
	void OnFrontDisconnected(int iReason);
	void OnHeartBeatWarning(int iTimeLapse);

	void OnRspNeedVerify(bool bFirstLogin, bool bHasSetQA);
	void OnRspUserLogin(CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspUserLogout(CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspVerifyCode(CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspSafeVerify(CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspSetVerifyQA(CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspAccount(CStockRspAccountField* pRspAccount, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQuestion(CStockRspQuestionField* pRspQuestion, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderInsert(CStockRspOrderInsertField* pRspOrderInsert, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderModify(CStockRspOrderModifyField* pRspOrderModify, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderCancel(CStockRspOrderCancelField* pRspOrderCancel, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspPasswordUpdate(CStockRspPasswordUpdateField* pRspPasswordUpdate, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnTrade(CStockRtnTradeField* pRtnTrade, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnOrder(CStockRtnOrderField* pRtnOrder, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnCapital(CStockRtnCapitalField* pRtnCapital, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnPosition(CStockRtnPositionField* pRtnPosition, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryTick(CStockRspTickField* pRspTick, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryOrder(CStockRspOrderField* pRspOrder, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryTrade(CStockRspTradeField* pRspTrade, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCapital(CStockRspCapitalField* pRspCapital, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryVersion(CStockRspVersionField* pRspVersion, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryPosition(CStockRspPositionField* pRspPosition, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCurrency(CStockRspCurrencyField* pRspCurrency, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryExchange(CStockRspExchangeField* pRspExchange, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryInstrument(CStockRspInstrumentField* pRspInstrument, CStockRspInfoField* pRspInfo, int iRequestID, bool bIsLast);

	//-------------------------------------------------------------------------------------
	//Python回调函数
	//-------------------------------------------------------------------------------------

	virtual void onFrontConnected() {};

	virtual void onFrontDisconnected(int reqid) {};

	virtual void onHeartBeatWarning(int reqid) {};

	virtual void onRspNeedVerify(bool bFirstLogin, bool bHasSetQA) {};

	virtual void onRspUserLogin(const dict& error, int reqid, bool last) {};

	virtual void onRspUserLogout(const dict& error, int reqid, bool last) {};

	virtual void onRspVerifyCode(const dict& error, int reqid, bool last) {};

	virtual void onRspSafeVerify(const dict& error, int reqid, bool last) {};

	virtual void onRspSetVerifyQA(const dict& error, int reqid, bool last) {};

	virtual void onRspAccount(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQuestion(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspOrderInsert(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspOrderModify(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspOrderCancel(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspPasswordUpdate(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRtnTrade(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRtnOrder(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRtnCapital(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRtnPosition(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryTick(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryOrder(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryTrade(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCapital(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryVersion(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryPosition(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCurrency(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryExchange(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryInstrument(const dict& data, const dict& error, int reqid, bool last) {};

	//-------------------------------------------------------------------------------------
	//req:主动函数的请求字典
	//-------------------------------------------------------------------------------------

	string getVersion();

	void createStockApi(bool recordLog, string logFileName, string logFileDir);

	void init();

	void release();

	int exit();

	void setHeartBeatTimeout(int timeout);

	void registerNameServer(string address);

	bool reqUserLogin(const dict& req, int reqid);

	bool reqUserLogout(const dict& req, int reqid);

	bool reqSafeVerify(const dict& req, int reqid);

	bool reqVerifyCode(const dict& req, int reqid);

	bool reqSetVerifyQA(const dict& req, int reqid);

	bool reqGetQuestion(const dict& req, int reqid);

	bool reqOrderInsert(const dict& req, int reqid);

	bool reqOrderModify(const dict& req, int reqid);

	bool reqOrderCancel(const dict& req, int reqid);

	bool reqPasswordUpdate(const dict& req, int reqid);

	bool reqQryTick(const dict& req, int reqid);

	bool reqQryOrder(const dict& req, int reqid);

	bool reqQryTrade(const dict& req, int reqid);

	bool reqQryCapital(const dict& req, int reqid);

	bool reqQryVersion(const dict& req, int reqid);

	bool reqQryPosition(const dict& req, int reqid);

	bool reqQryCurrency(const dict& req, int reqid);

	bool reqQryExchange(const dict& req, int reqid);

	bool reqQryInstrument(const dict& req, int reqid);

};
