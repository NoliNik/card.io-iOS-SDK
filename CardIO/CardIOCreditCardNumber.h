//
//  CardIOCreditCardNumber.h
//  Version 5.4.1-9-g4dabb2a
//
//  See the file "LICENSE.md" for the full license governing this code.
//

#import <Foundation/Foundation.h>

#import "CardIOCreditCardInfo.h"

@interface CardIOCreditCardNumber : NSObject 

+ (CardIOCreditCardType)cardTypeForCardNumber:(NSString *)cardNumber;
+ (NSInteger)numberLengthForCardNumber:(NSString *)cardNumber; // returns -1 for unknown
+ (NSInteger)cvvLengthForCardType:(CardIOCreditCardType)cardType; // returns -1 for unknown
+ (BOOL)passesLuhnChecksum:(NSString *)cardNumber;
+ (NSString *)stringByRemovingNonNumbers:(NSString *)stringWithSpaces;
+ (NSString *)stringbyRemovingSpaces:(NSString *)stringWithSpaces;
+ (BOOL)isValidNumber:(NSString *)number;

@end
