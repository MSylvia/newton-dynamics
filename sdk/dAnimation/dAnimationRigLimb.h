/* Copyright (c) <2003-2016> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/

#ifndef __D_ANIMATION_RIG_LIMB_H__
#define __D_ANIMATION_RIG_LIMB_H__

#include "dAnimationStdAfx.h"
#include "dAnimationRigJoint.h"

class dAnimationRigLimb: public dAnimationRigJoint
{
	public:
	dAnimationRigLimb(dAnimationRigJoint* const parent, NewtonBody* const body);
	virtual ~dAnimationRigLimb();

	virtual NewtonBody* GetNewtonBody() const;

	protected:
	NewtonBody* m_newtonBody;
};

#endif

