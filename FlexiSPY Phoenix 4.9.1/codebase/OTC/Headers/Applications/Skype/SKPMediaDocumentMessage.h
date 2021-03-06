/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SKPMessage.h"

@class SKPMediaDocument;

__attribute__((visibility("hidden")))
@interface SKPMediaDocumentMessage : SKPMessage {
	BOOL _didLoadDocument;
	SKPMediaDocument* _mediaDocument;
}
@property(assign, nonatomic) BOOL didLoadDocument;
@property(retain, nonatomic) SKPMediaDocument* mediaDocument;
//-(void).cxx_destruct;
-(id)attributedSummary;
-(void)willSetValue:(id)value forKey:(id)key andUseMainQueueToSet:(BOOL)set;
-(int)type;
@end

