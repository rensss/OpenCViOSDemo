//
//  UIImage+OpenCVForImage.h
//  OpenCV
//
//  Created by Rzk on 2021/8/17.
//

#import <UIKit/UIKit.h>

@interface UIImage (OpenCVForImage)

@property(nonatomic, readonly) cv::Mat CVMat;
@property(nonatomic, readonly) cv::Mat CVGrayscaleMat;

+ (UIImage *)imageWithCVMat:(const cv::Mat&)cvMat;
- (id)initWithCVMat:(const cv::Mat&)cvMat;

@end
