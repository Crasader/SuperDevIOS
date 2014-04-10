//
//  ViewController.m
//  ImageCacheSmaple
//
//  Created by 范林松 on 14-4-10.
//  Copyright (c) 2014年 leesong. All rights reserved.
//

#import "ViewController.h"
#import "ImageCache.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

}
-(void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    
    [[ImageCache sharedCache] imageWithURL:@"http://www2.lanou3g.com/uploadfile/2014/0312/20140312113351533.jpg"
                                 completed:^(UIImage *image) {
                                     self.imageView.image = image;
                                 }
                                    failed:nil];

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
