//系统
#ifdef WIN32
#include "stdafx.h"
#endif

#include <string>

#include "vnda.h"
#include "pybind11/pybind11.h"
#include "da/DAFutureApi.h"

using namespace pybind11;
using namespace std;
using namespace Directaccess;

///-------------------------------------------------------------------------------------
///C++ SPI的回调函数方法实现
///-------------------------------------------------------------------------------------

//API的继承实现
class FutureApi : public IFutureEvent
{
private:
	CFutureApi* api;            //API对象

public:
	FutureApi()
	{
	};

	~FutureApi()
	{
	};

	//-------------------------------------------------------------------------------------
	//API回调函数
	//-------------------------------------------------------------------------------------

	void OnFrontConnected();
	void OnFrontDisconnected(int iReason);
	void OnHeartBeatWarning(int iTimeLapse);
	void OnRspNeedVerify(bool bFirstLogin, bool bHasSetQA);
	void OnRspUserLogin(CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspUserLogout(CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspVerifyCode(CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspSafeVerify(CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspSetVerifyQA(CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspAccount(CFutureRspAccountField* pRspAccount, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQuestion(CFutureRspQuestionField* pRspVersion, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderInsert(CFutureRspOrderInsertField* pRspOrderInsert, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderModify(CFutureRspOrderModifyField* pRspOrderModify, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspOrderCancel(CFutureRspOrderCancelField* pRspOrderCancel, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspPasswordUpdate(CFutureRspPasswordUpdateField* pRspPasswordUpdate, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnTrade(CFutureRtnTradeField* pRtnTrade, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnOrder(CFutureRtnOrderField* pRtnOrder, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnCapital(CFutureRtnCapitalField* pRtnCapital, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRtnPosition(CFutureRtnPositionField* pRtnPosition, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryOrder(CFutureRspOrderField* pRspOrder, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryTrade(CFutureRspTradeField* pRspTrade, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCapital(CFutureRspCapitalField* pRspCapital, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryVersion(CFutureRspVersionField* pRspVersion, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryPosition(CFutureRspPositionField* pRspPosition, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCurrency(CFutureRspCurrencyField* pRspCurrency, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryExchange(CFutureRspExchangeField* pRspExchange, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryStrategy(CFutureRspStrategyField* pRspStrategy, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCommodity(CFutureRspCommodityField* pRspCommodity, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryInstrument(CFutureRspInstrumentField* pRspInstrument, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryExchangeTime(CFutureRspExchangeTimeField* pRspExchangeTime, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryCommodityTime(CFutureRspCommodityTimeField* pRspCommodityTime, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryTotalPosition(CFutureRspTotalPositionField* pRspTotalPosition, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	void OnRspQryStrategyDetail(CFutureRspStrategyDetailField* pRspStrategyDetail, CFutureRspInfoField* pRspInfo, int iRequestID, bool bIsLast);
	
	//-------------------------------------------------------------------------------------
	//Python回调函数
	//-------------------------------------------------------------------------------------

	virtual void onFrontConnected() {};

	virtual void onFrontDisconnected(int reqid) {};

	virtual void onHeartBeatWarning(int reqid) {};

	virtual void onRspNeedVerify(bool firstLogin, bool hasSetQA) {};

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

	virtual void onRspQryOrder(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryTrade(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCapital(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryVersion(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryPosition(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCurrency(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryExchange(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryStrategy(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCommodity(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryInstrument(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryExchangeTime(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryCommodityTime(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryTotalPosition(const dict& data, const dict& error, int reqid, bool last) {};

	virtual void onRspQryStrategyDetail(const dict& data, const dict& error, int reqid, bool last) {};

	//-------------------------------------------------------------------------------------
	//req:主动函数的请求字典
	//-------------------------------------------------------------------------------------

	string getVersion();

	void createFutureApi(bool recordLog, string logFileName, string logFileDir);

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

	bool reqQryOrder(const dict& req, int reqid);

	bool reqQryTrade(const dict& req, int reqid);

	bool reqQryCapital(const dict& req, int reqid);

	bool reqQryVersion(const dict& req, int reqid);

	bool reqQryCurrency(const dict& req, int reqid);

	bool reqQryExchange(const dict& req, int reqid);

	bool reqQryPosition(const dict& req, int reqid);

	bool reqQryStrategy(const dict& req, int reqid);

	bool reqQryCommodity(const dict& req, int reqid);

	bool reqQryInstrument(const dict& req, int reqid);

	bool reqQryExchangeTime(const dict& req, int reqid);

	bool reqQryCommodityTime(const dict& req, int reqid);

	bool reqQryTotalPosition(const dict& req, int reqid);

	bool reqQryStrategyDetail(const dict& req, int reqid);

};
