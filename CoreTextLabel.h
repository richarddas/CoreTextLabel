//
//  CoreTextLabel.h
//  CoreTextLabel
//
//  Created by Daniel Kuhnke on 19.11.12.
//  Copyright (c) 2012 Daniel Kuhnke appfarms GmbH & Co. KG (http://www.appfarms.com/)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software
//  and associated documentation files (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the Software is furnished to
//  do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all copies or substantial
//  portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
//  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
//  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@interface CoreTextLabel : UIView

/**
 Attributed string to be drawn
 */
@property (nonatomic, retain) NSMutableAttributedString * string;


/**
 Regular font used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default [UIFont systemFontOfSize:]
 */
@property (nonatomic, retain) UIFont * font;

/**
 Bold font used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default [UIFont boldSystemFontOfSize:]
 */
@property (nonatomic, retain) UIFont * boldFont;

/**
 Italic font used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default [UIFont italicSystemFontOfSize:]
 */
@property (nonatomic, retain) UIFont * italicFont;

/**
 Bold italic font used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default [UIFont italicSystemFontOfSize:]
 */
@property (nonatomic, retain) UIFont * boldItalicFont;

/**
 Text color used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default [UIColor blackColor]
 */
@property (nonatomic, retain) UIColor * textColor;

/**
 Bold text color used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default self.textColor
 */
@property (nonatomic, retain) UIColor * boldTextColor;

/**
 Italic text color used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default self.textColor
 */
@property (nonatomic, retain) UIColor * italicTextColor;

/**
 Bold italic text color used to create NSMutableAttributedString with -attributedStringByHTML:
 
 @default self.textColor
 */
@property (nonatomic, retain) UIColor * boldItalicTextColor;

/**
 Font size used to create NSMutableAttributedString with -attributedStringByHTML: if used with default fonts
 
 @default 18.f
 */
@property (nonatomic, assign) CGFloat defaultFontSize;

/**
 Determines the number of lines to draw and what to do when sizeToFit is called. 

 @default 0 (no limit)
 */
@property (nonatomic, assign) NSUInteger numberOfLines;

/**
 Number of columns to be drawn
 
 @default 1 (values lower 1 will be ignored)
 */
@property (nonatomic, assign) NSUInteger numberOfColumns;

/**
 Column margin
 */
@property (nonatomic, assign) CGFloat columnMargin;

/**
 Line spacing
 
 @default 0.f
 */
@property (nonatomic, assign) CGFloat lineSpacing;

/**
 Text alignment
 
 @default NSTextAlignmentLeft
 */
@property (nonatomic, assign) NSTextAlignment textAlignment;


/**
 * Create NSMutableAttributedString by HTML string
 *
 * - text will be styled with self.font and self.textColor
 * - </p> and <br /> will be replaced by NEWLINE
 * - <b> and <strong> will be styled with self.boldFont and self.boldTextColor
 * - <i> and <em> will be styled with self.italicFont and self.italicTextColor
 * - <i>/<em> combined with <b>/<strong> will be styled with self.boldItalicFont and self.boldItalicTextColor
 */
- (NSMutableAttributedString *) attributedStringByHTML:(NSString *)html;

@end
