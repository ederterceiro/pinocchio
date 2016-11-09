//
// Copyright (c) 2016 CNRS
//
// This file is part of Pinocchio
// Pinocchio is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// Pinocchio is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// Pinocchio If not, see
// <http://www.gnu.org/licenses/>.

#ifndef __se3_sqraba_hpp__
#define __se3_sqraba_hpp__

#include "pinocchio/multibody/model.hpp"
#include "pinocchio/algorithm/check.hpp"

namespace se3
{
  ///
  /// \brief The Articulated-Body algorithm, square-root version.
  /// SQR-ABA give the same results as classical ABA, however using different
  /// intermediary steps.
  ///
  /// \param[in] model The model structure of the rigid body system.
  /// \param[in] data The data structure of the rigid body system.
  /// \param[in] q The joint configuration vector (dim model.nq).
  /// \param[in] v The joint velocity vector (dim model.nv).
  /// \param[in] tau The joint torque vector (dim model.nv).
  ///
  /// \return The current joint acceleration stored in data.ddq.
  ///
  inline const Eigen::VectorXd &
  sqraba(const Model & model,
         Data & data,
         const Eigen::VectorXd & q,
         const Eigen::VectorXd & v,
         const Eigen::VectorXd & tau);

} // namespace se3

/* --- Details -------------------------------------------------------------------- */
#include "pinocchio/algorithm/sqraba.hxx"

#endif // ifndef __se3_sqraba_hpp__
