 /* ------------------------------------------------------------------
  * GEM - Graphics Environment for Multimedia
  *
  *  Copyright (c) 2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM
  *	zmoelnig@iem.kug.ac.at
  *  For information on usage and redistribution, and for a DISCLAIMER
  *  OF ALL WARRANTIES, see the file, "GEM.LICENSE.TERMS"
  *
  *  this file has been generated...
  * ------------------------------------------------------------------
  */

#ifndef INCLUDE_GEM_GLRASTERPOS3DV_H_
#define INCLUDE_GEM_GLRASTERPOS3DV_H_

#include "GemGLBase.h"

/*
 CLASS
	GEMglRasterPos3dv
 KEYWORDS
	openGL	0
 DESCRIPTION
	wrapper for the openGL-function
	"glRasterPos3dv( GLdouble* v)"
 */

class GEM_EXTERN GEMglRasterPos3dv : public GemGLBase
{
	CPPEXTERN_HEADER(GEMglRasterPos3dv, GemGLBase)

	public:
	  // Constructor
	  GEMglRasterPos3dv (t_float, t_float, t_float);	// CON
	protected:
	  // Destructor
	  virtual ~GEMglRasterPos3dv ();
	  // Do the rendering
	  virtual void	render (GemState *state);

	// variable
	GLdouble	v[3];		// VAR
	virtual void	vMess(t_float, t_float, t_float);	// FUN

	private:

	// we need one inlet
	  t_inlet *m_inlet;

	// static member functions
         static void    vMessCallback (void*, t_floatarg, t_floatarg, t_floatarg);
};
#endif // for header file