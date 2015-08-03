#ifndef __KL2EDK_AUTOGEN_AtDisplayCallback__
#define __KL2EDK_AUTOGEN_AtDisplayCallback__

#ifdef KL2EDK_INCLUDE_MESSAGES
  #pragma message ( "Including 'AtDisplayCallback.h'" )
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

// KL interface 'AtDisplayCallback'
// Defined at E:\dev\HordeSoftware\fabric2arnold\GenKL/\_AtDisplayCallback.kl:8:1

class AtDisplayCallback
{
public:

  struct VTable
  {
    void (*Callback_E253B18F7761677298CCF3C32F927BFD)(
      ObjectCore const * const *objectCorePtr,
      Traits< UInt32 >::INParam arg0,
      Traits< UInt32 >::INParam arg1,
      Traits< UInt32 >::INParam arg2,
      Traits< UInt32 >::INParam arg3,
      Traits< ExternalArray< RGBA > >::INParam arg4,
      Traits< ExternalArray< Color > >::INParam arg5,
      Traits< Data >::INParam arg6
      );
  };
  
  struct Bits
  {
    ObjectCore *objectCorePtr;
    SwapPtr<VTable const> const *vTableSwapPtrPtr;
  } *m_bits;
  
protected:
  
  friend struct Traits< AtDisplayCallback >;
  static void ConstructEmpty( AtDisplayCallback *self );
  static void ConstructCopy( AtDisplayCallback *self, AtDisplayCallback const *other );
  static void AssignCopy( AtDisplayCallback *self, AtDisplayCallback const *other );
  static void Destruct( AtDisplayCallback *self );
  
public: 
  
  typedef AtDisplayCallback &Result;
  typedef AtDisplayCallback const &INParam;
  typedef AtDisplayCallback &IOParam;
  typedef AtDisplayCallback &OUTParam;
  
  AtDisplayCallback();
  AtDisplayCallback( AtDisplayCallback const &that );
  AtDisplayCallback &operator =( AtDisplayCallback const &that );
  ~AtDisplayCallback();
  void appendDesc( String::IOParam string ) const;
  bool isValid() const;
  operator bool() const;
  bool operator !() const;
  bool operator ==( INParam that );
  bool operator !=( INParam that );
  
  
  void Callback(
    Traits< UInt32 >::INParam arg0,
    Traits< UInt32 >::INParam arg1,
    Traits< UInt32 >::INParam arg2,
    Traits< UInt32 >::INParam arg3,
    Traits< ExternalArray< RGBA > >::INParam arg4,
    Traits< ExternalArray< Color > >::INParam arg5,
    Traits< Data >::INParam arg6
    ) const;
};

inline void Traits<AtDisplayCallback>::ConstructEmpty( AtDisplayCallback &val )
{
  AtDisplayCallback::ConstructEmpty( &val );
}
inline void Traits<AtDisplayCallback>::ConstructCopy( AtDisplayCallback &lhs, AtDisplayCallback const &rhs )
{
  AtDisplayCallback::ConstructCopy( &lhs, &rhs );
}
inline void Traits<AtDisplayCallback>::AssignCopy( AtDisplayCallback &lhs, AtDisplayCallback const &rhs )
{
  AtDisplayCallback::AssignCopy( &lhs, &rhs );
}
inline void Traits<AtDisplayCallback>::Destruct( AtDisplayCallback &val )
{
  AtDisplayCallback::Destruct( &val );
}

}}}

#endif // __KL2EDK_AUTOGEN_AtDisplayCallback__
