
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CertificateStatusType__
#define __gnu_javax_net_ssl_provider_CertificateStatusType__

#pragma interface

#include <java/lang/Enum.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CertificateStatusType;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CertificateStatusType : public ::java::lang::Enum
{

  CertificateStatusType(::java::lang::String *, jint, jint);
public:
  static JArray< ::gnu::javax::net::ssl::provider::CertificateStatusType * > * values();
  static ::gnu::javax::net::ssl::provider::CertificateStatusType * valueOf(::java::lang::String *);
  static ::gnu::javax::net::ssl::provider::CertificateStatusType * OCSP;
  jint __attribute__((aligned(__alignof__( ::java::lang::Enum)))) value;
private:
  static JArray< ::gnu::javax::net::ssl::provider::CertificateStatusType * > * ENUM$VALUES;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CertificateStatusType__