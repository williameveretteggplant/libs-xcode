#import <Foundation/NSString.h>

@interface NSString (PBXAdditions)

- (NSString *) firstPathComponent;

- (NSString *) stringByEscapingSpecialCharacters;
- (NSString *) stringByEliminatingSpecialCharacters;
- (NSString *) stringByCapitalizingFirstCharacter;
- (NSString *) stringByDeletingFirstPathComponent;
- (NSString *) stringByReplacingEnvironmentVariablesWithValues;

@end
