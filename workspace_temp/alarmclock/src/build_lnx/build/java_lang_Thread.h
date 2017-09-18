#ifndef __CLASS_JAVA_LANG_THREAD_HEADER
#define __CLASS_JAVA_LANG_THREAD_HEADER

struct java_lang_Thread_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct java_lang_Thread_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(java_lang_Thread_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JInt,_java_lang_Thread_MAX_PRIORITY);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Thread_MIN_PRIORITY);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Thread_NORM_PRIORITY);
GC_STRUCT_END(java_lang_Thread_ClassStatic) java_lang_Thread_ClassStatic;

typedef GC_STRUCT_BEGIN(java_lang_Thread)
  GC_STRUCT_VAR(struct java_lang_Thread_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JLong,_java_lang_Thread_target);
  volatile GC_STRUCT_VAR(JInt,_java_lang_Thread_priority);
  volatile GC_STRUCT_REF(java_lang_Runnable,_java_lang_Thread_targetRun);
  volatile GC_STRUCT_VAR(JLong,_java_lang_Thread_TSD);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Thread_isAlive);
  volatile GC_STRUCT_REF(java_lang_String,_java_lang_Thread_name);
GC_STRUCT_END(java_lang_Thread) java_lang_Thread;

struct java_lang_Thread_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct java_lang_String) (*getName)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*inheritPriority)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  JLong (*createThread)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*start)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*run)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*sleep_long)(JLong millis);
  JBoolean (*isAlive)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  JBoolean (*isDaemon)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*sleep_long_int)(JLong millis,JInt nanos);
  JBoolean (*isInterrupted)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  JBoolean (*interrupted)();
  void (*interrupt)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  GC___REF(struct java_lang_Thread) (*currentThread)();
  JInt (*getPriority)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*setPriority_int)(void **__eFlag__, GC_PARAM(java_lang_Thread,this),JInt priority);
  void (*join)(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
  void (*join_long)(void **__eFlag__, GC_PARAM(java_lang_Thread,this),JLong millis);
  void (*join_long_int)(void **__eFlag__, GC_PARAM(java_lang_Thread,this),JLong millis,JInt nanos);
  void (*yield)();
};
extern struct java_lang_Thread_MethodTblStruct java_lang_Thread_MethodTbl ;

#endif
