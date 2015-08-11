#ifndef __KL2EDK_AUTOGEN_AtParamValue__
#define __KL2EDK_AUTOGEN_AtParamValue__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtParamValue.h'" )
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

// KL struct 'AtParamValue'
// Defined at E:\dev\HordeSoftware\DemoArnoldApp\fabric2arnold\GenKL/\ai_params.kl:8:1

struct AtParamValue
{
  typedef AtParamValue &Result;
  typedef AtParamValue const &INParam;
  typedef AtParamValue &IOParam;
  typedef AtParamValue &OUTParam;
  
  Data param_handle;
};

inline void Traits<AtParamValue>::ConstructEmpty( AtParamValue &val )
{
  Traits< Data >::ConstructEmpty( val.param_handle );
}
inline void Traits<AtParamValue>::ConstructCopy( AtParamValue &lhs, AtParamValue const &rhs )
{
  Traits< Data >::ConstructCopy( lhs.param_handle, rhs.param_handle );
}
inline void Traits<AtParamValue>::AssignCopy( AtParamValue &lhs, AtParamValue const &rhs )
{
  Traits< Data >::AssignCopy( lhs.param_handle, rhs.param_handle );
}
inline void Traits<AtParamValue>::Destruct( AtParamValue &val )
{
  Traits< Data >::Destruct( val.param_handle );
}
}}}

#endif // __KL2EDK_AUTOGEN_AtParamValue__
