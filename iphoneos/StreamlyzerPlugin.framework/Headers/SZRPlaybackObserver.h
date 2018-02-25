
#import <AVFoundation/AVFoundation.h>
#import "SZRObserver.h"
#import "SZRPluginPlaybackEventDelegate.h"
#import "SZRPlaybackObserver.h"

typedef NS_ENUM(NSUInteger, SZRPlayerType) {
    SZRPlayerTypeGeneric
    , SZRPlayerTypeAVPlayer
    , SZRPlayerTypeMPMoviePlayer
};

@interface SZRPlaybackObserver : NSObject
<SZRObserver, SZRPluginPlaybackEventDelegate>
{
}

@property (weak) id<SZRPluginPlaybackEventDelegate> delegate;

-(void) onInitialization;
-(void) onPlayerLoad;
-(void) onPlayerReady;
-(void) onPlayerPlay;
-(void) onPlayerPlaying;
-(void) onPlayerPause;
-(void) onPlayerSeek: (NSInteger) position withOffset: (NSInteger) offset;
-(void) onPlayerSeeked;
-(void) onPlayerBitrateChange : (NSInteger) bitrate;
-(void) onPlayerResolutionChange;
-(void) onBufferingStart;
-(void) onBufferingEnded;
-(void) onPlayerErrorMessage : (NSString *) errorGroup errorMessage:errorMessage;
-(void) onPlayerComplete;
-(void) onPlayerStop;
-(void) onPlayNext;

- (void) onChangeAudioLanguage: (NSString *) audioLanguage;
- (void) onChangeSubtitleLanguage: (NSString *) subtitleLanguage;

- (void) onChromecastConnecting;
- (void) onChromecastConnected;
- (void) onChromecastDisconnected;
- (NSString *) getTicketId;
@end


