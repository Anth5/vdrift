/************************************************************************/
/*                                                                      */
/* This file is part of VDrift.                                         */
/*                                                                      */
/* VDrift is free software: you can redistribute it and/or modify       */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or    */
/* (at your option) any later version.                                  */
/*                                                                      */
/* VDrift is distributed in the hope that it will be useful,            */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of       */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        */
/* GNU General Public License for more details.                         */
/*                                                                      */
/* You should have received a copy of the GNU General Public License    */
/* along with VDrift.  If not, see <http://www.gnu.org/licenses/>.      */
/*                                                                      */
/************************************************************************/

#ifndef _TOBULLET_H
#define _TOBULLET_H

#include "mathvector.h"
#include "quaternion.h"
#include "LinearMath/btVector3.h"
#include "LinearMath/btQuaternion.h"

inline btVector3 cast(const MATHVECTOR<btScalar, 3> & v)
{
	return btVector3(v[0], v[1], v[2]);
}

inline btQuaternion cast(const QUATERNION<btScalar> & q)
{
	return btQuaternion(q.x(), q.y(), q.z(), q.w());
}

inline MATHVECTOR<btScalar, 3> cast(const btVector3 & v)
{
	return MATHVECTOR<btScalar, 3>(v.x(), v.y(), v.z());
}

inline QUATERNION<btScalar> cast(const btQuaternion & q)
{
	return QUATERNION<btScalar>(q.x(), q.y(), q.z(), q.w());
}

#endif // _TOBULLET_H
