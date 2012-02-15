/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>

// the purpose of this header is to #include the
// default_decomposition.h header of the host and device systems.

#if   THRUST_HOST_SYSTEM == THRUST_HOST_SYSTEM_CPP
#include <thrust/system/cpp/detail/default_decomposition.h>
#elif THRUST_HOST_SYSTEM == THRUST_HOST_SYSTEM_OMP
#include <thrust/system/omp/detail/default_decomposition.h>
#elif THRUST_HOST_SYSTEM == THRUST_HOST_SYSTEM_TBB
#include <thrust/system/tbb/detail/default_decomposition.h>
#else
#error "Unknown host system."
#endif // THRUST_HOST_SYSTEM


#if   THRUST_DEVICE_BACKEND == THRUST_DEVICE_BACKEND_CUDA
#include <thrust/system/cuda/detail/default_decomposition.h>
#elif THRUST_DEVICE_BACKEND == THRUST_DEVICE_BACKEND_OMP
#include <thrust/system/omp/detail/default_decomposition.h>
#elif THRUST_DEVICE_BACKEND == THRUST_DEVICE_BACKEND_TBB
#include <thrust/system/tbb/detail/default_decomposition.h>
#else
#error "Unknown device system."
#endif // THRUST_DEVICE_BACKEND
