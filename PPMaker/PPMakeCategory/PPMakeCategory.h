//
//  PPMakeCategory.h
//  PPMakerExample
//
//  Created by ╰莪呮想好好宠Nǐつ on 2018/5/18.
//  Copyright © 2018年 PPAbner. All rights reserved.
//

#ifndef PPMakeCategory_h
#define PPMakeCategory_h

#pragma mark --- UIKit
#import "UIButton+PPMakeSupport.h"
#import "UIDevice+PPMakeSupport.h"
#import "UIColor+PPMakeSupport.h"
#import "UIColor+PPMakeSupportJudge.h"
#import "UIFont+PPMakeSupport.h"
#import "UIImage+PPMakeSupport.h"
#import "UITableViewCell+PPMakeSupport.h"
#import "UIScrollView+ScrollBlock.h"
#import "UIView+PPMakeSupport.h"
#import "UIView+PPMakeSupportCornerAndShadow.h"

#pragma mark --- Foundation
#import "NSObject+PPMakeSupport.h"
//自定义KVO
#import "NSObject+PPMakeSupport_KVO.h"
#import "NSMutableAttributedString+PPMakeSupport.h"


#define PPMakeAssert(_makeType_,_class_) \
NSAssert(self.makeType == _makeType_, @"💊崩溃原因💊: %@是%@的一个属性，不能用于%@。详见 %s,第%d行。",NSStringFromSelector(_cmd),NSStringFromClass(_class_),NSStringFromClass([self.createdView class]),__FUNCTION__,__LINE__);

#define PPMakeLBAssert   PPMakeAssert(PPMakeTypeLB,[UILabel class])
#define PPMakeBTAssert   PPMakeAssert(PPMakeTypeBT,[UIButton class])
#define PPMakeImgVAssert PPMakeAssert(PPMakeTypeImgV,[UIImageView class])

#define PPMakeTableVAssert \
NSAssert(self.makeType == PPMakeTypeTableVPlain || self.makeType == PPMakeTypeTableVGrouped, @"💊崩溃原因💊: %@是UITableView的一个属性，不能用于%@。详见 %s,第%d行。",NSStringFromSelector(_cmd),NSStringFromClass([self.createdView class]),__FUNCTION__,__LINE__);

#endif /* PPMakeCategory_h */
