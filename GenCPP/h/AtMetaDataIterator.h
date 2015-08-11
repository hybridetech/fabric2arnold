#ifndef __KL2EDK_AUTOGEN_AtMetaDataIterator__
#define __KL2EDK_AUTOGEN_AtMetaDataIterator__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtMetaDataIterator.h'" )
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

// KL struct 'AtMetaDataIterator'
// Defined at E:\dev\HordeSoftware\DemoArnoldApp\fabric2arnold\GenKL/\_opaque_types.kl:41:1

struct AtMetaDataIterator
{
  typedef AtMetaDataIterator &Result;
  typedef AtMetaDataIterator const &INParam;
  typedef AtMetaDataIterator &IOParam;
  typedef AtMetaDataIterator &OUTParam;
  
  Data _handle;
};

inline void Traits<AtMetaDataIterator>::ConstructEmpty( AtMetaDataIterator &val )
{
  Traits< Data >::ConstructEmpty( val._handle );
}
inline void Traits<AtMetaDataIterator>::ConstructCopy( AtMetaDataIterator &lhs, AtMetaDataIterator const &rhs )
{
  Traits< Data >::ConstructCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtMetaDataIterator>::AssignCopy( AtMetaDataIterator &lhs, AtMetaDataIterator const &rhs )
{
  Traits< Data >::AssignCopy( lhs._handle, rhs._handle );
}
inline void Traits<AtMetaDataIterator>::Destruct( AtMetaDataIterator &val )
{
  Traits< Data >::Destruct( val._handle );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtMetaDataIterator__
