
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_ls_DomLSInput__
#define __gnu_xml_dom_ls_DomLSInput__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace ls
        {
            class DomLSInput;
        }
      }
    }
  }
}

class gnu::xml::dom::ls::DomLSInput : public ::java::lang::Object
{

public:
  DomLSInput();
  virtual ::java::io::Reader * getCharacterStream();
  virtual void setCharacterStream(::java::io::Reader *);
  virtual ::java::io::InputStream * getByteStream();
  virtual void setByteStream(::java::io::InputStream *);
  virtual ::java::lang::String * getStringData();
  virtual void setStringData(::java::lang::String *);
  virtual ::java::lang::String * getSystemId();
  virtual void setSystemId(::java::lang::String *);
  virtual ::java::lang::String * getPublicId();
  virtual void setPublicId(::java::lang::String *);
  virtual ::java::lang::String * getBaseURI();
  virtual void setBaseURI(::java::lang::String *);
  virtual ::java::lang::String * getEncoding();
  virtual void setEncoding(::java::lang::String *);
  virtual jboolean getCertifiedText();
  virtual void setCertifiedText(jboolean);
private:
  ::java::io::InputStream * __attribute__((aligned(__alignof__( ::java::lang::Object)))) in;
  ::java::lang::String * systemId;
  ::java::lang::String * publicId;
  ::java::lang::String * baseURI;
  ::java::lang::String * encoding;
  jboolean certifiedText;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_ls_DomLSInput__