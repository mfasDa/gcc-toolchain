
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_beans_decoder_ObjectContext__
#define __gnu_java_beans_decoder_ObjectContext__

#pragma interface

#include <gnu/java/beans/decoder/AbstractObjectContext.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace beans
      {
        namespace decoder
        {
            class Context;
            class ObjectContext;
        }
      }
    }
  }
}

class gnu::java::beans::decoder::ObjectContext : public ::gnu::java::beans::decoder::AbstractObjectContext
{

public: // actually package-private
  ObjectContext(::java::lang::Object *);
  ObjectContext(::java::lang::String *, ::java::lang::Object *);
  ObjectContext();
public:
  void addParameterObject(::java::lang::Object *);
  void notifyStatement(::gnu::java::beans::decoder::Context *);
  ::java::lang::Object * endContext(::gnu::java::beans::decoder::Context *);
  jboolean subContextFailed();
  static ::java::lang::Class class$;
};

#endif // __gnu_java_beans_decoder_ObjectContext__