//
//  JMYuv420torgb24.h
//  JMMonitorView
//
//  Created by lzj<lizhijian_21@163.com> on 2020/3/6.
//  Copyright © 2020 Jimi. All rights reserved.
//

#ifndef JMYuv420torgb24_h
#define JMYuv420torgb24_h
#ifdef __cplusplus
extern "C"
{
#endif
    
void JMYuv420torgb24_c_init(void);
void JMYuv420torgb24_c(unsigned char *src0, int stride_y, unsigned char *src1, unsigned char *src2, int stride_uv, unsigned char *dst_ori, int width, int height);

#ifdef __cplusplus
}
#endif
#endif
