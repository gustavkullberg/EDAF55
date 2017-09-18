#ifndef __CLASS_TODO_ALARMCLOCK_USERINPUT_HEADER
#define __CLASS_TODO_ALARMCLOCK_USERINPUT_HEADER

struct todo_AlarmClock_UserInput_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct todo_AlarmClock_UserInput_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[1];
};

typedef GC_STRUCT_BEGIN(todo_AlarmClock_UserInput_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(todo_AlarmClock_UserInput_ClassStatic) todo_AlarmClock_UserInput_ClassStatic;

typedef GC_STRUCT_BEGIN(todo_AlarmClock_UserInput)
  GC_STRUCT_VAR(struct todo_AlarmClock_UserInput_ClassStruct *,class);
  volatile GC_STRUCT_VAR(struct todo_AlarmClock_ClassStruct *,_that_);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_VAR(JInt,_todo_AlarmClock_UserInput_prevState);
  volatile GC_STRUCT_VAR(JInt,_todo_AlarmClock_UserInput_newState);
  volatile GC_STRUCT_REF(todo_AlarmClock_Time,_todo_AlarmClock_UserInput_time);
GC_STRUCT_END(todo_AlarmClock_UserInput) todo_AlarmClock_UserInput;

struct todo_AlarmClock_UserInput_MethodTblStruct {
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
  void (*run)(void **__eFlag__, GC_PARAM(todo_AlarmClock_UserInput,this));
};
extern struct todo_AlarmClock_UserInput_MethodTblStruct todo_AlarmClock_UserInput_MethodTbl ;

#endif
