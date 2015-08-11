#ifndef __KL2EDK_AUTOGEN_AtMetaDataStore__
#define __KL2EDK_AUTOGEN_AtMetaDataStore__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtMetaDataStore.h'" )
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

namespace Fabric { namespace EDK { namespace KL {

// KL struct 'AtMetaDataStore'
// Defined at E:\dev\HordeSoftware\DemoArnoldApp\fabric2arnold\GenKL/\_opaque_types.kl:91:1

struct AtMetaDataStore
{
  typedef AtMetaDataStore &Result;
  typedef AtMetaDataStore const &INParam;
  typedef AtMetaDataStore &IOParam;
  typedef AtMetaDataStore &OUTParam;
  
  Data _handle;
};

inline void Traits<AtMetaDataStore>::ConstructEmpty( AtMetaDataStore &val )
{
  Traits< Data >::ConstructEmpty( val._handle );
}
inline void Traits<AtMetaDataStore>::ConstructCopy( AtMetaDataStore &lhs, AtMetaDataStore const &rhs )
{
  Traits< Data >::ConstructCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtMetaDataStore>::AssignCopy( AtMetaDataStore &lhs, AtMetaDataStore const &rhs )
{
  Traits< Data >::AssignCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtMetaDataStore>::Destruct( AtMetaDataStore &val )
{
  Traits< Data >::Destruct( val._handle );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtMetaDataStore__
