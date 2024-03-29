void StockApi::OnFrontConnected() 
{
	gil_scoped_acquire acquire;
	this->onFrontConnected();
};

void StockApi::OnFrontDisconnected(int iReason) 
{
	gil_scoped_acquire acquire;
	this->onFrontDisconnected(iReason);
};

void StockApi::OnHeartBeatWarning(int iTimeLapse) 
{
	gil_scoped_acquire acquire;
	this->onHeartBeatWarning(iTimeLapse);
};

void StockApi::OnRspNeedVerify(bool bFirstLogin, bool bHasSetQA) 
{
	gil_scoped_acquire acquire;
	this->onRspNeedVerify(bFirstLogin, bHasSetQA);
};

void StockApi::OnRspUserLogin(CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspUserLogin(error, iRequestID, bIsLast);
};

void StockApi::OnRspUserLogout(CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspUserLogout(error, iRequestID, bIsLast);
};

void StockApi::OnRspVerifyCode(CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspVerifyCode(error, iRequestID, bIsLast);
};

void StockApi::OnRspSafeVerify(CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspSafeVerify(error, iRequestID, bIsLast);
};

void StockApi::OnRspSetVerifyQA(CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspSetVerifyQA(error, iRequestID, bIsLast);
};

void StockApi::OnRspAccount(CStockRspAccountField *pRspAccount, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspAccount)
	{
		data["UserId"] = toUtf(pRspAccount->UserId);
		data["UserName"] = toUtf(pRspAccount->UserName);
		data["UserType"] = toUtf(pRspAccount->UserType);
		data["LoginPwd"] = toUtf(pRspAccount->LoginPwd);
		data["AccountNo"] = toUtf(pRspAccount->AccountNo);
		data["TradePwd"] = toUtf(pRspAccount->TradePwd);
		data["IsSimulation"] = toUtf(pRspAccount->IsSimulation);
		data["FrontendIp"] = toUtf(pRspAccount->FrontendIp);
		data["FrontendPort"] = toUtf(pRspAccount->FrontendPort);
		data["CurrencyNo"] = toUtf(pRspAccount->CurrencyNo);
		data["UserState"] = toUtf(pRspAccount->UserState);
		data["SelAll"] = toUtf(pRspAccount->SelAll);
		data["Strategy"] = toUtf(pRspAccount->Strategy);
		data["Inner"] = toUtf(pRspAccount->Inner);
		data["YingSun"] = toUtf(pRspAccount->YingSun);
		data["ChaoDan"] = toUtf(pRspAccount->ChaoDan);
		data["Option"] = toUtf(pRspAccount->Option);
		data["CmeMarket"] = toUtf(pRspAccount->CmeMarket);
		data["CmeCOMEXMarket"] = toUtf(pRspAccount->CmeCOMEXMarket);
		data["CmeNYMEXMarket"] = toUtf(pRspAccount->CmeNYMEXMarket);
		data["CmeCBTMarket"] = toUtf(pRspAccount->CmeCBTMarket);
		data["IceUSMarket"] = toUtf(pRspAccount->IceUSMarket);
		data["IceECMarket"] = toUtf(pRspAccount->IceECMarket);
		data["IceEFMarket"] = toUtf(pRspAccount->IceEFMarket);
		data["CanTradeStockHK"] = toUtf(pRspAccount->CanTradeStockHK);
		data["CanTradeStockAM"] = toUtf(pRspAccount->CanTradeStockAM);
		data["MultiLogin"] = toUtf(pRspAccount->MultiLogin);
		data["SellStockHK"] = toUtf(pRspAccount->SellStockHK);
		data["SellStockAM"] = toUtf(pRspAccount->SellStockAM);
		data["CanTradeStockKRX"] = toUtf(pRspAccount->CanTradeStockKRX);
		data["HkexMarket"] = toUtf(pRspAccount->HkexMarket);
		data["IdNumber"] = toUtf(pRspAccount->IdNumber);
		data["HkexMarketFee"] = toUtf(pRspAccount->HkexMarketFee);
		data["IsProfessional"] = toUtf(pRspAccount->IsProfessional);
		data["IsOverSea"] = toUtf(pRspAccount->IsOverSea);
		data["IsFirstLogin"] = toUtf(pRspAccount->IsFirstLogin);
		data["UserMobile"] = toUtf(pRspAccount->UserMobile);
		data["HasSetQA"] = toUtf(pRspAccount->HasSetQA);
		data["CanTradeStockSGXQ"] = toUtf(pRspAccount->CanTradeStockSGXQ);
		data["ExistMac"] = toUtf(pRspAccount->ExistMac);
		data["RatioINE"] = toUtf(pRspAccount->RatioINE);
		data["EurexMarket"] = toUtf(pRspAccount->EurexMarket);
		data["HkexIsOverMaxTerminal"] = toUtf(pRspAccount->HkexIsOverMaxTerminal);
		data["HkexOverMoney"] = toUtf(pRspAccount->HkexOverMoney);
		data["CanTradeStockAU"] = toUtf(pRspAccount->CanTradeStockAU);
		data["NyFlag"] = toUtf(pRspAccount->NyFlag);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspAccount(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQuestion(CStockRspQuestionField *pRspQuestion, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspQuestion)
	{
		data["QuestionType"] = toUtf(pRspQuestion->QuestionType);
		data["QuestionId"] = toUtf(pRspQuestion->QuestionId);
		data["QuestionCN"] = toUtf(pRspQuestion->QuestionCN);
		data["QuestionEN"] = toUtf(pRspQuestion->QuestionEN);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQuestion(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspOrderInsert(CStockRspOrderInsertField *pRspOrderInsert, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspOrderInsert)
	{
		data["UserId"] = toUtf(pRspOrderInsert->UserId);
		data["AccountNo"] = toUtf(pRspOrderInsert->AccountNo);
		data["SystemNo"] = toUtf(pRspOrderInsert->SystemNo);
		data["LocalNo"] = toUtf(pRspOrderInsert->LocalNo);
		data["OrderNo"] = toUtf(pRspOrderInsert->OrderNo);
		data["ExchangeCode"] = toUtf(pRspOrderInsert->ExchangeCode);
		data["ContractCode"] = toUtf(pRspOrderInsert->ContractCode);
		data["BidAskFlag"] = toUtf(pRspOrderInsert->BidAskFlag);
		data["OrderQty"] = toUtf(pRspOrderInsert->OrderQty);
		data["OrderPrice"] = toUtf(pRspOrderInsert->OrderPrice);
		data["OrderType"] = toUtf(pRspOrderInsert->OrderType);
		data["OrderDate"] = toUtf(pRspOrderInsert->OrderDate);
		data["OrderTime"] = toUtf(pRspOrderInsert->OrderTime);
		data["ErrorCode"] = toUtf(pRspOrderInsert->ErrorCode);
		data["OrderState"] = toUtf(pRspOrderInsert->OrderState);
		data["TriggerPrice"] = toUtf(pRspOrderInsert->TriggerPrice);
		data["TIF"] = toUtf(pRspOrderInsert->TIF);
		data["OpenCloseFlag"] = toUtf(pRspOrderInsert->OpenCloseFlag);
		data["StrategyId"] = toUtf(pRspOrderInsert->StrategyId);
		data["MaxShow"] = toUtf(pRspOrderInsert->MaxShow);
		data["MinQty"] = toUtf(pRspOrderInsert->MinQty);
		data["ExchangeTime"] = toUtf(pRspOrderInsert->ExchangeTime);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspOrderInsert(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspOrderModify(CStockRspOrderModifyField *pRspOrderModify, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspOrderModify)
	{
		data["UserId"] = toUtf(pRspOrderModify->UserId);
		data["AccountNo"] = toUtf(pRspOrderModify->AccountNo);
		data["SystemNo"] = toUtf(pRspOrderModify->SystemNo);
		data["LocalNo"] = toUtf(pRspOrderModify->LocalNo);
		data["OrderNo"] = toUtf(pRspOrderModify->OrderNo);
		data["ExchangeCode"] = toUtf(pRspOrderModify->ExchangeCode);
		data["ContractCode"] = toUtf(pRspOrderModify->ContractCode);
		data["BidAskFlag"] = toUtf(pRspOrderModify->BidAskFlag);
		data["OrderQty"] = toUtf(pRspOrderModify->OrderQty);
		data["OrderPrice"] = toUtf(pRspOrderModify->OrderPrice);
		data["OrderType"] = toUtf(pRspOrderModify->OrderType);
		data["OrderDate"] = toUtf(pRspOrderModify->OrderDate);
		data["OrderTime"] = toUtf(pRspOrderModify->OrderTime);
		data["ErrorCode"] = toUtf(pRspOrderModify->ErrorCode);
		data["OrderState"] = toUtf(pRspOrderModify->OrderState);
		data["TriggerPrice"] = toUtf(pRspOrderModify->TriggerPrice);
		data["TIF"] = toUtf(pRspOrderModify->TIF);
		data["OpenCloseFlag"] = toUtf(pRspOrderModify->OpenCloseFlag);
		data["StrategyId"] = toUtf(pRspOrderModify->StrategyId);
		data["MaxShow"] = toUtf(pRspOrderModify->MaxShow);
		data["MinQty"] = toUtf(pRspOrderModify->MinQty);
		data["ExchangeTime"] = toUtf(pRspOrderModify->ExchangeTime);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspOrderModify(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspOrderCancel(CStockRspOrderCancelField *pRspOrderCancel, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspOrderCancel)
	{
		data["UserId"] = toUtf(pRspOrderCancel->UserId);
		data["AccountNo"] = toUtf(pRspOrderCancel->AccountNo);
		data["SystemNo"] = toUtf(pRspOrderCancel->SystemNo);
		data["LocalNo"] = toUtf(pRspOrderCancel->LocalNo);
		data["OrderNo"] = toUtf(pRspOrderCancel->OrderNo);
		data["CancelNo"] = toUtf(pRspOrderCancel->CancelNo);
		data["ExchangeCode"] = toUtf(pRspOrderCancel->ExchangeCode);
		data["ContractCode"] = toUtf(pRspOrderCancel->ContractCode);
		data["BidAskFlag"] = toUtf(pRspOrderCancel->BidAskFlag);
		data["OrderQty"] = toUtf(pRspOrderCancel->OrderQty);
		data["OrderPrice"] = toUtf(pRspOrderCancel->OrderPrice);
		data["FilledQty"] = toUtf(pRspOrderCancel->FilledQty);
		data["CancelledQty"] = toUtf(pRspOrderCancel->CancelledQty);
		data["OrderType"] = toUtf(pRspOrderCancel->OrderType);
		data["CancelledDate"] = toUtf(pRspOrderCancel->CancelledDate);
		data["CancelledTime"] = toUtf(pRspOrderCancel->CancelledTime);
		data["ErrorCode"] = toUtf(pRspOrderCancel->ErrorCode);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspOrderCancel(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspPasswordUpdate(CStockRspPasswordUpdateField *pRspPasswordUpdate, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspPasswordUpdate)
	{
		data["UserId"] = toUtf(pRspPasswordUpdate->UserId);
		data["OldPassword"] = toUtf(pRspPasswordUpdate->OldPassword);
		data["NewPassword"] = toUtf(pRspPasswordUpdate->NewPassword);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspPasswordUpdate(data, error, iRequestID, bIsLast);
};

void StockApi::OnRtnTrade(CStockRtnTradeField *pRtnTrade, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRtnTrade)
	{
		data["UserId"] = toUtf(pRtnTrade->UserId);
		data["AccountNo"] = toUtf(pRtnTrade->AccountNo);
		data["FilledNo"] = toUtf(pRtnTrade->FilledNo);
		data["OrderNo"] = toUtf(pRtnTrade->OrderNo);
		data["SystemNo"] = toUtf(pRtnTrade->SystemNo);
		data["LocalNo"] = toUtf(pRtnTrade->LocalNo);
		data["ExchangeCode"] = toUtf(pRtnTrade->ExchangeCode);
		data["TreatyCode"] = toUtf(pRtnTrade->TreatyCode);
		data["BuySale"] = toUtf(pRtnTrade->BuySale);
		data["FilledNumber"] = toUtf(pRtnTrade->FilledNumber);
		data["FilledPrice"] = toUtf(pRtnTrade->FilledPrice);
		data["FilledDate"] = toUtf(pRtnTrade->FilledDate);
		data["FilledTime"] = toUtf(pRtnTrade->FilledTime);
		data["Commsion"] = toUtf(pRtnTrade->Commsion);
		data["OrderNumber"] = toUtf(pRtnTrade->OrderNumber);
		data["OrderPrice"] = toUtf(pRtnTrade->OrderPrice);
		data["DeliveryDate"] = toUtf(pRtnTrade->DeliveryDate);
		data["FilledType"] = toUtf(pRtnTrade->FilledType);
		data["OrderType"] = toUtf(pRtnTrade->OrderType);
		data["ValidDate"] = toUtf(pRtnTrade->ValidDate);
		data["AddReduce"] = toUtf(pRtnTrade->AddReduce);
		data["ExchangeTime"] = toUtf(pRtnTrade->ExchangeTime);
		data["SubClientNo"] = toUtf(pRtnTrade->SubClientNo);
		data["FillBrokerList"] = toUtf(pRtnTrade->FillBrokerList);
		data["ErrorDescription"] = toUtf(pRtnTrade->ErrorDescription);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRtnTrade(data, error, iRequestID, bIsLast);
};

void StockApi::OnRtnOrder(CStockRtnOrderField *pRtnOrder, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRtnOrder)
	{
		data["LocalOrderNo"] = toUtf(pRtnOrder->LocalOrderNo);
		data["ExchangeNo"] = toUtf(pRtnOrder->ExchangeNo);
		data["TreatyCode"] = toUtf(pRtnOrder->TreatyCode);
		data["OrderNo"] = toUtf(pRtnOrder->OrderNo);
		data["OrderNumber"] = pRtnOrder->OrderNumber;
		data["FilledNumber"] = pRtnOrder->FilledNumber;
		data["FilledAdvPrice"] = pRtnOrder->FilledAdvPrice;
		data["BuyHoldNumber"] = pRtnOrder->BuyHoldNumber;
		data["BuyHoldOpenPrice"] = pRtnOrder->BuyHoldOpenPrice;
		data["BuyHoldPrice"] = pRtnOrder->BuyHoldPrice;
		data["SaleHoldNumber"] = pRtnOrder->SaleHoldNumber;
		data["SaleHoldOpenPrice"] = pRtnOrder->SaleHoldOpenPrice;
		data["SaleHoldPrice"] = pRtnOrder->SaleHoldPrice;
		data["IsCanceled"] = toUtf(pRtnOrder->IsCanceled);
		data["FilledTotalFee"] = pRtnOrder->FilledTotalFee;
		data["Status"] = pRtnOrder->Status;
		data["AccountNo"] = toUtf(pRtnOrder->AccountNo);
		data["HoldType"] = toUtf(pRtnOrder->HoldType);
		data["HoldMarginBuy"] = pRtnOrder->HoldMarginBuy;
		data["HoldMarginSale"] = pRtnOrder->HoldMarginSale;
		data["CurrPrice"] = pRtnOrder->CurrPrice;
		data["FloatProfit"] = pRtnOrder->FloatProfit;
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRtnOrder(data, error, iRequestID, bIsLast);
};

void StockApi::OnRtnCapital(CStockRtnCapitalField *pRtnCapital, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRtnCapital)
	{
		data["ClientNo"] = toUtf(pRtnCapital->ClientNo);
		data["AccountNo"] = toUtf(pRtnCapital->AccountNo);
		data["CurrencyNo"] = toUtf(pRtnCapital->CurrencyNo);
		data["Available"] = pRtnCapital->Available;
		data["YAvailable"] = pRtnCapital->YAvailable;
		data["CanCashOut"] = pRtnCapital->CanCashOut;
		data["Money"] = pRtnCapital->Money;
		data["ExpiredProfit"] = pRtnCapital->ExpiredProfit;
		data["FrozenDeposit"] = pRtnCapital->FrozenDeposit;
		data["Fee"] = pRtnCapital->Fee;
		data["Deposit"] = pRtnCapital->Deposit;
		data["KeepDeposit"] = pRtnCapital->KeepDeposit;
		data["Status"] = pRtnCapital->Status;
		data["InMoney"] = pRtnCapital->InMoney;
		data["OutMoney"] = pRtnCapital->OutMoney;
		data["UnexpiredProfit"] = pRtnCapital->UnexpiredProfit;
		data["TodayTotal"] = pRtnCapital->TodayTotal;
		data["UnaccountProfit"] = pRtnCapital->UnaccountProfit;
		data["Royalty"] = pRtnCapital->Royalty;
		data["ExchangeNo"] = toUtf(pRtnCapital->ExchangeNo);
		data["TreatyCode"] = toUtf(pRtnCapital->TreatyCode);
		data["OrderNo"] = toUtf(pRtnCapital->OrderNo);
		data["OrderNumber"] = pRtnCapital->OrderNumber;
		data["FilledNumber"] = pRtnCapital->FilledNumber;
		data["FilledAdvPrice"] = pRtnCapital->FilledAdvPrice;
		data["BuyHoldNumber"] = pRtnCapital->BuyHoldNumber;
		data["BuyHoldOpenPrice"] = pRtnCapital->BuyHoldOpenPrice;
		data["BuyHoldPrice"] = pRtnCapital->BuyHoldPrice;
		data["SaleHoldNumber"] = pRtnCapital->SaleHoldNumber;
		data["SaleHoldOpenPrice"] = pRtnCapital->SaleHoldOpenPrice;
		data["SaleHoldPrice"] = pRtnCapital->SaleHoldPrice;
		data["IsCanceled"] = toUtf(pRtnCapital->IsCanceled);
		data["FilledTotalFee"] = pRtnCapital->FilledTotalFee;
		data["Credit"] = pRtnCapital->Credit;
		data["MarginLimit"] = pRtnCapital->MarginLimit;
		data["BorrowValue"] = pRtnCapital->BorrowValue;
		data["MortgageMoney"] = pRtnCapital->MortgageMoney;
		data["T1"] = pRtnCapital->T1;
		data["T2"] = pRtnCapital->T2;
		data["T3"] = pRtnCapital->T3;
		data["TN"] = pRtnCapital->TN;
		data["TradeLimit"] = pRtnCapital->TradeLimit;
		data["FCrossMax"] = pRtnCapital->FCrossMax;
		data["SellFreezenMoney"] = pRtnCapital->SellFreezenMoney;
		data["SellInterest"] = pRtnCapital->SellInterest;
		data["SellNeedAddMargin"] = pRtnCapital->SellNeedAddMargin;
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRtnCapital(data, error, iRequestID, bIsLast);
};

void StockApi::OnRtnPosition(CStockRtnPositionField *pRtnPosition, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRtnPosition)
	{
		data["ClientNo"] = toUtf(pRtnPosition->ClientNo);
		data["ExchangeCode"] = toUtf(pRtnPosition->ExchangeCode);
		data["ProductCode"] = toUtf(pRtnPosition->ProductCode);
		data["LongShortPosFlag"] = toUtf(pRtnPosition->LongShortPosFlag);
		data["PosCostPrice"] = pRtnPosition->PosCostPrice;
		data["CanSellShares"] = pRtnPosition->CanSellShares;
		data["TodayBuyShares"] = pRtnPosition->TodayBuyShares;
		data["FrosenShares"] = pRtnPosition->FrosenShares;
		data["TotalBuyMoney"] = pRtnPosition->TotalBuyMoney;
		data["TotalSellMoney"] = pRtnPosition->TotalSellMoney;
		data["TotalBuyShares"] = pRtnPosition->TotalBuyShares;
		data["TotalSellShares"] = pRtnPosition->TotalSellShares;
		data["FirstPosDate"] = toUtf(pRtnPosition->FirstPosDate);
		data["ClosePosPL"] = pRtnPosition->ClosePosPL;
		data["T1DeliveryShares"] = pRtnPosition->T1DeliveryShares;
		data["T2DeliveryShares"] = pRtnPosition->T2DeliveryShares;
		data["T3DeliveryShares"] = pRtnPosition->T3DeliveryShares;
		data["NotDeliveryShares"] = pRtnPosition->NotDeliveryShares;
		data["DeliveredShares"] = pRtnPosition->DeliveredShares;
		data["SellShortShares"] = pRtnPosition->SellShortShares;
		data["SellShortMoney"] = pRtnPosition->SellShortMoney;
		data["SSPosAvgCostPrice"] = pRtnPosition->SSPosAvgCostPrice;
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRtnPosition(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryTick(CStockRspTickField *pRspTick, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspTick)
	{
		data["UpperTickCode"] = toUtf(pRspTick->UpperTickCode);
		data["PriceFrom"] = toUtf(pRspTick->PriceFrom);
		data["UpperTick"] = toUtf(pRspTick->UpperTick);
		data["ProductDot"] = toUtf(pRspTick->ProductDot);
		data["DotNum"] = toUtf(pRspTick->DotNum);
		data["LowerTick"] = toUtf(pRspTick->LowerTick);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryTick(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryOrder(CStockRspOrderField *pRspOrder, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspOrder)
	{
		data["UserId"] = toUtf(pRspOrder->UserId);
		data["AccountNo"] = toUtf(pRspOrder->AccountNo);
		data["SystemNo"] = toUtf(pRspOrder->SystemNo);
		data["LocalNo"] = toUtf(pRspOrder->LocalNo);
		data["OrderNo"] = toUtf(pRspOrder->OrderNo);
		data["ExchangeCode"] = toUtf(pRspOrder->ExchangeCode);
		data["ContractCode"] = toUtf(pRspOrder->ContractCode);
		data["BidAskFlag"] = toUtf(pRspOrder->BidAskFlag);
		data["OrderQty"] = toUtf(pRspOrder->OrderQty);
		data["OrderPrice"] = toUtf(pRspOrder->OrderPrice);
		data["FilledQty"] = toUtf(pRspOrder->FilledQty);
		data["FilledPrice"] = toUtf(pRspOrder->FilledPrice);
		data["OrderType"] = toUtf(pRspOrder->OrderType);
		data["OrderDate"] = toUtf(pRspOrder->OrderDate);
		data["OrderTime"] = toUtf(pRspOrder->OrderTime);
		data["ErrorCode"] = toUtf(pRspOrder->ErrorCode);
		data["OrderState"] = toUtf(pRspOrder->OrderState);
		data["CancelUserId"] = toUtf(pRspOrder->CancelUserId);
		data["TriggerPrice"] = toUtf(pRspOrder->TriggerPrice);
		data["TIF"] = toUtf(pRspOrder->TIF);
		data["OpenCloseFlag"] = toUtf(pRspOrder->OpenCloseFlag);
		data["StrategyId"] = toUtf(pRspOrder->StrategyId);
		data["MaxShow"] = toUtf(pRspOrder->MaxShow);
		data["MinQty"] = toUtf(pRspOrder->MinQty);
		data["ExchangeTime"] = toUtf(pRspOrder->ExchangeTime);
		data["CancelTime"] = toUtf(pRspOrder->CancelTime);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryOrder(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryTrade(CStockRspTradeField *pRspTrade, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspTrade)
	{
		data["UserId"] = toUtf(pRspTrade->UserId);
		data["AccountNo"] = toUtf(pRspTrade->AccountNo);
		data["FilledNo"] = toUtf(pRspTrade->FilledNo);
		data["OrderNo"] = toUtf(pRspTrade->OrderNo);
		data["SystemNo"] = toUtf(pRspTrade->SystemNo);
		data["LocalNo"] = toUtf(pRspTrade->LocalNo);
		data["ExchangeCode"] = toUtf(pRspTrade->ExchangeCode);
		data["TreatyCode"] = toUtf(pRspTrade->TreatyCode);
		data["BuySale"] = toUtf(pRspTrade->BuySale);
		data["FilledNumber"] = toUtf(pRspTrade->FilledNumber);
		data["FilledPrice"] = toUtf(pRspTrade->FilledPrice);
		data["FilledDate"] = toUtf(pRspTrade->FilledDate);
		data["FilledTime"] = toUtf(pRspTrade->FilledTime);
		data["Commsion"] = toUtf(pRspTrade->Commsion);
		data["OrderNumber"] = toUtf(pRspTrade->OrderNumber);
		data["OrderPrice"] = toUtf(pRspTrade->OrderPrice);
		data["DeliveryDate"] = toUtf(pRspTrade->DeliveryDate);
		data["FilledType"] = toUtf(pRspTrade->FilledType);
		data["OrderType"] = toUtf(pRspTrade->OrderType);
		data["ValidDate"] = toUtf(pRspTrade->ValidDate);
		data["AddReduce"] = toUtf(pRspTrade->AddReduce);
		data["ExchangeTime"] = toUtf(pRspTrade->ExchangeTime);
		data["SubClientNo"] = toUtf(pRspTrade->SubClientNo);
		data["FillBrokerList"] = toUtf(pRspTrade->FillBrokerList);
		data["ErrorDescription"] = toUtf(pRspTrade->ErrorDescription);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryTrade(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryCapital(CStockRspCapitalField *pRspCapital, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspCapital)
	{
		data["UserId"] = toUtf(pRspCapital->UserId);
		data["Deposit"] = toUtf(pRspCapital->Deposit);
		data["Withdraw"] = toUtf(pRspCapital->Withdraw);
		data["TodayTradableFund"] = toUtf(pRspCapital->TodayTradableFund);
		data["TodayInitialBalance"] = toUtf(pRspCapital->TodayInitialBalance);
		data["TodayRealtimeBalance"] = toUtf(pRspCapital->TodayRealtimeBalance);
		data["FrozenFund"] = toUtf(pRspCapital->FrozenFund);
		data["Commission"] = toUtf(pRspCapital->Commission);
		data["InitialMargin"] = toUtf(pRspCapital->InitialMargin);
		data["YdTradableFund"] = toUtf(pRspCapital->YdTradableFund);
		data["YdInitialBalance"] = toUtf(pRspCapital->YdInitialBalance);
		data["YdFinalBalance"] = toUtf(pRspCapital->YdFinalBalance);
		data["ProfitLoss"] = toUtf(pRspCapital->ProfitLoss);
		data["CurrencyNo"] = toUtf(pRspCapital->CurrencyNo);
		data["CurrencyRate"] = pRspCapital->CurrencyRate;
		data["LMEUnexpiredPL"] = pRspCapital->LMEUnexpiredPL;
		data["LMEUnaccountPL"] = pRspCapital->LMEUnaccountPL;
		data["MaintenanceMargin"] = pRspCapital->MaintenanceMargin;
		data["Premium"] = pRspCapital->Premium;
		data["CreditAmount"] = pRspCapital->CreditAmount;
		data["IntialFund"] = pRspCapital->IntialFund;
		data["FundAccountNo"] = toUtf(pRspCapital->FundAccountNo);
		data["MortgageInMoney"] = pRspCapital->MortgageInMoney;
		data["MarginLimit"] = pRspCapital->MarginLimit;
		data["BorrowInMoney"] = pRspCapital->BorrowInMoney;
		data["T1DeliveryMoney"] = pRspCapital->T1DeliveryMoney;
		data["T2DeliveryMoney"] = pRspCapital->T2DeliveryMoney;
		data["T3DeliveryMoney"] = pRspCapital->T3DeliveryMoney;
		data["TNDeliveryMoney"] = pRspCapital->TNDeliveryMoney;
		data["TradeLimit"] = pRspCapital->TradeLimit;
		data["CanCashOutMoneyAmount"] = pRspCapital->CanCashOutMoneyAmount;
		data["DepositInterest"] = pRspCapital->DepositInterest;
		data["LoanInterest"] = pRspCapital->LoanInterest;
		data["CrossCurrencyMaxMoneyAmt"] = pRspCapital->CrossCurrencyMaxMoneyAmt;
		data["SellShortFrozenMoney"] = pRspCapital->SellShortFrozenMoney;
		data["SellShortInterest"] = pRspCapital->SellShortInterest;
		data["ShortPosAddtionalMargin"] = pRspCapital->ShortPosAddtionalMargin;
		data["ErrorDescription"] = toUtf(pRspCapital->ErrorDescription);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryCapital(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryVersion(CStockRspVersionField *pRspVersion, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspVersion)
	{
		data["Version"] = toUtf(pRspVersion->Version);
		data["MustUpdate"] = toUtf(pRspVersion->MustUpdate);
		data["MustVersion"] = toUtf(pRspVersion->MustVersion);
		data["VersionContent_CN"] = toUtf(pRspVersion->VersionContent_CN);
		data["VersionContent_US"] = toUtf(pRspVersion->VersionContent_US);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryVersion(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryPosition(CStockRspPositionField *pRspPosition, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspPosition)
	{
		data["ClientNo"] = toUtf(pRspPosition->ClientNo);
		data["ExchangeCode"] = toUtf(pRspPosition->ExchangeCode);
		data["ProductCode"] = toUtf(pRspPosition->ProductCode);
		data["LongShortPosFlag"] = toUtf(pRspPosition->LongShortPosFlag);
		data["PosCostPrice"] = pRspPosition->PosCostPrice;
		data["CanSellShares"] = pRspPosition->CanSellShares;
		data["TodayBuyShares"] = pRspPosition->TodayBuyShares;
		data["FrosenShares"] = pRspPosition->FrosenShares;
		data["TotalBuyMoney"] = pRspPosition->TotalBuyMoney;
		data["TotalSellMoney"] = pRspPosition->TotalSellMoney;
		data["TotalBuyShares"] = pRspPosition->TotalBuyShares;
		data["TotalSellShares"] = pRspPosition->TotalSellShares;
		data["FirstPosDate"] = toUtf(pRspPosition->FirstPosDate);
		data["ClosePosPL"] = pRspPosition->ClosePosPL;
		data["T1DeliveryShares"] = pRspPosition->T1DeliveryShares;
		data["T2DeliveryShares"] = pRspPosition->T2DeliveryShares;
		data["T3DeliveryShares"] = pRspPosition->T3DeliveryShares;
		data["NotDeliveryShares"] = pRspPosition->NotDeliveryShares;
		data["DeliveredShares"] = pRspPosition->DeliveredShares;
		data["SellShortShares"] = pRspPosition->SellShortShares;
		data["SellShortMoney"] = pRspPosition->SellShortMoney;
		data["SSPosAvgCostPrice"] = pRspPosition->SSPosAvgCostPrice;
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryPosition(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryCurrency(CStockRspCurrencyField *pRspCurrency, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspCurrency)
	{
		data["CurrencyNo"] = toUtf(pRspCurrency->CurrencyNo);
		data["IsBase"] = pRspCurrency->IsBase;
		data["ChangeRate"] = pRspCurrency->ChangeRate;
		data["CurrencyName"] = toUtf(pRspCurrency->CurrencyName);
		data["CurrencyNameEN"] = toUtf(pRspCurrency->CurrencyNameEN);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryCurrency(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryExchange(CStockRspExchangeField *pRspExchange, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspExchange)
	{
		data["ExchangeNo"] = toUtf(pRspExchange->ExchangeNo);
		data["ExchangeName"] = toUtf(pRspExchange->ExchangeName);
		data["SettleType"] = toUtf(pRspExchange->SettleType);
		data["NameEN"] = toUtf(pRspExchange->NameEN);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryExchange(data, error, iRequestID, bIsLast);
};

void StockApi::OnRspQryInstrument(CStockRspInstrumentField *pRspInstrument, CStockRspInfoField *pRspInfo, int iRequestID, bool bIsLast) 
{
	gil_scoped_acquire acquire;
	dict data;
	if (pRspInstrument)
	{
		data["ExchangeNo"] = toUtf(pRspInstrument->ExchangeNo);
		data["ExchangeName"] = toUtf(pRspInstrument->ExchangeName);
		data["CommodityNo"] = toUtf(pRspInstrument->CommodityNo);
		data["CommodityName"] = toUtf(pRspInstrument->CommodityName);
		data["CommodityType"] = toUtf(pRspInstrument->CommodityType);
		data["CurrencyNo"] = toUtf(pRspInstrument->CurrencyNo);
		data["CurrencyName"] = toUtf(pRspInstrument->CurrencyName);
		data["ProductDot"] = pRspInstrument->ProductDot;
		data["UpperTick"] = pRspInstrument->UpperTick;
		data["SettlePrice"] = pRspInstrument->SettlePrice;
		data["TradeMonth"] = toUtf(pRspInstrument->TradeMonth);
		data["DotNum"] = pRspInstrument->DotNum;
		data["LowerTick"] = pRspInstrument->LowerTick;
		data["DotNumCarry"] = pRspInstrument->DotNumCarry;
		data["UpperTickCarry"] = pRspInstrument->UpperTickCarry;
		data["FirstNoticeDay"] = toUtf(pRspInstrument->FirstNoticeDay);
		data["FreezenPercent"] = pRspInstrument->FreezenPercent;
		data["FreezenMoney"] = pRspInstrument->FreezenMoney;
		data["FeeMoney"] = pRspInstrument->FeeMoney;
		data["FeePercent"] = pRspInstrument->FeePercent;
		data["PriceStrike"] = pRspInstrument->PriceStrike;
		data["ProductDotStrike"] = pRspInstrument->ProductDotStrike;
		data["UpperTickStrike"] = pRspInstrument->UpperTickStrike;
		data["LastTradeDay"] = toUtf(pRspInstrument->LastTradeDay);
		data["LastUpdateDay"] = toUtf(pRspInstrument->LastUpdateDay);
		data["CriticalPrice"] = pRspInstrument->CriticalPrice;
		data["CriticalMinChangedPrice"] = pRspInstrument->CriticalMinChangedPrice;
		data["ExchangeSub"] = toUtf(pRspInstrument->ExchangeSub);
		data["OptionType"] = toUtf(pRspInstrument->OptionType);
		data["OptionMonth"] = toUtf(pRspInstrument->OptionMonth);
		data["OptionStrikePrice"] = toUtf(pRspInstrument->OptionStrikePrice);
		data["OptionCommodityNo"] = toUtf(pRspInstrument->OptionCommodityNo);
		data["OptionContractNo"] = toUtf(pRspInstrument->OptionContractNo);
		data["MortgagePercent"] = toUtf(pRspInstrument->MortgagePercent);
		data["UpperTickCode"] = toUtf(pRspInstrument->UpperTickCode);
		data["LotSize"] = toUtf(pRspInstrument->LotSize);
		data["FlatTime"] = toUtf(pRspInstrument->FlatTime);
		data["CommodityFNameEN"] = toUtf(pRspInstrument->CommodityFNameEN);
		data["CanSell"] = toUtf(pRspInstrument->CanSell);
		data["SellRate"] = pRspInstrument->SellRate;
		data["SellMax"] = pRspInstrument->SellMax;
		data["StrikeRate"] = pRspInstrument->StrikeRate;
		data["StrikePrice"] = pRspInstrument->StrikePrice;
		data["ReceivePrice"] = pRspInstrument->ReceivePrice;
		data["ExpireDate"] = toUtf(pRspInstrument->ExpireDate);
		data["SellRateKeep"] = pRspInstrument->SellRateKeep;
		data["StrikeCommodityNo"] = toUtf(pRspInstrument->StrikeCommodityNo);
		data["CallPutFlag"] = toUtf(pRspInstrument->CallPutFlag);
		data["Publisher"] = toUtf(pRspInstrument->Publisher);
	}
	dict error;
	if (pRspInfo)
	{
		error["ErrorID"] = pRspInfo->ErrorID;
		error["ErrorMsg"] = toUtf(pRspInfo->ErrorMsg);
	}
	this->onRspQryInstrument(data, error, iRequestID, bIsLast);
};

