// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Timestamp.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _IDL_MSGS_IDL_TIMESTAMP_H_
#define _IDL_MSGS_IDL_TIMESTAMP_H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(Timestamp_SOURCE)
#define Timestamp_DllAPI __declspec( dllexport )
#else
#define Timestamp_DllAPI __declspec( dllimport )
#endif // Timestamp_SOURCE
#else
#define Timestamp_DllAPI
#endif
#else
#define Timestamp_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

namespace idl_msgs
{
    namespace idl
    {
        /*!
         * @brief This class represents the structure Timestamp defined by the user in the IDL file.
         * @ingroup TIMESTAMP
         */
        class Timestamp
        {
        public:

            /*!
             * @brief Default constructor.
             */
            eProsima_user_DllExport Timestamp();

            /*!
             * @brief Default destructor.
             */
            eProsima_user_DllExport virtual ~Timestamp();

            /*!
             * @brief Copy constructor.
             * @param x Reference to the object idl_msgs::idl::Timestamp that will be copied.
             */
            eProsima_user_DllExport Timestamp(const Timestamp &x);

            /*!
             * @brief Move constructor.
             * @param x Reference to the object idl_msgs::idl::Timestamp that will be copied.
             */
            eProsima_user_DllExport Timestamp(Timestamp &&x);

            /*!
             * @brief Copy assignment.
             * @param x Reference to the object idl_msgs::idl::Timestamp that will be copied.
             */
            eProsima_user_DllExport Timestamp& operator=(const Timestamp &x);

            /*!
             * @brief Move assignment.
             * @param x Reference to the object idl_msgs::idl::Timestamp that will be copied.
             */
            eProsima_user_DllExport Timestamp& operator=(Timestamp &&x);

            /*!
             * @brief This function sets a value in member sec
             * @param _sec New value for member sec
             */
            eProsima_user_DllExport void sec(int64_t _sec);

            /*!
             * @brief This function returns the value of member sec
             * @return Value of member sec
             */
            eProsima_user_DllExport int64_t sec() const;

            /*!
             * @brief This function returns a reference to member sec
             * @return Reference to member sec
             */
            eProsima_user_DllExport int64_t& sec();
            /*!
             * @brief This function sets a value in member ns
             * @param _ns New value for member ns
             */
            eProsima_user_DllExport void ns(int32_t _ns);

            /*!
             * @brief This function returns the value of member ns
             * @return Value of member ns
             */
            eProsima_user_DllExport int32_t ns() const;

            /*!
             * @brief This function returns a reference to member ns
             * @return Reference to member ns
             */
            eProsima_user_DllExport int32_t& ns();

            /*!
             * @brief This function returns the maximum serialized size of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function returns the serialized size of a data depending on the buffer alignment.
             * @param data Data which is calculated its serialized size.
             * @param current_alignment Buffer alignment.
             * @return Serialized size.
             */
            eProsima_user_DllExport static size_t getCdrSerializedSize(const idl_msgs::idl::Timestamp& data, size_t current_alignment = 0);


            /*!
             * @brief This function serializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

            /*!
             * @brief This function deserializes an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



            /*!
             * @brief This function returns the maximum serialized size of the Key of an object
             * depending on the buffer alignment.
             * @param current_alignment Buffer alignment.
             * @return Maximum serialized size.
             */
            eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

            /*!
             * @brief This function tells you if the Key has been defined for this type
             */
            eProsima_user_DllExport static bool isKeyDefined();

            /*!
             * @brief This function serializes the key members of an object using CDR serialization.
             * @param cdr CDR serialization object.
             */
            eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

        private:
            int64_t m_sec;
            int32_t m_ns;
        };
    }
}

#endif // _IDL_MSGS_IDL_TIMESTAMP_H_