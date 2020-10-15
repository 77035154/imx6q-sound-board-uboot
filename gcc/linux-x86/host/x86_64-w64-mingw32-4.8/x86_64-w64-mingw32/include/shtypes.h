/*** Autogenerated by WIDL 1.5.29 from /tmp/build-mingw64-toolchain-digit/src/mingw-w64-svn-r5861/mingw-w64-headers/include/shtypes.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __shtypes_h__
#define __shtypes_h__

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <pshpack1.h>
  typedef struct _SHITEMID {
    USHORT cb;
    BYTE abID[1 ];
  } SHITEMID;

#include <poppack.h>
#if (defined(_X86_) && !defined(__x86_64))
#undef __unaligned
#define __unaligned
#endif
  typedef SHITEMID __unaligned *LPSHITEMID;

  typedef const SHITEMID __unaligned *LPCSHITEMID;

#include <pshpack1.h>
  typedef struct _ITEMIDLIST {
    SHITEMID mkid;
  } ITEMIDLIST;

  typedef ITEMIDLIST ITEMIDLIST_RELATIVE;
  typedef ITEMIDLIST ITEMID_CHILD;
  typedef ITEMIDLIST ITEMIDLIST_ABSOLUTE;
#include <poppack.h>

  typedef BYTE_BLOB *wirePIDL;

  typedef ITEMIDLIST __unaligned *LPITEMIDLIST;
  typedef const ITEMIDLIST __unaligned *LPCITEMIDLIST;

  typedef ITEMIDLIST_ABSOLUTE *PIDLIST_ABSOLUTE;
  typedef const ITEMIDLIST_ABSOLUTE *PCIDLIST_ABSOLUTE;
  typedef const ITEMIDLIST_ABSOLUTE __unaligned *PCUIDLIST_ABSOLUTE;
  typedef ITEMIDLIST_RELATIVE *PIDLIST_RELATIVE;
  typedef const ITEMIDLIST_RELATIVE *PCIDLIST_RELATIVE;
  typedef ITEMIDLIST_RELATIVE __unaligned *PUIDLIST_RELATIVE;
  typedef const ITEMIDLIST_RELATIVE __unaligned *PCUIDLIST_RELATIVE;
  typedef ITEMID_CHILD *PITEMID_CHILD;
  typedef const ITEMID_CHILD *PCITEMID_CHILD;
  typedef ITEMID_CHILD __unaligned *PUITEMID_CHILD;
  typedef const ITEMID_CHILD __unaligned *PCUITEMID_CHILD;

  typedef const PCUITEMID_CHILD *PCUITEMID_CHILD_ARRAY;
  typedef const PCUIDLIST_RELATIVE *PCUIDLIST_RELATIVE_ARRAY;
  typedef const PCIDLIST_ABSOLUTE *PCIDLIST_ABSOLUTE_ARRAY;
  typedef const PCUIDLIST_ABSOLUTE *PCUIDLIST_ABSOLUTE_ARRAY;

#ifdef WINBASE_DEFINED_MIDL
  typedef struct _WIN32_FIND_DATAA {
    DWORD bData[80 ];
  } WIN32_FIND_DATAA;

  typedef struct _WIN32_FIND_DATAW {
    DWORD bData[148 ];
  } WIN32_FIND_DATAW;
#endif

  typedef enum tagSTRRET_TYPE {
    STRRET_WSTR = 0,STRRET_OFFSET = 0x1,STRRET_CSTR = 0x2
  } STRRET_TYPE;

#include <pshpack8.h>
  typedef struct _STRRET {
    UINT uType;
    __C89_NAMELESS union {
      LPWSTR pOleStr;
      UINT uOffset;
      char cStr[260 ];
    } DUMMYUNIONNAME;
  } STRRET;

#include <poppack.h>
  typedef STRRET *LPSTRRET;

#include <pshpack1.h>
  typedef struct _SHELLDETAILS {
    int fmt;
    int cxChar;
    STRRET str;
  } SHELLDETAILS;

  typedef struct _SHELLDETAILS *LPSHELLDETAILS;

#include <poppack.h>

  typedef struct _COMDLG_FILTERSPEC {
    LPCWSTR pszName;
    LPCWSTR pszSpec;
  } COMDLG_FILTERSPEC;
typedef GUID KNOWNFOLDERID;
#if 0
typedef KNOWNFOLDERID *REFKNOWNFOLDERID;
#elif defined(__cplusplus)
#define REFKNOWNFOLDERID const KNOWNFOLDERID&
#else
#define REFKNOWNFOLDERID const KNOWNFOLDERID *
#endif
typedef GUID FOLDERTYPEID;
#if 0
typedef FOLDERTYPEID *REFFOLDERTYPEID;
#elif defined(__cplusplus)
#define REFFOLDERTYPEID const FOLDERTYPEID&
#else
#define REFFOLDERTYPEID const FOLDERTYPEID*
#endif
typedef enum tagSHCOLSTATE {
    SHCOLSTATE_TYPE_STR = 0x1,
    SHCOLSTATE_TYPE_INT = 0x2,
    SHCOLSTATE_TYPE_DATE = 0x3,
    SHCOLSTATE_TYPEMASK = 0xf,
    SHCOLSTATE_ONBYDEFAULT = 0x10,
    SHCOLSTATE_SLOW = 0x20,
    SHCOLSTATE_EXTENDED = 0x40,
    SHCOLSTATE_SECONDARYUI = 0x80,
    SHCOLSTATE_HIDDEN = 0x100,
    SHCOLSTATE_PREFER_VARCMP = 0x200
} SHCOLSTATE;
typedef DWORD SHCOLSTATEF;
typedef PROPERTYKEY SHCOLUMNID;
typedef const SHCOLUMNID *LPCSHCOLUMNID;
  extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_v0_0_c_ifspec;
  extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_v0_0_s_ifspec;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __shtypes_h__ */
