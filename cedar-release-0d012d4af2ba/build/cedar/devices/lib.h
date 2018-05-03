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

    File:        lib.h

    Maintainer:  Oliver Lomp
    Email:       oliver.lomp@ini.ruhr-uni-bochum.de
    Date:        2011 08 10

    Description: This file is autogenerated from the lib.h.in in the cedar directory. Do not change the
                 automatically generated files!

    Credits:

======================================================================================================================*/

#ifndef CEDAR_DEV_LIB_H
#define CEDAR_DEV_LIB_H

// CEDAR INCLUDES
#include "cedar/defines.h"

#ifdef CEDAR_OS_WINDOWS

#ifdef CEDAR_COMPILER_MSVC
  #pragma warning(disable: 4251)
#endif // CEDAR_COMPILER_MSVC

  #ifdef CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DECLARE_DEV_CLASS(CLASS_NAME) CEDAR_DECLARE_CLASS_PREFIXED(__declspec(dllexport), CLASS_NAME)
    #define CEDAR_DECLARE_DEV_CLASS_INTRUSIVE(CLASS_NAME) CEDAR_DECLARE_CLASS_INTRUSIVE_PREFIXED(__declspec(dllexport), CLASS_NAME)
    #define CEDAR_DEV_LIB_EXPORT __declspec(dllexport)
  #else // CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DECLARE_DEV_CLASS(CLASS_NAME) CEDAR_DECLARE_CLASS_PREFIXED(__declspec(dllimport), CLASS_NAME)
    #define CEDAR_DECLARE_DEV_CLASS_INTRUSIVE(CLASS_NAME) CEDAR_DECLARE_CLASS_INTRUSIVE_PREFIXED(__declspec(dllimport), CLASS_NAME)
    #define CEDAR_DEV_LIB_EXPORT __declspec(dllimport)
  #endif // CEDAR_LIB_EXPORTS_DEV
  
  #ifdef CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_INSTANTIATE_DEV_TEMPLATE(TEMPLATE) \
      template class __declspec(dllexport) TEMPLATE
  #else
    #define CEDAR_INSTANTIATE_DEV_TEMPLATE(TEMPLATE) \
       extern template class __declspec(dllimport) TEMPLATE
  #endif
  
  // Singleton template instantiation code
  #ifdef CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DEV_EXPORT_SINGLETON(FULL_CLASS_NAME) \
        namespace cedar \
        { \
          namespace aux \
          { \
            template class __declspec(dllexport) cedar::aux::Singleton<FULL_CLASS_NAME>; \
          } \
        }
  #else // CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DEV_EXPORT_SINGLETON(FULL_CLASS_NAME) \
        namespace cedar \
        { \
          namespace aux \
          { \
            extern template class __declspec(dllimport) cedar::aux::Singleton<FULL_CLASS_NAME>; \
          } \
        }
  #endif // CEDAR_LIB_EXPORTS_DEV
  
  #ifdef CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DEV_SINGLETON(CLASS_NAME) \
        namespace cedar \
        { \
          namespace aux \
          { \
            template class __declspec(dllexport) cedar::aux::Singleton<cedar::dev::CLASS_NAME>; \
          } \
          namespace dev \
          { \
            typedef cedar::aux::Singleton<cedar::dev::CLASS_NAME> CLASS_NAME ## Singleton; \
          } \
        }
  #else // CEDAR_LIB_EXPORTS_DEV
    #define CEDAR_DEV_SINGLETON(CLASS_NAME) \
        namespace cedar \
        { \
          namespace aux \
          { \
            extern template class __declspec(dllimport) cedar::aux::Singleton<cedar::dev::CLASS_NAME>; \
          } \
          namespace dev \
          { \
            typedef cedar::aux::Singleton<cedar::dev::CLASS_NAME> CLASS_NAME ## Singleton; \
          } \
        }
  #endif // CEDAR_LIB_EXPORTS_DEV
  
#else // CEDAR_COMPILER_MSVC

  #define CEDAR_DECLARE_DEV_CLASS(CLASS_NAME) CEDAR_DECLARE_CLASS(CLASS_NAME)
  #define CEDAR_DECLARE_DEV_CLASS_INTRUSIVE(CLASS_NAME) CEDAR_DECLARE_CLASS_INTRUSIVE(CLASS_NAME)
  #define CEDAR_DEV_LIB_EXPORT
  #define CEDAR_INSTANTIATE_DEV_TEMPLATE(TEMPLATE) 
  
  
  // Singleton template instantiation code
  #define CEDAR_DEV_EXPORT_SINGLETON(FULL_CLASS_NAME)
  #define CEDAR_DEV_SINGLETON(CLASS_NAME) \
    namespace cedar \
    { \
      namespace dev \
      { \
        typedef cedar::aux::Singleton<cedar::dev::CLASS_NAME> CLASS_NAME ## Singleton; \
      } \
    }

#endif // CEDAR_COMPILER_MSVC

#endif // CEDAR_DEV_LIB_H
