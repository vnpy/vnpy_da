bool StockApi::reqUserLogin(const dict &req, int reqid)
{
	CStockReqUserLoginField myreq = CStockReqUserLoginField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "UserType", myreq.UserType);
	getString(req, "MacAddress", myreq.MacAddress);
	getString(req, "ComputerName", myreq.ComputerName);
	getString(req, "SoftwareName", myreq.SoftwareName);
	getString(req, "SoftwareVersion", myreq.SoftwareVersion);
	getString(req, "AuthorCode", myreq.AuthorCode);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqUserLogin(&myreq, reqid);
	return i;
};

bool StockApi::reqUserLogout(const dict &req, int reqid)
{
	CStockReqUserLogoutField myreq = CStockReqUserLogoutField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqUserLogout(&myreq, reqid);
	return i;
};

bool StockApi::reqSafeVerify(const dict &req, int reqid)
{
	CStockReqSafeVerifyField myreq = CStockReqSafeVerifyField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "Type", myreq.Type);
	getString(req, "Question", myreq.Question);
	getString(req, "Answer", myreq.Answer);
	getString(req, "MobileNumber", myreq.MobileNumber);
	getString(req, "VerifyCode", myreq.VerifyCode);
	getString(req, "SaveMac", myreq.SaveMac);
	getString(req, "MacAddress", myreq.MacAddress);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqSafeVerify(&myreq, reqid);
	return i;
};

bool StockApi::reqVerifyCode(const dict &req, int reqid)
{
	CStockReqVerifyCodeField myreq = CStockReqVerifyCodeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "Type", myreq.Type);
	getString(req, "Question", myreq.Question);
	getString(req, "Answer", myreq.Answer);
	getString(req, "MobileNumber", myreq.MobileNumber);
	getString(req, "VerifyCode", myreq.VerifyCode);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqVerifyCode(&myreq, reqid);
	return i;
};

bool StockApi::reqSetVerifyQA(const dict &req, int reqid)
{
	CStockReqSetVerifyQAField myreq = CStockReqSetVerifyQAField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "Type", myreq.Type);
	getString(req, "Question", myreq.Question);
	getString(req, "Answer", myreq.Answer);
	getString(req, "MobileNumber", myreq.MobileNumber);
	getString(req, "VerifyCode", myreq.VerifyCode);
	getString(req, "SaveMac", myreq.SaveMac);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqSetVerifyQA(&myreq, reqid);
	return i;
};

bool StockApi::reqGetQuestion(const dict &req, int reqid)
{
	CStockReqGetQuestionField myreq = CStockReqGetQuestionField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqGetQuestion(&myreq, reqid);
	return i;
};

bool StockApi::reqOrderInsert(const dict &req, int reqid)
{
	CStockReqOrderInsertField myreq = CStockReqOrderInsertField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "LocalNo", myreq.LocalNo);
	getString(req, "ExchangeCode", myreq.ExchangeCode);
	getString(req, "ContractCode", myreq.ContractCode);
	getString(req, "BidAskFlag", myreq.BidAskFlag);
	getString(req, "OpenCloseFlag", myreq.OpenCloseFlag);
	getString(req, "OrderQty", myreq.OrderQty);
	getString(req, "OrderPrice", myreq.OrderPrice);
	getString(req, "OrderType", myreq.OrderType);
	getString(req, "TriggerPrice", myreq.TriggerPrice);
	getString(req, "TIF", myreq.TIF);
	getString(req, "StrategyId", myreq.StrategyId);
	getString(req, "MaxShow", myreq.MaxShow);
	getString(req, "MinQty", myreq.MinQty);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqOrderInsert(&myreq, reqid);
	return i;
};

bool StockApi::reqOrderModify(const dict &req, int reqid)
{
	CStockReqOrderModifyField myreq = CStockReqOrderModifyField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "SystemNo", myreq.SystemNo);
	getString(req, "UserId", myreq.UserId);
	getString(req, "LocalNo", myreq.LocalNo);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "OrderNo", myreq.OrderNo);
	getString(req, "ExchangeCode", myreq.ExchangeCode);
	getString(req, "ContractCode", myreq.ContractCode);
	getString(req, "BidAskFlag", myreq.BidAskFlag);
	getString(req, "OrderQty", myreq.OrderQty);
	getString(req, "OrderPrice", myreq.OrderPrice);
	getString(req, "ModifyQty", myreq.ModifyQty);
	getString(req, "ModifyPrice", myreq.ModifyPrice);
	getString(req, "OrderType", myreq.OrderType);
	getString(req, "TriggerPrice", myreq.TriggerPrice);
	getString(req, "ModifyTriggerPrice", myreq.ModifyTriggerPrice);
	getString(req, "TIF", myreq.TIF);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqOrderModify(&myreq, reqid);
	return i;
};

bool StockApi::reqOrderCancel(const dict &req, int reqid)
{
	CStockReqOrderCancelField myreq = CStockReqOrderCancelField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "LocalNo", myreq.LocalNo);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "SystemNo", myreq.SystemNo);
	getString(req, "OrderNo", myreq.OrderNo);
	getString(req, "ExchangeCode", myreq.ExchangeCode);
	getString(req, "ContractCode", myreq.ContractCode);
	getString(req, "BidAskFlag", myreq.BidAskFlag);
	getString(req, "OrderQty", myreq.OrderQty);
	getString(req, "OrderPrice", myreq.OrderPrice);
	getString(req, "OrderType", myreq.OrderType);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqOrderCancel(&myreq, reqid);
	return i;
};

bool StockApi::reqPasswordUpdate(const dict &req, int reqid)
{
	CStockReqPasswordUpdateField myreq = CStockReqPasswordUpdateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "OldPassword", myreq.OldPassword);
	getString(req, "NewPassword", myreq.NewPassword);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqPasswordUpdate(&myreq, reqid);
	return i;
};

bool StockApi::reqQryTick(const dict &req, int reqid)
{
	CStockQryTickField myreq = CStockQryTickField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryTick(&myreq, reqid);
	return i;
};

bool StockApi::reqQryOrder(const dict &req, int reqid)
{
	CStockQryOrderField myreq = CStockQryOrderField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "IsSimulation", myreq.IsSimulation);
	getString(req, "OrderNo", myreq.OrderNo);
	getString(req, "OrderDateTime", myreq.OrderDateTime);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryOrder(&myreq, reqid);
	return i;
};

bool StockApi::reqQryTrade(const dict &req, int reqid)
{
	CStockQryTradeField myreq = CStockQryTradeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	getString(req, "lastFilledNo", myreq.lastFilledNo);
	bool i = this->api->ReqQryTrade(&myreq, reqid);
	return i;
};

bool StockApi::reqQryCapital(const dict &req, int reqid)
{
	CStockQryCapitalField myreq = CStockQryCapitalField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCapital(&myreq, reqid);
	return i;
};

bool StockApi::reqQryVersion(const dict &req, int reqid)
{
	CStockQryVersionField myreq = CStockQryVersionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryVersion(&myreq, reqid);
	return i;
};

bool StockApi::reqQryPosition(const dict &req, int reqid)
{
	CStockQryPositionField myreq = CStockQryPositionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryPosition(&myreq, reqid);
	return i;
};

bool StockApi::reqQryCurrency(const dict &req, int reqid)
{
	CStockQryCurrencyField myreq = CStockQryCurrencyField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCurrency(&myreq, reqid);
	return i;
};

bool StockApi::reqQryExchange(const dict &req, int reqid)
{
	CStockQryExchangeField myreq = CStockQryExchangeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ProductGroupID", myreq.ProductGroupID);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryExchange(&myreq, reqid);
	return i;
};

bool StockApi::reqQryInstrument(const dict &req, int reqid)
{
	CStockQryInstrumentField myreq = CStockQryInstrumentField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "PageIndex", &myreq.PageIndex);
	getString(req, "ExchangeNo", myreq.ExchangeNo);
	getString(req, "ModifyDay", myreq.ModifyDay);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryInstrument(&myreq, reqid);
	return i;
};

