#ifndef MLX_HALF_H
#define MLX_HALF_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
#define HAS_FLOAT16
#include <arm_fp16.h>
typedef __fp16 float16_t;
#endif

#ifdef __ARM_FEATURE_BF16
#define HAS_BFLOAT16
#include <arm_bf16.h>
typedef __bf16 bfloat16_t;
#endif

#ifdef __cplusplus
}
#endif

#endif