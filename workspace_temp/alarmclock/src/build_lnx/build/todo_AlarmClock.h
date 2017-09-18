#ifndef __CLASS_TODO_ALARMCLOCK_HEADER
#define __CLASS_TODO_ALARMCLOCK_HEADER

struct todo_AlarmClock_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct todo_AlarmClock_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(todo_AlarmClock_ClassStatic)
  /* static fields go here, from this class and its ancestors */
GC_STRUCT_END(todo_AlarmClock_ClassStatic) todo_AlarmClock_ClassStatic;

typedef GC_STRUCT_BEGIN(todo_AlarmClock)
  GC_STRUCT_VAR(struct todo_AlarmClock_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(done_ClockInput,_todo_AlarmClock_input);
  volatile GC_STRUCT_REF(done_ClockOutput,_todo_AlarmClock_output);
  volatile GC_STRUCT_REF(se_lth_cs_realtime_semaphore_Semaphore,_todo_AlarmClock_signal);
  volatile GC_STRUCT_REF(se_lth_cs_realtime_semaphore_Semaphore,_todo_AlarmClock_alarmOnOff);
  volatile GC_STRUCT_REF(se_lth_cs_realtime_semaphore_Semaphore,_todo_AlarmClock_mutex);
  volatile GC_STRUCT_REF(todo_AlarmClock_Time,_todo_AlarmClock_time);
  volatile GC_STRUCT_REF(todo_AlarmClock_UserInput,_todo_AlarmClock_userInput);
  volatile GC_STRUCT_REF(java_lang_Thread,_todo_AlarmClock_timeThread);
  volatile GC_STRUCT_REF(java_lang_Thread,_todo_AlarmClock_userInputThread);
  volatile GC_STRUCT_VAR(JBoolean,_todo_AlarmClock_alarmFlag);
  volatile GC_STRUCT_VAR(JInt,_todo_AlarmClock_ssssss);
  volatile GC_STRUCT_VAR(JInt,_todo_AlarmClock_alarmTime);
  volatile GC_STRUCT_VAR(JInt,_todo_AlarmClock_alarmCounter);
GC_STRUCT_END(todo_AlarmClock) todo_AlarmClock;

struct todo_AlarmClock_MethodTblStruct {
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
  void (*terminate)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this));
  void (*start)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this));
  void (*setTime_int)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),JInt hhmmss);
  void (*setAlarm_int)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),JInt hhmmss);
  void (*incTime)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this));
  void (*handleAlarm_boolean)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),JBoolean alarmFlag);
  JInt (*toHHMMSS_int)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),JInt secs);
  JInt (*secondify_int)(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),JInt HHMMSS);
  GC___REF(struct se_lth_cs_realtime_semaphore_Semaphore) (*get$signal$access$0_todo_AlarmClock)(GC_PARAM(todo_AlarmClock,that));
  JBoolean (*set$alarmFlag$access$1_todo_AlarmClock_boolean)(GC_PARAM(todo_AlarmClock,that),JBoolean value);
  GC___REF(struct done_ClockInput) (*get$input$access$2_todo_AlarmClock)(GC_PARAM(todo_AlarmClock,that));
  JBoolean (*get$alarmFlag$access$3_todo_AlarmClock)(GC_PARAM(todo_AlarmClock,that));
};
extern struct todo_AlarmClock_MethodTblStruct todo_AlarmClock_MethodTbl ;

#endif
