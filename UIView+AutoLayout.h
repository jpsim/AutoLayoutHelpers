//
//  UIView+AutoLayout.h
//  AutoLayoutHelpers
//
//  Created by JP Simard on 7/4/2014.
//  Copyright (c) 2014 JP Simard. All rights reserved.
//

@import UIKit;

@interface UIView (AutoLayout)

// Return a frameless view that does not automatically use autoresizing (for use in autolayouts)
+ (id)newForAutolayoutAndAddToView:(UIView *)view;

// Update an existing view to not automatically use autoresizing (for use in autolayouts)
- (void)prepareForAutolayoutAndAddToView:(UIView *)view;

// AutoLayout Helpers

// Priority
NSLayoutConstraint *constraintAttributeWithPriority(UIView *item1, UIView *item2, NSLayoutAttribute attribute,
                                                    CGFloat offset, UILayoutPriority priority);

// Equals
NSLayoutConstraint *constraintEqual(UIView *item1, UIView *item2, NSLayoutAttribute attribute, CGFloat offset);
NSLayoutConstraint *constraintEqualAttributes(UIView *item1, UIView *item2, NSLayoutAttribute attribute1, NSLayoutAttribute attribute2, CGFloat offset);
NSLayoutConstraint *constraintEqualWithMultiplier(UIView *item1, UIView *item2, NSLayoutAttribute attribute, CGFloat offset, CGFloat multiplier);
NSLayoutConstraint *constraintEqualAttributesWithMultiplier(UIView *item1, UIView *item2, NSLayoutAttribute attribute1,
                                                            NSLayoutAttribute attribute2, CGFloat offset, CGFloat multiplier);

// Center
NSLayoutConstraint *constraintCenterX(UIView *item1, UIView *item2);
NSLayoutConstraint *constraintCenterXWithOffset(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintCenterY(UIView *item1, UIView *item2);
NSLayoutConstraint *constraintCenterYWithOffset(UIView *item1, UIView *item2, CGFloat offset);

// Trail
NSLayoutConstraint *constraintTrailVertically(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintTrailHorizontally(UIView *item1, UIView *item2, CGFloat offset);

// Lead
NSLayoutConstraint *constraintLeadVertically(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintLeadHorizontally(UIView *item1, UIView *item2, CGFloat offset);

// Dimensions
NSLayoutConstraint *constraintWidth(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintHeight(UIView *item1, UIView *item2, CGFloat offset);

// Positions
NSLayoutConstraint *constraintTop(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintBottom(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintLeft(UIView *item1, UIView *item2, CGFloat offset);
NSLayoutConstraint *constraintRight(UIView *item1, UIView *item2, CGFloat offset);

// Constant
NSLayoutConstraint *constraintAbsolute(UIView *item1, NSLayoutAttribute attribute, CGFloat offset);

// Combinations
NSArray *constraintsAbsoluteSize(UIView *item, CGFloat width, CGFloat height);
NSArray *constraintsCenter(UIView *item, UIView *centerTo);
NSArray *constraintsCenterWithOffset(UIView *item, UIView *centerTo, CGFloat xOffset, CGFloat yOffset);
NSArray *constraintsEqualSize(UIView *item1, UIView *item2, CGFloat widthOffset, CGFloat heightOffset);
NSArray *constraintsEqualPosition(UIView *item1, UIView *item2, CGFloat xOffset, CGFloat yOffset);
NSArray *constraintsEqualSizeAndPosition(UIView *item1, UIView *item2);
NSArray *constraintsHeightNotGreaterThanConstant(UIView *item1, UIView *item2, CGFloat constant);
NSArray *constraintsHeightGreaterThanOrEqual(UIView *item1, UIView *item2);

@end
