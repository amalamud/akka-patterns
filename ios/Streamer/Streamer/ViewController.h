#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CV/CVServer.h"

@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate, CVServerConnectionDelegate>

- (IBAction)startStop:(id)sender;

@property (nonatomic, retain) IBOutlet UIButton *startStopButton;

@end
