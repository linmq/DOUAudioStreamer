/* vim: set ft=objc fenc=utf-8 sw=2 ts=2 et: */
/*
 *  DOUAudioStreamer - A Core Audio based streaming audio player for iOS/Mac:
 *
 *      http://github.com/douban/DOUAudioStreamer
 *
 *  Copyright 2013 Douban Inc.  All rights reserved.
 *
 *  Use and distribution licensed under the BSD license.  See
 *  the LICENSE file for full text.
 *
 *  Authors:
 *      Chongyu Zhu <lembacon@gmail.com>
 *
 */

#import <Foundation/Foundation.h>

@interface NSData (DOUMappedFile)

+ (instancetype)dataWithMappedContentsOfFile:(NSString *)path;
+ (instancetype)dataWithMappedContentsOfURL:(NSURL *)url;

+ (instancetype)modifiableDataWithMappedContentsOfFile:(NSString *)path;
+ (instancetype)modifiableDataWithMappedContentsOfURL:(NSURL *)url;

- (void)synchronizeMappedFile;

@end
