/* Copyright © 2023-2024 Apple Inc.                   */
/*                                                    */
/* This file is auto-generated. Do not edit manually. */
/*                                                    */

#include "mlx/c/transforms_impl_try.h"
#include "mlx/c/result.h"
#include "mlx/c/transforms_impl.h"

#include "mlx/c/mlx.h"
#include "mlx/c/private/array.h"
#include "mlx/c/private/closure.h"
#include "mlx/c/private/future.h"
#include "mlx/c/private/io.h"
#include "mlx/c/private/map.h"
#include "mlx/c/private/stream.h"
#include "mlx/c/private/string.h"
#include "mlx/c/private/utils.h"

extern "C" mlx_vector_array_result mlx_detail_vmap_replace_try(
    const mlx_vector_array inputs,
    const mlx_vector_array s_inputs,
    const mlx_vector_array s_outputs,
    const int* in_axes,
    size_t num_in_axes,
    const int* out_axes,
    size_t num_out_axes) {
  MLX_C_ARRAYS_TRY(mlx::core::detail::vmap_replace(
      MLX_CPP_ARRVEC(inputs),
      MLX_CPP_ARRVEC(s_inputs),
      MLX_CPP_ARRVEC(s_outputs),
      MLX_CPP_INTVEC(in_axes, num_in_axes),
      MLX_CPP_INTVEC(out_axes, num_out_axes)))
}
extern "C" mlx_vector_vector_array_result mlx_detail_vmap_trace_try(
    mlx_closure fun,
    const mlx_vector_array inputs,
    const int* in_axes,
    size_t num_in_axes) {
  MLX_C_VECTORARRAYPAIR_TRY(mlx::core::detail::vmap_trace(
      MLX_CPP_CLOSURE(fun),
      MLX_CPP_ARRVEC(inputs),
      MLX_CPP_INTVEC(in_axes, num_in_axes)))
}
