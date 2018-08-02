//
//  NSString+Code.h
//  freeStuff
//
//  Created by 孙号斌 on 2017/11/8.
//  Copyright © 2017年 孙号斌. All rights reserved.
//

#import <Foundation/Foundation.h>

#define BASE64_STRING( string )         ([NSString base64StringFromText:string])
#define STRING_BASE64( base64 )         ([NSString textFromBase64String:base64])

#define MD5_32LOWERCASE( string )       ([NSString md5_32_lowerCase:string])
#define MD5_16LOWERCASE( string )       ([NSString md5_16_lowerCase:string])
#define MD5_32CAPITAL( string )         ([NSString md5_32_capital:string])
#define MD5_16CAPITAL( string )         ([NSString md5_16_capital:string])

@interface NSString (Code)
/******************************************************************************
 函数名称 : + (NSString *)base64StringFromText:(NSString *)text
 函数描述 : 将文本转换为base64格式字符串
 输入参数 : (NSString *)text    文本
 输出参数 : N/A
 返回参数 : (NSString *)    base64格式字符串
 备注信息 :
 ******************************************************************************/
+ (NSString *)base64StringFromText:(NSString *)text;

/******************************************************************************
 函数名称 : + (NSString *)textFromBase64String:(NSString *)base64
 函数描述 : 将base64格式字符串转换为文本
 输入参数 : (NSString *)base64  base64格式字符串
 输出参数 : N/A
 返回参数 : (NSString *)    文本
 备注信息 :
 ******************************************************************************/
+ (NSString *)textFromBase64String:(NSString *)base64;


/**
 *  md5 32位小大写加密
 *  @param str 要加密的字符串
 *  @return 加密过的字符串
 */
+ (NSString *)md5_32_lowerCase:(NSString *)str;
+ (NSString *)md5_32_capital:(NSString *)str;


/**
 *  md5 16位加密 （小/大写）
 *  @param str 要加密的字符串
 *  @return 加密过的字符串
 */
+ (NSString *)md5_16_lowerCase:(NSString *)str;
+ (NSString *)md5_16_capital:(NSString *)str;
@end
