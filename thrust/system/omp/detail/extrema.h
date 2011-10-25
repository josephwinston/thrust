/*
 *  Copyright 2008-2011 NVIDIA Corporation
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
#include <thrust/system/omp/detail/tag.h>
#include <thrust/detail/backend/generic/extrema.h>

namespace thrust
{
namespace system
{
namespace omp
{
namespace detail
{

template <typename ForwardIterator, typename BinaryPredicate>
ForwardIterator max_element(tag,
                            ForwardIterator first, 
                            ForwardIterator last,
                            BinaryPredicate comp)
{
  // omp prefers generic::max_element to cpp::max_element
  return thrust::detail::backend::generic::max_element(tag(), first, last, comp);
} // end max_element()

template <typename ForwardIterator, typename BinaryPredicate>
ForwardIterator min_element(tag,
                            ForwardIterator first, 
                            ForwardIterator last,
                            BinaryPredicate comp)
{
  // omp prefers generic::min_element to cpp::min_element
  return thrust::detail::backend::generic::min_element(tag(), first, last, comp);
} // end min_element()

template <typename ForwardIterator, typename BinaryPredicate>
thrust::pair<ForwardIterator,ForwardIterator> minmax_element(tag,
                                                             ForwardIterator first, 
                                                             ForwardIterator last,
                                                             BinaryPredicate comp)
{
  // omp prefers generic::minmax_element to cpp::minmax_element
  return thrust::detail::backend::generic::minmax_element(tag(), first, last, comp);
} // end minmax_element()

} // end detail
} // end omp
} // end system
} // end thrust

