#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGPosition
@end

@interface SWGPosition : SWGObject


@property(nonatomic) NSNumber* account;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSString* underlying;

@property(nonatomic) NSString* quoteCurrency;

@property(nonatomic) NSString* currency;

@property(nonatomic) NSNumber* commission;

@property(nonatomic) NSNumber* crossMargin;

@property(nonatomic) NSNumber* rebalancedPnl;

@property(nonatomic) NSNumber* prevRealisedPnl;

@property(nonatomic) NSNumber* prevUnrealisedPnl;

@property(nonatomic) NSNumber* prevClosePrice;

@property(nonatomic) NSDate* openingTimestamp;

@property(nonatomic) NSNumber* openingQty;

@property(nonatomic) NSNumber* openingCost;

@property(nonatomic) NSNumber* openingComm;

@property(nonatomic) NSNumber* openOrderBuyQty;

@property(nonatomic) NSNumber* openOrderBuyCost;

@property(nonatomic) NSNumber* openOrderBuyPremium;

@property(nonatomic) NSNumber* openOrderSellQty;

@property(nonatomic) NSNumber* openOrderSellCost;

@property(nonatomic) NSNumber* openOrderSellPremium;

@property(nonatomic) NSNumber* execBuyQty;

@property(nonatomic) NSNumber* execBuyCost;

@property(nonatomic) NSNumber* execSellQty;

@property(nonatomic) NSNumber* execSellCost;

@property(nonatomic) NSNumber* execQty;

@property(nonatomic) NSNumber* execCost;

@property(nonatomic) NSNumber* execComm;

@property(nonatomic) NSDate* currentTimestamp;

@property(nonatomic) NSNumber* currentQty;

@property(nonatomic) NSNumber* currentCost;

@property(nonatomic) NSNumber* currentComm;

@property(nonatomic) NSNumber* realisedCost;

@property(nonatomic) NSNumber* unrealisedCost;

@property(nonatomic) NSNumber* grossOpenCost;

@property(nonatomic) NSNumber* grossOpenPremium;

@property(nonatomic) NSNumber* grossExecCost;

@property(nonatomic) NSNumber* isOpen;

@property(nonatomic) NSNumber* markPrice;

@property(nonatomic) NSNumber* markValue;

@property(nonatomic) NSNumber* homeNotional;

@property(nonatomic) NSNumber* foreignNotional;

@property(nonatomic) NSString* posState;

@property(nonatomic) NSNumber* posCost;

@property(nonatomic) NSNumber* posCost2;

@property(nonatomic) NSNumber* posCross;

@property(nonatomic) NSNumber* posInit;

@property(nonatomic) NSNumber* posComm;

@property(nonatomic) NSNumber* posLoss;

@property(nonatomic) NSNumber* posMargin;

@property(nonatomic) NSNumber* posMaint;

@property(nonatomic) NSNumber* posAllowance;

@property(nonatomic) NSNumber* taxableMargin;

@property(nonatomic) NSNumber* initMargin;

@property(nonatomic) NSNumber* maintMargin;

@property(nonatomic) NSNumber* sessionMargin;

@property(nonatomic) NSNumber* targetExcessMargin;

@property(nonatomic) NSNumber* varMargin;

@property(nonatomic) NSNumber* realisedGrossPnl;

@property(nonatomic) NSNumber* realisedTax;

@property(nonatomic) NSNumber* realisedPnl;

@property(nonatomic) NSNumber* unrealisedGrossPnl;

@property(nonatomic) NSNumber* longBankrupt;

@property(nonatomic) NSNumber* shortBankrupt;

@property(nonatomic) NSNumber* taxBase;

@property(nonatomic) NSNumber* indicativeTaxRate;

@property(nonatomic) NSNumber* indicativeTax;

@property(nonatomic) NSNumber* unrealisedTax;

@property(nonatomic) NSNumber* unrealisedPnl;

@property(nonatomic) NSNumber* unrealisedPnlPcnt;

@property(nonatomic) NSNumber* unrealisedRoePcnt;

@property(nonatomic) NSNumber* simpleQty;

@property(nonatomic) NSNumber* simpleCost;

@property(nonatomic) NSNumber* simpleValue;

@property(nonatomic) NSNumber* simplePnl;

@property(nonatomic) NSNumber* simplePnlPcnt;

@property(nonatomic) NSNumber* avgCostPrice;

@property(nonatomic) NSNumber* avgEntryPrice;

@property(nonatomic) NSNumber* breakEvenPrice;

@property(nonatomic) NSNumber* marginCallPrice;

@property(nonatomic) NSNumber* liquidationPrice;

@property(nonatomic) NSNumber* bankruptPrice;

@property(nonatomic) NSDate* timestamp;

@end