#ifndef __KL2EDK_AUTOGEN_Mat22_d__
#define __KL2EDK_AUTOGEN_Mat22_d__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'Mat22_d.h'" )
#endif

////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
////////////////////////////////////////////////////////////////
// Generated by kl2edk version 2.1.0-alpha2
////////////////////////////////////////////////////////////////

#include <FabricEDK.h>
#if FABRIC_EDK_VERSION_MAJ != 2 || FABRIC_EDK_VERSION_MIN != 1
# error "This file needs to be rebuilt for the current EDK version!"
#endif

#include "global.h"
#include "Vec2_d.h"

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'Mat22_d'
// Defined at Mat22_d.kl:21:1

struct Mat22_d
{
  typedef Mat22_d &Result;
  typedef Mat22_d const &INParam;
  typedef Mat22_d &IOParam;
  typedef Mat22_d &OUTParam;
  
  Vec2_d row0;
  Vec2_d row1;
};

inline void Traits<Mat22_d>::ConstructEmpty( Mat22_d &val )
{
  Traits< Vec2_d >::ConstructEmpty( val.row0 );
  Traits< Vec2_d >::ConstructEmpty( val.row1 );
}
inline void Traits<Mat22_d>::ConstructCopy( Mat22_d &lhs, Mat22_d const &rhs )
{
  Traits< Vec2_d >::ConstructCopy( lhs.row0, rhs.row0 );
  Traits< Vec2_d >::ConstructCopy( lhs.row1, rhs.row1 );
}
inline void Traits<Mat22_d>::AssignCopy( Mat22_d &lhs, Mat22_d const &rhs )
{
  Traits< Vec2_d >::AssignCopy( lhs.row0, rhs.row0 );
  Traits< Vec2_d >::AssignCopy( lhs.row1, rhs.row1 );
}
inline void Traits<Mat22_d>::Destruct( Mat22_d &val )
{
  Traits< Vec2_d >::Destruct( val.row1 );
  Traits< Vec2_d >::Destruct( val.row0 );
}
}}}

#endif // __KL2EDK_AUTOGEN_Mat22_d__
