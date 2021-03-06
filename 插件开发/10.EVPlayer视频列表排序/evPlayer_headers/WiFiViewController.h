//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseController.h"

@class NSString, SGWiFiUploadManager, UILabel;

@interface WiFiViewController : BaseController
{
    NSString *_ip_port;
    SGWiFiUploadManager *_mgr;
    UILabel *_wifi_adress;
}

@property(nonatomic) __weak UILabel *wifi_adress; // @synthesize wifi_adress=_wifi_adress;
@property(retain, nonatomic) SGWiFiUploadManager *mgr; // @synthesize mgr=_mgr;
@property(retain, nonatomic) NSString *ip_port; // @synthesize ip_port=_ip_port;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupServer;
- (void)copyFile:(id)arg1 toPath:(id)arg2;
- (void)copyFileToTarget;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

