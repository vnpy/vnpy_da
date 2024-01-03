bool FutureApi::reqUserLogin(const dict &req, int reqid)
{
	CFutureReqUserLoginField myreq = CFutureReqUserLoginField();
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

bool FutureApi::reqUserLogout(const dict &req, int reqid)
{
	CFutureReqUserLogoutField myreq = CFutureReqUserLogoutField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqUserLogout(&myreq, reqid);
	return i;
};

bool FutureApi::reqSafeVerify(const dict &req, int reqid)
{
	CFutureReqSafeVerifyField myreq = CFutureReqSafeVerifyField();
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

bool FutureApi::reqVerifyCode(const dict &req, int reqid)
{
	CFutureReqVerifyCodeField myreq = CFutureReqVerifyCodeField();
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

bool FutureApi::reqSetVerifyQA(const dict &req, int reqid)
{
	CFutureReqSetVerifyQAField myreq = CFutureReqSetVerifyQAField();
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

bool FutureApi::reqGetQuestion(const dict &req, int reqid)
{
	CFutureReqGetQuestionField myreq = CFutureReqGetQuestionField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqGetQuestion(&myreq, reqid);
	return i;
};

bool FutureApi::reqOrderInsert(const dict &req, int reqid)
{
	CFutureReqOrderInsertField myreq = CFutureReqOrderInsertField();
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
	getString(req, "Tag50", myreq.Tag50);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	getInt(req, "IsProgram", &myreq.IsProgram);
	getString(req, "OrgOrderLocationID", myreq.OrgOrderLocationID);
	bool i = this->api->ReqOrderInsert(&myreq, reqid);
	return i;
};

bool FutureApi::reqOrderModify(const dict &req, int reqid)
{
	CFutureReqOrderModifyField myreq = CFutureReqOrderModifyField();
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
	getString(req, "Tag50", myreq.Tag50);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	getString(req, "OrgOrderLocationID", myreq.OrgOrderLocationID);
	bool i = this->api->ReqOrderModify(&myreq, reqid);
	return i;
};

bool FutureApi::reqOrderCancel(const dict &req, int reqid)
{
	CFutureReqOrderCancelField myreq = CFutureReqOrderCancelField();
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
	getString(req, "Tag50", myreq.Tag50);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	getString(req, "OrgOrderLocationID", myreq.OrgOrderLocationID);
	bool i = this->api->ReqOrderCancel(&myreq, reqid);
	return i;
};

bool FutureApi::reqPasswordUpdate(const dict &req, int reqid)
{
	CFutureReqPasswordUpdateField myreq = CFutureReqPasswordUpdateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "OldPassword", myreq.OldPassword);
	getString(req, "NewPassword", myreq.NewPassword);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqPasswordUpdate(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryOrder(const dict &req, int reqid)
{
	CFutureQryOrderField myreq = CFutureQryOrderField();
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

bool FutureApi::reqQryTrade(const dict &req, int reqid)
{
	CFutureQryTradeField myreq = CFutureQryTradeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	getString(req, "lastFilledNo", myreq.lastFilledNo);
	getString(req, "maxItemNumOnePage", myreq.maxItemNumOnePage);
	bool i = this->api->ReqQryTrade(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryCapital(const dict &req, int reqid)
{
	CFutureQryCapitalField myreq = CFutureQryCapitalField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCapital(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryVersion(const dict &req, int reqid)
{
	CFutureQryVersionField myreq = CFutureQryVersionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UserId", myreq.UserId);
	getString(req, "UserPwd", myreq.UserPwd);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryVersion(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryCurrency(const dict &req, int reqid)
{
	CFutureQryCurrencyField myreq = CFutureQryCurrencyField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCurrency(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryExchange(const dict &req, int reqid)
{
	CFutureQryExchangeField myreq = CFutureQryExchangeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ProductGroupID", myreq.ProductGroupID);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryExchange(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryPosition(const dict &req, int reqid)
{
	CFutureQryPositionField myreq = CFutureQryPositionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryPosition(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryStrategy(const dict &req, int reqid)
{
	CFutureQryStrategyField myreq = CFutureQryStrategyField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeNo", myreq.ExchangeNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryStrategy(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryCommodity(const dict &req, int reqid)
{
	CFutureQryCommodityField myreq = CFutureQryCommodityField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "UpdateDate", myreq.UpdateDate);
	getString(req, "ExchangeNo", myreq.ExchangeNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCommodity(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryInstrument(const dict &req, int reqid)
{
	CFutureQryInstrumentField myreq = CFutureQryInstrumentField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "PageIndex", &myreq.PageIndex);
	getString(req, "ExchangeNo", myreq.ExchangeNo);
	getString(req, "CommodityNo", myreq.CommodityNo);
	getString(req, "CommodityType", myreq.CommodityType);
	getString(req, "ContractNo", myreq.ContractNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryInstrument(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryExchangeTime(const dict &req, int reqid)
{
	CFutureQryExchangeTimeField myreq = CFutureQryExchangeTimeField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "Unused", &myreq.Unused);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryExchangeTime(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryCommodityTime(const dict &req, int reqid)
{
	CFutureQryCommodityTimeField myreq = CFutureQryCommodityTimeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeNo", myreq.ExchangeNo);
	getString(req, "CommodityNo", myreq.CommodityNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryCommodityTime(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryTotalPosition(const dict &req, int reqid)
{
	CFutureQryTotalPositionField myreq = CFutureQryTotalPositionField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "AccountNo", myreq.AccountNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryTotalPosition(&myreq, reqid);
	return i;
};

bool FutureApi::reqQryStrategyDetail(const dict &req, int reqid)
{
	CFutureQryStrategyDetailField myreq = CFutureQryStrategyDetailField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "StartegyCommodityNo", myreq.StartegyCommodityNo);
	getString(req, "ErrorDescription", myreq.ErrorDescription);
	bool i = this->api->ReqQryStrategyDetail(&myreq, reqid);
	return i;
};

