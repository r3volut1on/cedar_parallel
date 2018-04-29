/*======================================================================================================================

    Copyright 2011, 2012, 2013, 2014, 2015 Institut fuer Neuroinformatik, Ruhr-Universitaet Bochum, Germany
 
    This file is part of cedar.

    cedar is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the
    Free Software Foundation, either version 3 of the License, or (at your
    option) any later version.

    cedar is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
    License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with cedar. If not, see <http://www.gnu.org/licenses/>.

========================================================================================================================

    Institute:   Ruhr-Universitaet Bochum
                 Institut fuer Neuroinformatik

    File:        DoubleData.h

    Maintainer:  Oliver Lomp
    Email:       oliver.lomp@ini.ruhr-uni-bochum.de
    Date:        2011 12 09

    Description: This is a dummy header for the typedef DoubleData (which is actually a
                 cedar::aux::DataTemplate<double>).

    Credits:

======================================================================================================================*/

#ifndef CEDAR_AUX_DOUBLE_DATA_H
#define CEDAR_AUX_DOUBLE_DATA_H

// CEDAR INCLUDES
#include "cedar/auxiliaries/MatData.h"
#include "cedar/auxiliaries/math/tools.h"

// FORWARD DECLARATIONS
#include "cedar/auxiliaries/DoubleData.fwd.h"

/*!@brief Data containing matrices.
 */
class cedar::aux::DoubleData : public cedar::aux::MatData
{
  //--------------------------------------------------------------------------------------------------------------------
  // macros
  //--------------------------------------------------------------------------------------------------------------------

  //--------------------------------------------------------------------------------------------------------------------
  // nested types
  //--------------------------------------------------------------------------------------------------------------------
private:
  //! The super class of this type.
  typedef cedar::aux::MatData Super;

  //--------------------------------------------------------------------------------------------------------------------
  // constructors and destructor
  //--------------------------------------------------------------------------------------------------------------------
public:
  //!@brief The standard constructor.
  DoubleData()
  :
  Super(cv::Mat(1, 1, CV_64F))
  {
  }

  //!@brief This constructor initializes the internal data to a value.
  DoubleData(double value)
  :
  Super(cv::Mat(1, 1, CV_64F, value))
  {
  }

  //--------------------------------------------------------------------------------------------------------------------
  // public methods
  //--------------------------------------------------------------------------------------------------------------------
public:
  /*!@brief Returns a const reference to the stored parameter value.
   */
  const double& getData() const
  {
    return this->Super::getData().at<double>(0, 0);
  }

  /*!@brief Returns a reference to the stored parameter value.
   */
  double& getData()
  {
    return this->Super::getData().at<double>(0, 0);
  }

  /*!@brief Sets the given value in the parameter.
   */
  void setData(double value)
  {
    this->Super::getData().at<double>(0, 0) = value;
  }

  //--------------------------------------------------------------------------------------------------------------------
  // protected methods
  //--------------------------------------------------------------------------------------------------------------------
protected:
  // none yet

  //--------------------------------------------------------------------------------------------------------------------
  // private methods
  //--------------------------------------------------------------------------------------------------------------------
private:
  // none yet

  //--------------------------------------------------------------------------------------------------------------------
  // members
  //--------------------------------------------------------------------------------------------------------------------
protected:
  // none yet
};

#endif // CEDAR_AUX_DOUBLE_DATA_H