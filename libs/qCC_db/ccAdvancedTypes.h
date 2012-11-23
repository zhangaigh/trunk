//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################
//
//*********************** Last revision of this file ***********************
//$Author:: dgm                                                            $
//$Rev:: 1918                                                              $
//$LastChangedDate:: 2011-10-16 18:18:05 +0200 (dim., 16 oct. 2011)        $
//**************************************************************************
//

#ifndef CC_ADVANCED_TYPES_HEADER
#define CC_ADVANCED_TYPES_HEADER

//Local
#include "ccBasicTypes.h"
#include "ccChunkedArray.h"

/***************************************************
	  Advanced cloudCompare types (containers)
***************************************************/

//! Array of compressed 3D normals (single index)
class NormsIndexesTableType : public ccChunkedArray<1,normsType>
{
public:
	//! Default constructor
	NormsIndexesTableType() : ccChunkedArray<1,normsType>("Compressed normals") {}

	//inherited from ccChunkedArray/ccHObject
    virtual CC_CLASS_ENUM getClassID() const {return CC_NORMAL_INDEXES_ARRAY;};
};

//! Array of (uncompressed) 3D normals (Nx,Ny,Nz)
class NormsTableType : public ccChunkedArray<3,PointCoordinateType>
{
public:
	//! Default constructor
	NormsTableType() : ccChunkedArray<3,PointCoordinateType>("Normals") {}

	//inherited from ccChunkedArray/ccHObject
    virtual CC_CLASS_ENUM getClassID() const {return CC_NORMALS_ARRAY;};
};

//! Array of RGB colors for each point
class ColorsTableType : public ccChunkedArray<3,colorType>
{
public:
	//! Default constructor
	ColorsTableType() : ccChunkedArray<3,colorType>("RGB colors") {}

	//inherited from ccChunkedArray/ccHObject
    virtual CC_CLASS_ENUM getClassID() const {return CC_RGB_COLOR_ARRAY;};
};

//! Array of 2D texture coordinates
class TextureCoordsContainer : public ccChunkedArray<2,float>
{
public:
	//! Default constructor
	TextureCoordsContainer() : ccChunkedArray<2,float>("Texture coordinates") {}

	//inherited from ccChunkedArray/ccHObject
    virtual CC_CLASS_ENUM getClassID() const {return CC_TEX_COORDS_ARRAY;};
};


#endif