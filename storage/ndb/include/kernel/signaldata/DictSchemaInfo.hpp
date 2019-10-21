/*
   Copyright (C) 2003-2006 MySQL AB
    All rights reserved. Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2.0,
   as published by the Free Software Foundation.

   This program is also distributed with certain software (including
   but not limited to OpenSSL) that is licensed under separate terms,
   as designated in a particular file or component or in included license
   documentation.  The authors of MySQL hereby grant you an additional
   permission to link the program and your derivative works with the
   separately licensed software that they have included with MySQL.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License, version 2.0, for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef DICT_SCHEMA_INFO_HPP
#define DICT_SCHEMA_INFO_HPP

#include "SignalData.hpp"

class DictSchemaInfo {
  /**
   * Sender(s) / Reciver(s)
   */
  friend class Dbdict;
  
public:
  STATIC_CONST( HeaderLength = 3 );
  STATIC_CONST( DataLength = 22 );
  
private:  
  Uint32 senderRef;
  Uint32 offset; 
  Uint32 totalLen; 
  
  /**
   * Length in this = signal->length() - 3
   * Sender block ref = signal->senderBlockRef()
   */
  
  Uint32 schemaInfoData[22];
};

#endif
