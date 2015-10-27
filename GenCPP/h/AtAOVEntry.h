#ifndef __KL2EDK_AUTOGEN_AtAOVEntry__
#define __KL2EDK_AUTOGEN_AtAOVEntry__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtAOVEntry.h'" )
#endif

////////////////////////////////////////////////////////////////
// THIS FILE IS AUTOMATICALLY GENERATED -- DO NOT MODIFY!!
////////////////////////////////////////////////////////////////
// Generated by kl2edk version 1.15.3
////////////////////////////////////////////////////////////////

#include <FabricEDK.h>
#if FABRIC_EDK_VERSION_MAJ != 1 || FABRIC_EDK_VERSION_MIN != 15
# error "This file needs to be rebuilt for the current EDK version!"
#endif

#include "global.h"

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'AtAOVEntry'
// Defined at GenKL//ai_universe.kl:19:1

struct AtAOVEntry
{
  typedef AtAOVEntry &Result;
  typedef AtAOVEntry const &INParam;
  typedef AtAOVEntry &IOParam;
  
  String name;
  UInt8 type;
  SInt32 blend_mode;
};

inline void Traits<AtAOVEntry>::ConstructEmpty( AtAOVEntry &val )
{
  Traits< String >::ConstructEmpty( val.name );
  Traits< UInt8 >::ConstructEmpty( val.type );
  Traits< SInt32 >::ConstructEmpty( val.blend_mode );
}
inline void Traits<AtAOVEntry>::ConstructCopy( AtAOVEntry &lhs, AtAOVEntry const &rhs )
{
  Traits< String >::ConstructCopy( lhs.name, rhs.name );
  Traits< UInt8 >::ConstructCopy( lhs.type, rhs.type );
  Traits< SInt32 >::ConstructCopy( lhs.blend_mode, rhs.blend_mode );
}
inline void Traits<AtAOVEntry>::AssignCopy( AtAOVEntry &lhs, AtAOVEntry const &rhs )
{
  Traits< String >::AssignCopy( lhs.name, rhs.name );
  Traits< UInt8 >::AssignCopy( lhs.type, rhs.type );
  Traits< SInt32 >::AssignCopy( lhs.blend_mode, rhs.blend_mode );
}
inline void Traits<AtAOVEntry>::Destruct( AtAOVEntry &val )
{
  Traits< SInt32 >::Destruct( val.blend_mode );
  Traits< UInt8 >::Destruct( val.type );
  Traits< String >::Destruct( val.name );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtAOVEntry__
