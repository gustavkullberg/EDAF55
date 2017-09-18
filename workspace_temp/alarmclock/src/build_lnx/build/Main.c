#define HUGE_VALF 0.f
#define HUGE_VALL 0.0
#define NAN 0.f
#include <javatypes.h>
#include <gc.h>
#include <gci_common.h>
#include <exception.h>
#include <ljrt_threading.h>
#if ! (defined HOST_AVR || defined HOST_RTAI_KERNEL)
#include <stdio.h>
#endif
#include <class_indices.h>
#include <iface.h>
#include <reflection.h>
#include <java2c_lxrt.h>
#ifdef __RTAI__
#define KEEP_STATIC_INLINE
#include <config.h>
#include <rtai_lxrt_user.h>
#include <rtai_usp_posix.h>
#endif
#ifdef HOST_RTAI_KERNEL
#include <linux/module.h>
#endif
#if HAS_EXCEPTIONS == SETJMP
#define VOLATILE volatile
#else
#define VOLATILE 
#endif

/* Headers Generation */

#include "java_lang_Thread.h"
#include "java_lang_Runnable.h"
#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Cloneable.h"
#include "java_io_Serializable.h"
#include "java_lang_Throwable.h"
#include "done_ClockInput.h"
#include "done_ClockOutput.h"
#include "se_lth_cs_realtime_semaphore_MutexSem.h"
#include "se_lth_cs_realtime_semaphore_CountingSem.h"
#include "todo_AlarmClock.h"
#include "todo_AlarmClock_UserInput.h"
#include "todo_AlarmClock_Time.h"
#include "se_lth_cs_realtime_semaphore_Semaphore.h"
#include "java_lang_InterruptedException.h"
#include "java_lang_Exception.h"
#include "java_io_PrintStream.h"
#include "java_lang_IllegalArgumentException.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_Comparable.h"
#include "java_lang_CharSequence.h"
#include "java_lang_StringBuilder.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_System.h"
#include "java_lang_PhonyWriter.h"
#include "java_io_FilterOutputStream.h"
#include "java_io_OutputStream.h"
#include "java_lang_StringIndexOutOfBoundsException.h"
#include "java_lang_IndexOutOfBoundsException.h"
#include "java_io_IOException.h"
#include "java_lang_Character.h"
#include "java_lang_Character_Subset.h"
#include "java_lang_Math.h"
#include "java_lang_Integer.h"
#include "java_lang_Number.h"
#include "java_lang_Long.h"
#include "java_lang_Float.h"
#include "java_lang_Double.h"
#include "java_lang_StackTraceElement.h"
#include "java_lang_IllegalStateException.h"
#include "java_lang_ErrWriter.h"
#include "java_lang_NullPointerException.h"
#include "done_InputSampler.h"
#include "java_io_InterruptedIOException.h"
#include "java_lang_PhonyReader.h"
#include "java_lang_ArrayIndexOutOfBoundsException.h"
#include "java_io_InputStream.h"

/* Struct Declarations */

struct java_lang_Thread_MethodTblStruct java_lang_Thread_MethodTbl;
struct java_lang_Thread_ClassStruct java_lang_Thread_Class;
GC_REF(java_lang_Thread_ClassStatic,java_lang_Thread_Static);
GC_REF(LayoutHead,java_lang_Thread_LayoutStatic);
GC_REF(LayoutHead,java_lang_Thread_Layout);

struct ifaz_TblStruct java_lang_Thread_ifazTbl;

struct java_lang_Runnable_MethodTblStruct java_lang_Thread_java_lang_Runnable_MethodTblStruct;
struct java_lang_Runnable_MethodTblStruct java_lang_Runnable_MethodTbl;
struct java_lang_Runnable_ClassStruct java_lang_Runnable_Class;
GC_REF(java_lang_Runnable_ClassStatic,java_lang_Runnable_Static);
GC_REF(LayoutHead,java_lang_Runnable_LayoutStatic);

struct java_lang_Object_MethodTblStruct java_lang_Object_MethodTbl;
struct java_lang_Object_ClassStruct java_lang_Object_Class;
GC_REF(java_lang_Object_ClassStatic,java_lang_Object_Static);
GC_REF(LayoutHead,java_lang_Object_LayoutStatic);
GC_REF(LayoutHead,java_lang_Object_Layout);

struct java_lang_String_MethodTblStruct java_lang_String_MethodTbl;
struct java_lang_String_ClassStruct java_lang_String_Class;
GC_REF(java_lang_String_ClassStatic,java_lang_String_Static);
GC_REF(LayoutHead,java_lang_String_LayoutStatic);
GC_REF(LayoutHead,java_lang_String_Layout);

struct ifaz_TblStruct java_lang_String_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_String_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_String_java_lang_Comparable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_String_java_lang_CharSequence_MethodTblStruct;
struct java_lang_Cloneable_MethodTblStruct java_lang_Cloneable_MethodTbl;
struct java_lang_Cloneable_ClassStruct java_lang_Cloneable_Class;
GC_REF(java_lang_Cloneable_ClassStatic,java_lang_Cloneable_Static);
GC_REF(LayoutHead,java_lang_Cloneable_LayoutStatic);

struct java_io_Serializable_MethodTblStruct java_io_Serializable_MethodTbl;
struct java_io_Serializable_ClassStruct java_io_Serializable_Class;
GC_REF(java_io_Serializable_ClassStatic,java_io_Serializable_Static);
GC_REF(LayoutHead,java_io_Serializable_LayoutStatic);

struct java_lang_Throwable_MethodTblStruct java_lang_Throwable_MethodTbl;
struct java_lang_Throwable_ClassStruct java_lang_Throwable_Class;
GC_REF(java_lang_Throwable_ClassStatic,java_lang_Throwable_Static);
GC_REF(LayoutHead,java_lang_Throwable_LayoutStatic);
GC_REF(LayoutHead,java_lang_Throwable_Layout);

struct ifaz_TblStruct java_lang_Throwable_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Throwable_java_io_Serializable_MethodTblStruct;
struct done_ClockInput_MethodTblStruct done_ClockInput_MethodTbl;
struct done_ClockInput_ClassStruct done_ClockInput_Class;
GC_REF(done_ClockInput_ClassStatic,done_ClockInput_Static);
GC_REF(LayoutHead,done_ClockInput_LayoutStatic);
GC_REF(LayoutHead,done_ClockInput_Layout);

struct done_ClockOutput_MethodTblStruct done_ClockOutput_MethodTbl;
struct done_ClockOutput_ClassStruct done_ClockOutput_Class;
GC_REF(done_ClockOutput_ClassStatic,done_ClockOutput_Static);
GC_REF(LayoutHead,done_ClockOutput_LayoutStatic);
GC_REF(LayoutHead,done_ClockOutput_Layout);

struct se_lth_cs_realtime_semaphore_MutexSem_MethodTblStruct se_lth_cs_realtime_semaphore_MutexSem_MethodTbl;
struct se_lth_cs_realtime_semaphore_MutexSem_ClassStruct se_lth_cs_realtime_semaphore_MutexSem_Class;
GC_REF(se_lth_cs_realtime_semaphore_MutexSem_ClassStatic,se_lth_cs_realtime_semaphore_MutexSem_Static);
GC_REF(LayoutHead,se_lth_cs_realtime_semaphore_MutexSem_LayoutStatic);
GC_REF(LayoutHead,se_lth_cs_realtime_semaphore_MutexSem_Layout);

struct ifaz_TblStruct se_lth_cs_realtime_semaphore_MutexSem_ifazTbl;

struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct se_lth_cs_realtime_semaphore_MutexSem_se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct;
struct se_lth_cs_realtime_semaphore_CountingSem_MethodTblStruct se_lth_cs_realtime_semaphore_CountingSem_MethodTbl;
struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct se_lth_cs_realtime_semaphore_CountingSem_Class;
GC_REF(se_lth_cs_realtime_semaphore_CountingSem_ClassStatic,se_lth_cs_realtime_semaphore_CountingSem_Static);
GC_REF(LayoutHead,se_lth_cs_realtime_semaphore_CountingSem_LayoutStatic);
GC_REF(LayoutHead,se_lth_cs_realtime_semaphore_CountingSem_Layout);

struct ifaz_TblStruct se_lth_cs_realtime_semaphore_CountingSem_ifazTbl;

struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct se_lth_cs_realtime_semaphore_CountingSem_se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct;
struct todo_AlarmClock_MethodTblStruct todo_AlarmClock_MethodTbl;
struct todo_AlarmClock_ClassStruct todo_AlarmClock_Class;
GC_REF(todo_AlarmClock_ClassStatic,todo_AlarmClock_Static);
GC_REF(LayoutHead,todo_AlarmClock_LayoutStatic);
GC_REF(LayoutHead,todo_AlarmClock_Layout);

struct todo_AlarmClock_UserInput_MethodTblStruct todo_AlarmClock_UserInput_MethodTbl;
struct todo_AlarmClock_UserInput_ClassStruct todo_AlarmClock_UserInput_Class;
GC_REF(todo_AlarmClock_UserInput_ClassStatic,todo_AlarmClock_UserInput_Static);
GC_REF(LayoutHead,todo_AlarmClock_UserInput_LayoutStatic);
GC_REF(LayoutHead,todo_AlarmClock_UserInput_Layout);

struct ifaz_TblStruct todo_AlarmClock_UserInput_ifazTbl;

struct java_lang_Runnable_MethodTblStruct todo_AlarmClock_UserInput_java_lang_Runnable_MethodTblStruct;
struct todo_AlarmClock_Time_MethodTblStruct todo_AlarmClock_Time_MethodTbl;
struct todo_AlarmClock_Time_ClassStruct todo_AlarmClock_Time_Class;
GC_REF(todo_AlarmClock_Time_ClassStatic,todo_AlarmClock_Time_Static);
GC_REF(LayoutHead,todo_AlarmClock_Time_LayoutStatic);
GC_REF(LayoutHead,todo_AlarmClock_Time_Layout);

struct ifaz_TblStruct todo_AlarmClock_Time_ifazTbl;

struct java_lang_Runnable_MethodTblStruct todo_AlarmClock_Time_java_lang_Runnable_MethodTblStruct;
struct se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct se_lth_cs_realtime_semaphore_Semaphore_MethodTbl;
struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct se_lth_cs_realtime_semaphore_Semaphore_Class;
GC_REF(se_lth_cs_realtime_semaphore_Semaphore_ClassStatic,se_lth_cs_realtime_semaphore_Semaphore_Static);
GC_REF(LayoutHead,se_lth_cs_realtime_semaphore_Semaphore_LayoutStatic);

struct java_lang_InterruptedException_MethodTblStruct java_lang_InterruptedException_MethodTbl;
struct java_lang_InterruptedException_ClassStruct java_lang_InterruptedException_Class;
GC_REF(java_lang_InterruptedException_ClassStatic,java_lang_InterruptedException_Static);
GC_REF(LayoutHead,java_lang_InterruptedException_LayoutStatic);
GC_REF(LayoutHead,java_lang_InterruptedException_Layout);

struct ifaz_TblStruct java_lang_InterruptedException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_InterruptedException_java_io_Serializable_MethodTblStruct;
struct java_lang_Exception_MethodTblStruct java_lang_Exception_MethodTbl;
struct java_lang_Exception_ClassStruct java_lang_Exception_Class;
GC_REF(java_lang_Exception_ClassStatic,java_lang_Exception_Static);
GC_REF(LayoutHead,java_lang_Exception_LayoutStatic);
GC_REF(LayoutHead,java_lang_Exception_Layout);

struct ifaz_TblStruct java_lang_Exception_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Exception_java_io_Serializable_MethodTblStruct;
struct java_io_PrintStream_MethodTblStruct java_io_PrintStream_MethodTbl;
struct java_io_PrintStream_ClassStruct java_io_PrintStream_Class;
GC_REF(java_io_PrintStream_ClassStatic,java_io_PrintStream_Static);
GC_REF(LayoutHead,java_io_PrintStream_LayoutStatic);
GC_REF(LayoutHead,java_io_PrintStream_Layout);

struct java_lang_IllegalArgumentException_MethodTblStruct java_lang_IllegalArgumentException_MethodTbl;
struct java_lang_IllegalArgumentException_ClassStruct java_lang_IllegalArgumentException_Class;
GC_REF(java_lang_IllegalArgumentException_ClassStatic,java_lang_IllegalArgumentException_Static);
GC_REF(LayoutHead,java_lang_IllegalArgumentException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IllegalArgumentException_Layout);

struct ifaz_TblStruct java_lang_IllegalArgumentException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IllegalArgumentException_java_io_Serializable_MethodTblStruct;
struct java_lang_RuntimeException_MethodTblStruct java_lang_RuntimeException_MethodTbl;
struct java_lang_RuntimeException_ClassStruct java_lang_RuntimeException_Class;
GC_REF(java_lang_RuntimeException_ClassStatic,java_lang_RuntimeException_Static);
GC_REF(LayoutHead,java_lang_RuntimeException_LayoutStatic);
GC_REF(LayoutHead,java_lang_RuntimeException_Layout);

struct ifaz_TblStruct java_lang_RuntimeException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_RuntimeException_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Comparable_MethodTbl;
struct java_lang_Comparable_ClassStruct java_lang_Comparable_Class;
GC_REF(java_lang_Comparable_ClassStatic,java_lang_Comparable_Static);
GC_REF(LayoutHead,java_lang_Comparable_LayoutStatic);

struct java_lang_CharSequence_MethodTblStruct java_lang_CharSequence_MethodTbl;
struct java_lang_CharSequence_ClassStruct java_lang_CharSequence_Class;
GC_REF(java_lang_CharSequence_ClassStatic,java_lang_CharSequence_Static);
GC_REF(LayoutHead,java_lang_CharSequence_LayoutStatic);

struct java_lang_StringBuilder_MethodTblStruct java_lang_StringBuilder_MethodTbl;
struct java_lang_StringBuilder_ClassStruct java_lang_StringBuilder_Class;
GC_REF(java_lang_StringBuilder_ClassStatic,java_lang_StringBuilder_Static);
GC_REF(LayoutHead,java_lang_StringBuilder_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringBuilder_Layout);

struct ifaz_TblStruct java_lang_StringBuilder_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringBuilder_java_io_Serializable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_StringBuilder_java_lang_CharSequence_MethodTblStruct;
struct java_lang_StringBuffer_MethodTblStruct java_lang_StringBuffer_MethodTbl;
struct java_lang_StringBuffer_ClassStruct java_lang_StringBuffer_Class;
GC_REF(java_lang_StringBuffer_ClassStatic,java_lang_StringBuffer_Static);
GC_REF(LayoutHead,java_lang_StringBuffer_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringBuffer_Layout);

struct ifaz_TblStruct java_lang_StringBuffer_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringBuffer_java_io_Serializable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_StringBuffer_java_lang_CharSequence_MethodTblStruct;
struct java_lang_System_MethodTblStruct java_lang_System_MethodTbl;
struct java_lang_System_ClassStruct java_lang_System_Class;
GC_REF(java_lang_System_ClassStatic,java_lang_System_Static);
GC_REF(LayoutHead,java_lang_System_LayoutStatic);
GC_REF(LayoutHead,java_lang_System_Layout);

struct java_lang_PhonyWriter_MethodTblStruct java_lang_PhonyWriter_MethodTbl;
struct java_lang_PhonyWriter_ClassStruct java_lang_PhonyWriter_Class;
GC_REF(java_lang_PhonyWriter_ClassStatic,java_lang_PhonyWriter_Static);
GC_REF(LayoutHead,java_lang_PhonyWriter_LayoutStatic);
GC_REF(LayoutHead,java_lang_PhonyWriter_Layout);

struct java_io_FilterOutputStream_MethodTblStruct java_io_FilterOutputStream_MethodTbl;
struct java_io_FilterOutputStream_ClassStruct java_io_FilterOutputStream_Class;
GC_REF(java_io_FilterOutputStream_ClassStatic,java_io_FilterOutputStream_Static);
GC_REF(LayoutHead,java_io_FilterOutputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_FilterOutputStream_Layout);

struct java_io_OutputStream_MethodTblStruct java_io_OutputStream_MethodTbl;
struct java_io_OutputStream_ClassStruct java_io_OutputStream_Class;
GC_REF(java_io_OutputStream_ClassStatic,java_io_OutputStream_Static);
GC_REF(LayoutHead,java_io_OutputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_OutputStream_Layout);

struct java_lang_StringIndexOutOfBoundsException_MethodTblStruct java_lang_StringIndexOutOfBoundsException_MethodTbl;
struct java_lang_StringIndexOutOfBoundsException_ClassStruct java_lang_StringIndexOutOfBoundsException_Class;
GC_REF(java_lang_StringIndexOutOfBoundsException_ClassStatic,java_lang_StringIndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_StringIndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringIndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_StringIndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_lang_IndexOutOfBoundsException_MethodTblStruct java_lang_IndexOutOfBoundsException_MethodTbl;
struct java_lang_IndexOutOfBoundsException_ClassStruct java_lang_IndexOutOfBoundsException_Class;
GC_REF(java_lang_IndexOutOfBoundsException_ClassStatic,java_lang_IndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_IndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_IndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_io_IOException_MethodTblStruct java_io_IOException_MethodTbl;
struct java_io_IOException_ClassStruct java_io_IOException_Class;
GC_REF(java_io_IOException_ClassStatic,java_io_IOException_Static);
GC_REF(LayoutHead,java_io_IOException_LayoutStatic);
GC_REF(LayoutHead,java_io_IOException_Layout);

struct ifaz_TblStruct java_io_IOException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_io_IOException_java_io_Serializable_MethodTblStruct;
struct java_lang_Character_MethodTblStruct java_lang_Character_MethodTbl;
struct java_lang_Character_ClassStruct java_lang_Character_Class;
GC_REF(java_lang_Character_ClassStatic,java_lang_Character_Static);
GC_REF(LayoutHead,java_lang_Character_LayoutStatic);
GC_REF(LayoutHead,java_lang_Character_Layout);

struct ifaz_TblStruct java_lang_Character_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Character_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Character_java_lang_Comparable_MethodTblStruct;
struct java_lang_Character_Subset_MethodTblStruct java_lang_Character_Subset_MethodTbl;
struct java_lang_Character_Subset_ClassStruct java_lang_Character_Subset_Class;
GC_REF(java_lang_Character_Subset_ClassStatic,java_lang_Character_Subset_Static);
GC_REF(LayoutHead,java_lang_Character_Subset_LayoutStatic);
GC_REF(LayoutHead,java_lang_Character_Subset_Layout);

struct java_lang_Math_MethodTblStruct java_lang_Math_MethodTbl;
struct java_lang_Math_ClassStruct java_lang_Math_Class;
GC_REF(java_lang_Math_ClassStatic,java_lang_Math_Static);
GC_REF(LayoutHead,java_lang_Math_LayoutStatic);
GC_REF(LayoutHead,java_lang_Math_Layout);

struct java_lang_Integer_MethodTblStruct java_lang_Integer_MethodTbl;
struct java_lang_Integer_ClassStruct java_lang_Integer_Class;
GC_REF(java_lang_Integer_ClassStatic,java_lang_Integer_Static);
GC_REF(LayoutHead,java_lang_Integer_LayoutStatic);
GC_REF(LayoutHead,java_lang_Integer_Layout);

struct ifaz_TblStruct java_lang_Integer_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Integer_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Integer_java_lang_Comparable_MethodTblStruct;
struct java_lang_Number_MethodTblStruct java_lang_Number_MethodTbl;
struct java_lang_Number_ClassStruct java_lang_Number_Class;
GC_REF(java_lang_Number_ClassStatic,java_lang_Number_Static);
GC_REF(LayoutHead,java_lang_Number_LayoutStatic);
GC_REF(LayoutHead,java_lang_Number_Layout);

struct ifaz_TblStruct java_lang_Number_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Number_java_io_Serializable_MethodTblStruct;
struct java_lang_Long_MethodTblStruct java_lang_Long_MethodTbl;
struct java_lang_Long_ClassStruct java_lang_Long_Class;
GC_REF(java_lang_Long_ClassStatic,java_lang_Long_Static);
GC_REF(LayoutHead,java_lang_Long_LayoutStatic);
GC_REF(LayoutHead,java_lang_Long_Layout);

struct ifaz_TblStruct java_lang_Long_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Long_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Long_java_lang_Comparable_MethodTblStruct;
struct java_lang_Float_MethodTblStruct java_lang_Float_MethodTbl;
struct java_lang_Float_ClassStruct java_lang_Float_Class;
GC_REF(java_lang_Float_ClassStatic,java_lang_Float_Static);
GC_REF(LayoutHead,java_lang_Float_LayoutStatic);
GC_REF(LayoutHead,java_lang_Float_Layout);

struct ifaz_TblStruct java_lang_Float_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Float_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Float_java_lang_Comparable_MethodTblStruct;
struct java_lang_Double_MethodTblStruct java_lang_Double_MethodTbl;
struct java_lang_Double_ClassStruct java_lang_Double_Class;
GC_REF(java_lang_Double_ClassStatic,java_lang_Double_Static);
GC_REF(LayoutHead,java_lang_Double_LayoutStatic);
GC_REF(LayoutHead,java_lang_Double_Layout);

struct ifaz_TblStruct java_lang_Double_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Double_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Double_java_lang_Comparable_MethodTblStruct;
struct java_lang_StackTraceElement_MethodTblStruct java_lang_StackTraceElement_MethodTbl;
struct java_lang_StackTraceElement_ClassStruct java_lang_StackTraceElement_Class;
GC_REF(java_lang_StackTraceElement_ClassStatic,java_lang_StackTraceElement_Static);
GC_REF(LayoutHead,java_lang_StackTraceElement_LayoutStatic);
GC_REF(LayoutHead,java_lang_StackTraceElement_Layout);

struct ifaz_TblStruct java_lang_StackTraceElement_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StackTraceElement_java_io_Serializable_MethodTblStruct;
struct java_lang_IllegalStateException_MethodTblStruct java_lang_IllegalStateException_MethodTbl;
struct java_lang_IllegalStateException_ClassStruct java_lang_IllegalStateException_Class;
GC_REF(java_lang_IllegalStateException_ClassStatic,java_lang_IllegalStateException_Static);
GC_REF(LayoutHead,java_lang_IllegalStateException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IllegalStateException_Layout);

struct ifaz_TblStruct java_lang_IllegalStateException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IllegalStateException_java_io_Serializable_MethodTblStruct;
struct java_lang_ErrWriter_MethodTblStruct java_lang_ErrWriter_MethodTbl;
struct java_lang_ErrWriter_ClassStruct java_lang_ErrWriter_Class;
GC_REF(java_lang_ErrWriter_ClassStatic,java_lang_ErrWriter_Static);
GC_REF(LayoutHead,java_lang_ErrWriter_LayoutStatic);
GC_REF(LayoutHead,java_lang_ErrWriter_Layout);

struct java_lang_NullPointerException_MethodTblStruct java_lang_NullPointerException_MethodTbl;
struct java_lang_NullPointerException_ClassStruct java_lang_NullPointerException_Class;
GC_REF(java_lang_NullPointerException_ClassStatic,java_lang_NullPointerException_Static);
GC_REF(LayoutHead,java_lang_NullPointerException_LayoutStatic);
GC_REF(LayoutHead,java_lang_NullPointerException_Layout);

struct ifaz_TblStruct java_lang_NullPointerException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_NullPointerException_java_io_Serializable_MethodTblStruct;
struct done_InputSampler_MethodTblStruct done_InputSampler_MethodTbl;
struct done_InputSampler_ClassStruct done_InputSampler_Class;
GC_REF(done_InputSampler_ClassStatic,done_InputSampler_Static);
GC_REF(LayoutHead,done_InputSampler_LayoutStatic);
GC_REF(LayoutHead,done_InputSampler_Layout);

struct ifaz_TblStruct done_InputSampler_ifazTbl;

struct java_lang_Runnable_MethodTblStruct done_InputSampler_java_lang_Runnable_MethodTblStruct;
struct java_io_InterruptedIOException_MethodTblStruct java_io_InterruptedIOException_MethodTbl;
struct java_io_InterruptedIOException_ClassStruct java_io_InterruptedIOException_Class;
GC_REF(java_io_InterruptedIOException_ClassStatic,java_io_InterruptedIOException_Static);
GC_REF(LayoutHead,java_io_InterruptedIOException_LayoutStatic);
GC_REF(LayoutHead,java_io_InterruptedIOException_Layout);

struct ifaz_TblStruct java_io_InterruptedIOException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_io_InterruptedIOException_java_io_Serializable_MethodTblStruct;
struct java_lang_PhonyReader_MethodTblStruct java_lang_PhonyReader_MethodTbl;
struct java_lang_PhonyReader_ClassStruct java_lang_PhonyReader_Class;
GC_REF(java_lang_PhonyReader_ClassStatic,java_lang_PhonyReader_Static);
GC_REF(LayoutHead,java_lang_PhonyReader_LayoutStatic);
GC_REF(LayoutHead,java_lang_PhonyReader_Layout);

struct java_lang_ArrayIndexOutOfBoundsException_MethodTblStruct java_lang_ArrayIndexOutOfBoundsException_MethodTbl;
struct java_lang_ArrayIndexOutOfBoundsException_ClassStruct java_lang_ArrayIndexOutOfBoundsException_Class;
GC_REF(java_lang_ArrayIndexOutOfBoundsException_ClassStatic,java_lang_ArrayIndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_ArrayIndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_ArrayIndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_ArrayIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_io_InputStream_MethodTblStruct java_io_InputStream_MethodTbl;
struct java_io_InputStream_ClassStruct java_io_InputStream_Class;
GC_REF(java_io_InputStream_ClassStatic,java_io_InputStream_Static);
GC_REF(LayoutHead,java_io_InputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_InputStream_Layout);


/* Generated Prototypes */

void javaClasses_Init(void **__eFlag__);

double remainder_double(double op1,double op2) {
while (op1 > op2) op1-=op2;
return op1;
}
float remainder_float(float op1,float op2) {
while ((float)op1 > (float)op2) op1-=(float)op2;
return (float)op1;
}
void Main_main_java_lang_StringA(void **__eFlag__ , GC_PARAM(RefArray, args));
void java_lang_Thread_initializer(void **__eFlag__, GC_PARAM(java_lang_Thread,this));

GC___REF(struct java_lang_Thread) java_lang_Thread_Thread(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Thread_Thread_init(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
GC___REF(struct java_lang_Thread) java_lang_Thread_Thread_java_lang_Runnable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_Runnable,target));
void java_lang_Thread_Thread_java_lang_Runnable_init(void **__eFlag__, GC_PARAM(java_lang_Thread,this),GC_PARAM(java_lang_Runnable,target));
void java_lang_Thread_inheritPriority(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
JLong java_lang_Thread_createThread(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_start(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_run(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_sleep_long(void **__eFlag__ ,    JLong millis);
JBoolean java_lang_Thread_isInterrupted(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_interrupt(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
GC___REF(struct java_lang_Thread) java_lang_Thread_currentThread(void **__eFlag__ );
void java_lang_Runnable_run(void **__eFlag__ ,GC_PARAM(java_lang_Runnable,this));

void java_lang_Object_initializer(void **__eFlag__, GC_PARAM(java_lang_Object,this));

void java_lang_Object_wait_long_int(void **__eFlag__ ,GC_PARAM(java_lang_Object,this),    JLong timeout,
    JInt nanos);
GC___REF(struct java_lang_Object) java_lang_Object_Object(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Object_Object_init(void **__eFlag__, GC_PARAM(java_lang_Object,this));
GC___REF(struct java_lang_String) java_lang_Object_toString(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
GC___REF(struct java_lang_Object) java_lang_Object_clone(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
void java_lang_String_initializer(void **__eFlag__, GC_PARAM(java_lang_String,this));

GC___REF(struct java_lang_String) java_lang_String_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_String_String_init(void **__eFlag__, GC_PARAM(java_lang_String,this));
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,str));
void java_lang_String_String_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data));
void java_lang_String_String_JCharA_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data),JInt offset,JInt count);
void java_lang_String_String_JCharA_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data),JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_JByteA_int_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JByteArray,ascii),JInt hibyte,JInt offset,JInt count);
void java_lang_String_String_JByteA_int_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JByteArray,ascii),JInt hibyte,JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_JByteA_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JByteArray,data),JInt offset,JInt count);
void java_lang_String_String_JByteA_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JByteArray,data),JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_StringBuffer(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_StringBuffer,buffer));
void java_lang_String_String_java_lang_StringBuffer_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_StringBuffer,buffer));
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_StringBuilder(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_StringBuilder,buffer));
void java_lang_String_String_java_lang_StringBuilder_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_StringBuilder,buffer));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA_int_int_boolean(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data),JInt offset,JInt count,JBoolean dont_copy);
void java_lang_String_String_JCharA_int_int_boolean_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data),JInt offset,JInt count,JBoolean dont_copy);
JInt java_lang_String_length(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
void java_lang_String_getChars_int_int_charA_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt srcBegin,
    JInt srcEnd,
    GC_PARAM(JCharArray,dst),
    JInt dstBegin);
GC___REF(struct JByteArray) java_lang_String_getBytes_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,enc));
GC___REF(struct JByteArray) java_lang_String_getBytes(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
JInt java_lang_String_compareTo_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,anotherString));
JBoolean java_lang_String_regionMatches_int_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len);
JBoolean java_lang_String_regionMatches_boolean_int_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JBoolean ignoreCase,
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len);
JInt java_lang_String_indexOf_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt ch,
    JInt fromIndex);
JInt java_lang_String_lastIndexOf_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt ch,
    JInt fromIndex);
JInt java_lang_String_indexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
JInt java_lang_String_lastIndexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
GC___REF(struct java_lang_String) java_lang_String_substring_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt beginIndex,
    JInt endIndex);
GC___REF(struct java_lang_String) java_lang_String_toString(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
GC___REF(struct java_lang_String) java_lang_String_valueOf_charA_int_int(void **__eFlag__ ,    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_String) java_lang_String_copyValueOf_charA_int_int(void **__eFlag__ ,    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_String) java_lang_String_valueOf_boolean(void **__eFlag__ ,    JBoolean b);
GC___REF(struct java_lang_String) java_lang_String_valueOf_int(void **__eFlag__ ,    JInt i);
GC___REF(struct java_lang_String) java_lang_String_valueOf_long(void **__eFlag__ ,    JLong l);
GC___REF(struct java_lang_String) java_lang_String_valueOf_float(void **__eFlag__ ,    JFloat f);
GC___REF(struct java_lang_String) java_lang_String_valueOf_double(void **__eFlag__ ,    JDouble d);


void java_lang_Throwable_initializer(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));

GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Throwable_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message));
void java_lang_Throwable_Throwable_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_String,message));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_String,message),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Throwable_Throwable_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_String) java_lang_Throwable_getMessage(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_String) java_lang_Throwable_toString(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
void java_lang_Throwable_printStackTrace(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
void java_lang_Throwable_printStackTrace_java_io_PrintStream(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this),    GC_PARAM(java_io_PrintStream,s));
GC___REF(struct java_lang_String) java_lang_Throwable_stackTraceString(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_fillInStackTrace(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
void done_ClockInput_initializer(void **__eFlag__, GC_PARAM(done_ClockInput,this));

GC___REF(struct se_lth_cs_realtime_semaphore_CountingSem) done_ClockInput_getSemaphoreInstance(void **__eFlag__ );
void done_ClockInput_giveInput(void **__eFlag__ );
JBoolean done_ClockInput_getAlarmFlag(void **__eFlag__ );
JInt done_ClockInput_getChoice(void **__eFlag__ );
JInt done_ClockInput_getValue(void **__eFlag__ );
GC___REF(struct done_ClockInput) done_ClockInput_ClockInput(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void done_ClockInput_ClockInput_init(void **__eFlag__, GC_PARAM(done_ClockInput,this));
void done_ClockOutput_initializer(void **__eFlag__, GC_PARAM(done_ClockOutput,this));

void done_ClockOutput_setupWindow(void **__eFlag__ );
void done_ClockOutput_setupAlarm(void **__eFlag__ );
void done_ClockOutput_doAlarm(void **__eFlag__ );
void done_ClockOutput_showTime_int(void **__eFlag__ ,    JInt hhmmss);
GC___REF(struct done_ClockOutput) done_ClockOutput_ClockOutput(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void done_ClockOutput_ClockOutput_init(void **__eFlag__, GC_PARAM(done_ClockOutput,this));
void se_lth_cs_realtime_semaphore_MutexSem_initializer(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this));

GC___REF(struct se_lth_cs_realtime_semaphore_MutexSem) se_lth_cs_realtime_semaphore_MutexSem_MutexSem(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void se_lth_cs_realtime_semaphore_MutexSem_MutexSem_init(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this));
void se_lth_cs_realtime_semaphore_MutexSem_give(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this));
void se_lth_cs_realtime_semaphore_MutexSem_take(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this));
JLong se_lth_cs_realtime_semaphore_MutexSem_createMutexSem_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this),    JInt iValue);
void se_lth_cs_realtime_semaphore_MutexSem_giveMutexSem_long(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this),    JLong target);
void se_lth_cs_realtime_semaphore_MutexSem_takeMutexSem_long(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this),    JLong target);
void se_lth_cs_realtime_semaphore_CountingSem_initializer(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));

GC___REF(struct se_lth_cs_realtime_semaphore_CountingSem) se_lth_cs_realtime_semaphore_CountingSem_CountingSem(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void se_lth_cs_realtime_semaphore_CountingSem_CountingSem_init(void **__eFlag__, GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));
void se_lth_cs_realtime_semaphore_CountingSem_give(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));
void se_lth_cs_realtime_semaphore_CountingSem_take(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this));
JLong se_lth_cs_realtime_semaphore_CountingSem_createCountingSem_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),    JInt iValue);
void se_lth_cs_realtime_semaphore_CountingSem_giveCountingSem_long(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),    JLong target);
void se_lth_cs_realtime_semaphore_CountingSem_takeCountingSem_long(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),    JLong target);
JBoolean se_lth_cs_realtime_semaphore_CountingSem_takeCountingSem_long_long(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this),    JLong target,
    JLong timeout);
void todo_AlarmClock_initializer(void **__eFlag__, GC_PARAM(todo_AlarmClock,this));

GC___REF(struct todo_AlarmClock) todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(done_ClockInput,i),GC_PARAM(done_ClockOutput,o));
void todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput_init(void **__eFlag__, GC_PARAM(todo_AlarmClock,this),GC_PARAM(done_ClockInput,i),GC_PARAM(done_ClockOutput,o));
void todo_AlarmClock_start(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this));
void todo_AlarmClock_setTime_int(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this),    JInt hhmmss);
void todo_AlarmClock_setAlarm_int(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this),    JInt hhmmss);
void todo_AlarmClock_incTime(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this));
void todo_AlarmClock_handleAlarm_boolean(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this),    JBoolean alarmFlag);
JInt todo_AlarmClock_toHHMMSS_int(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this),    JInt secs);
JInt todo_AlarmClock_secondify_int(void **__eFlag__ ,GC_PARAM(todo_AlarmClock,this),    JInt HHMMSS);
void todo_AlarmClock_UserInput_initializer(void **__eFlag__, GC_PARAM(todo_AlarmClock_UserInput,this));

GC___REF(struct todo_AlarmClock_UserInput) todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(todo_AlarmClock,_that_),GC_PARAM(todo_AlarmClock_Time,time));
void todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time_init(void **__eFlag__, GC_PARAM(todo_AlarmClock_UserInput,this),GC_PARAM(todo_AlarmClock_Time,time));
void todo_AlarmClock_UserInput_run(void **__eFlag__ ,GC_PARAM(todo_AlarmClock_UserInput,this));
void todo_AlarmClock_Time_initializer(void **__eFlag__, GC_PARAM(todo_AlarmClock_Time,this));

GC___REF(struct todo_AlarmClock_Time) todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(todo_AlarmClock,_that_),JInt ssssss,GC_PARAM(todo_AlarmClock_UserInput,userInput));
void todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput_init(void **__eFlag__, GC_PARAM(todo_AlarmClock_Time,this),JInt ssssss,GC_PARAM(todo_AlarmClock_UserInput,userInput));
void todo_AlarmClock_Time_run(void **__eFlag__ ,GC_PARAM(todo_AlarmClock_Time,this));
void se_lth_cs_realtime_semaphore_Semaphore_give(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_Semaphore,this));
void se_lth_cs_realtime_semaphore_Semaphore_take(void **__eFlag__ ,GC_PARAM(se_lth_cs_realtime_semaphore_Semaphore,this));

void java_lang_InterruptedException_initializer(void **__eFlag__, GC_PARAM(java_lang_InterruptedException,this));

GC___REF(struct java_lang_InterruptedException) java_lang_InterruptedException_InterruptedException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_InterruptedException_InterruptedException_init(void **__eFlag__, GC_PARAM(java_lang_InterruptedException,this));
void java_lang_Exception_initializer(void **__eFlag__, GC_PARAM(java_lang_Exception,this));

GC___REF(struct java_lang_Exception) java_lang_Exception_Exception(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Exception_Exception_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_Exception_Exception_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_String,s));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_String_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_String,s),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Exception_Exception_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_Throwable,cause));
void java_io_PrintStream_initializer(void **__eFlag__, GC_PARAM(java_io_PrintStream,this));

GC___REF(struct java_io_PrintStream) java_io_PrintStream_PrintStream_java_io_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out));
void java_io_PrintStream_PrintStream_java_io_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_io_OutputStream,out));
GC___REF(struct java_io_PrintStream) java_io_PrintStream_PrintStream_java_io_OutputStream_boolean(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out),JBoolean auto_flush);
void java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_io_OutputStream,out),JBoolean auto_flush);
void java_io_PrintStream_setError(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this));
void java_io_PrintStream_flush(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this));
void java_io_PrintStream_print_java_lang_String_boolean(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str),
    JBoolean println);
void java_io_PrintStream_print_charA_int_int_boolean(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JCharArray,chars),
    JInt pos,
    JInt len,
    JBoolean println);
void java_io_PrintStream_writeChars_charA_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JCharArray,buf),
    JInt offset,
    JInt count);
void java_io_PrintStream_writeChars_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str),
    JInt offset,
    JInt count);
void java_io_PrintStream_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str));
void java_io_PrintStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    JInt oneByte);
void java_io_PrintStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JByteArray,buffer),
    JInt offset,
    JInt len);
void java_lang_IllegalArgumentException_initializer(void **__eFlag__, GC_PARAM(java_lang_IllegalArgumentException,this));

GC___REF(struct java_lang_IllegalArgumentException) java_lang_IllegalArgumentException_IllegalArgumentException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IllegalArgumentException_IllegalArgumentException_init(void **__eFlag__, GC_PARAM(java_lang_IllegalArgumentException,this));
void java_lang_RuntimeException_initializer(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this));

GC___REF(struct java_lang_RuntimeException) java_lang_RuntimeException_RuntimeException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_RuntimeException_RuntimeException_init(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this));
GC___REF(struct java_lang_RuntimeException) java_lang_RuntimeException_RuntimeException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_RuntimeException_RuntimeException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this),GC_PARAM(java_lang_String,s));


GC___REF(struct java_lang_String) java_lang_CharSequence_toString(void **__eFlag__ ,GC_PARAM(java_lang_CharSequence,this));

void java_lang_StringBuilder_initializer(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));

GC___REF(struct java_lang_String) java_lang_StringBuilder_toString(void **__eFlag__ ,GC_PARAM(java_lang_StringBuilder,this));
void java_lang_StringBuffer_initializer(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));

GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_StringBuffer(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_StringBuffer_StringBuffer_init(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_StringBuffer_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt capacity);
void java_lang_StringBuffer_StringBuffer_int_init(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt capacity);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_Object(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_Object,obj));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_StringBuffer(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_StringBuffer,stringBuffer));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_charA(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(JCharArray,data));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_charA_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_boolean(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JBoolean bool);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_char(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JChar ch);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt inum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_long(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JLong lnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_float(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JFloat fnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_double(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JDouble dnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_delete_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt start,
    JInt end);
GC___REF(struct java_lang_String) java_lang_StringBuffer_substring_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt beginIndex,
    JInt endIndex);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_insert_int_charA_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt offset,
    GC_PARAM(JCharArray,str),
    JInt str_offset,
    JInt len);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_insert_int_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt offset,
    GC_PARAM(java_lang_String,str));
JInt java_lang_StringBuffer_indexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
JInt java_lang_StringBuffer_lastIndexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
GC___REF(struct java_lang_String) java_lang_StringBuffer_toString(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this));
void java_lang_StringBuffer_ensureCapacity_unsynchronized_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt minimumCapacity);
JBoolean java_lang_StringBuffer_regionMatches_int_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt toffset,
    GC_PARAM(java_lang_String,other));
void java_lang_System_initializer(void **__eFlag__, GC_PARAM(java_lang_System,this));

void java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(void **__eFlag__ ,    GC_PARAM(java_lang_Object,src),
    JInt srcOffset,
    GC_PARAM(java_lang_Object,dst),
    JInt dstOffset,
    JInt count);
JLong java_lang_System_currentTimeMillis(void **__eFlag__ );
void java_lang_PhonyWriter_initializer(void **__eFlag__, GC_PARAM(java_lang_PhonyWriter,this));

GC___REF(struct java_lang_PhonyWriter) java_lang_PhonyWriter_PhonyWriter(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_PhonyWriter_PhonyWriter_init(void **__eFlag__, GC_PARAM(java_lang_PhonyWriter,this));
void java_lang_PhonyWriter_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_PhonyWriter_println_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_PhonyWriter_flush(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this));
void java_io_FilterOutputStream_initializer(void **__eFlag__, GC_PARAM(java_io_FilterOutputStream,this));

GC___REF(struct java_io_FilterOutputStream) java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out));
void java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_FilterOutputStream,this),GC_PARAM(java_io_OutputStream,out));
void java_io_FilterOutputStream_close(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this));
void java_io_FilterOutputStream_flush(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this));
void java_io_FilterOutputStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this),    JInt b);
void java_io_FilterOutputStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this),    GC_PARAM(JByteArray,buf),
    JInt offset,
    JInt len);
void java_io_OutputStream_initializer(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));

GC___REF(struct java_io_OutputStream) java_io_OutputStream_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_io_OutputStream_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));
void java_io_OutputStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this),    JInt b);
void java_io_OutputStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);
void java_io_OutputStream_flush(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this));
void java_io_OutputStream_close(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this));
void java_lang_StringIndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this));

GC___REF(struct java_lang_StringIndexOutOfBoundsException) java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this));
GC___REF(struct java_lang_StringIndexOutOfBoundsException) java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt index);
void java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this),JInt index);
void java_lang_IndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this));

GC___REF(struct java_lang_IndexOutOfBoundsException) java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this));
GC___REF(struct java_lang_IndexOutOfBoundsException) java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this),GC_PARAM(java_lang_String,s));
void java_io_IOException_initializer(void **__eFlag__, GC_PARAM(java_io_IOException,this));

GC___REF(struct java_io_IOException) java_io_IOException_IOException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message));
void java_io_IOException_IOException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_io_IOException,this),GC_PARAM(java_lang_String,message));
void java_lang_Character_initializer(void **__eFlag__, GC_PARAM(java_lang_Character,this));

void java_lang_Character_Subset_initializer(void **__eFlag__, GC_PARAM(java_lang_Character_Subset,this));

GC___REF(struct java_lang_String) java_lang_Character_Subset_toString(void **__eFlag__ ,GC_PARAM(java_lang_Character_Subset,this));
GC___REF(struct java_lang_String) java_lang_Character_toString(void **__eFlag__ ,GC_PARAM(java_lang_Character,this));
JChar java_lang_Character_toLowerCase_char(void **__eFlag__ ,    JChar ch);
JChar java_lang_Character_toUpperCase_char(void **__eFlag__ ,    JChar ch);

void java_lang_Math_initializer(void **__eFlag__, GC_PARAM(java_lang_Math,this));

JInt java_lang_Math_min_int_int(void **__eFlag__ ,    JInt a,
    JInt b);
void java_lang_Integer_initializer(void **__eFlag__, GC_PARAM(java_lang_Integer,this));

GC___REF(struct java_lang_String) java_lang_Integer_toString_int_int(void **__eFlag__ ,    JInt num,
    JInt radix);
GC___REF(struct java_lang_String) java_lang_Integer_toString(void **__eFlag__ ,GC_PARAM(java_lang_Integer,this));
void java_lang_Number_initializer(void **__eFlag__, GC_PARAM(java_lang_Number,this));

void java_lang_Long_initializer(void **__eFlag__, GC_PARAM(java_lang_Long,this));

GC___REF(struct java_lang_String) java_lang_Long_toString_long_int(void **__eFlag__ ,    JLong num,
    JInt radix);
GC___REF(struct java_lang_String) java_lang_Long_toString_long(void **__eFlag__ ,    JLong num);
GC___REF(struct java_lang_String) java_lang_Long_toString(void **__eFlag__ ,GC_PARAM(java_lang_Long,this));
void java_lang_Float_initializer(void **__eFlag__, GC_PARAM(java_lang_Float,this));

GC___REF(struct java_lang_String) java_lang_Float_toString_float(void **__eFlag__ ,    JFloat f);
GC___REF(struct java_lang_String) java_lang_Float_toString(void **__eFlag__ ,GC_PARAM(java_lang_Float,this));
void java_lang_Double_initializer(void **__eFlag__, GC_PARAM(java_lang_Double,this));

GC___REF(struct java_lang_String) java_lang_Double_toString_double(void **__eFlag__ ,    JDouble d);
GC___REF(struct java_lang_String) java_lang_Double_toString(void **__eFlag__ ,GC_PARAM(java_lang_Double,this));
void java_lang_StackTraceElement_initializer(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));

GC___REF(struct java_lang_String) java_lang_StackTraceElement_toString(void **__eFlag__ ,GC_PARAM(java_lang_StackTraceElement,this));
void java_lang_IllegalStateException_initializer(void **__eFlag__, GC_PARAM(java_lang_IllegalStateException,this));

GC___REF(struct java_lang_IllegalStateException) java_lang_IllegalStateException_IllegalStateException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IllegalStateException_IllegalStateException_init(void **__eFlag__, GC_PARAM(java_lang_IllegalStateException,this));
void java_lang_ErrWriter_initializer(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));

GC___REF(struct java_lang_ErrWriter) java_lang_ErrWriter_ErrWriter(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_ErrWriter_ErrWriter_init(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));
void java_lang_ErrWriter_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_ErrWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_ErrWriter_flush(void **__eFlag__ ,GC_PARAM(java_lang_ErrWriter,this));
void java_lang_NullPointerException_initializer(void **__eFlag__, GC_PARAM(java_lang_NullPointerException,this));

GC___REF(struct java_lang_NullPointerException) java_lang_NullPointerException_NullPointerException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_NullPointerException_NullPointerException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_NullPointerException,this),GC_PARAM(java_lang_String,s));
void done_InputSampler_initializer(void **__eFlag__, GC_PARAM(done_InputSampler,this));

JBoolean done_InputSampler_haveInput(void **__eFlag__ );
void done_InputSampler_run(void **__eFlag__ ,GC_PARAM(done_InputSampler,this));
GC___REF(struct done_InputSampler) done_InputSampler_InputSampler(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void done_InputSampler_InputSampler_init(void **__eFlag__, GC_PARAM(done_InputSampler,this));
void java_io_InterruptedIOException_initializer(void **__eFlag__, GC_PARAM(java_io_InterruptedIOException,this));

void java_lang_PhonyReader_initializer(void **__eFlag__, GC_PARAM(java_lang_PhonyReader,this));

JInt java_lang_PhonyReader_read(void **__eFlag__ ,GC_PARAM(java_lang_PhonyReader,this));
GC___REF(struct java_lang_PhonyReader) java_lang_PhonyReader_PhonyReader(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_PhonyReader_PhonyReader_init(void **__eFlag__, GC_PARAM(java_lang_PhonyReader,this));
void java_lang_ArrayIndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this));

GC___REF(struct java_lang_ArrayIndexOutOfBoundsException) java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this));

void java_io_InputStream_initializer(void **__eFlag__, GC_PARAM(java_io_InputStream,this));

GC___REF(struct java_io_InputStream) java_io_InputStream_InputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_io_InputStream_InputStream_init(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
JInt java_io_InputStream_read(void **__eFlag__ ,GC_PARAM(java_io_InputStream,this));
JInt java_io_InputStream_read_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_InputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);

GC_GLOBALS

/* Declare phony Object ref to be used when */
/* return value is not used by the application */
GC_REF(java_lang_Object, ___phonyObj___);


/* method: Main.main(java.lang.String[]) */
GC_PROC_BEGIN(
    Main_main_java_lang_StringA,
    GC_PARAM(RefArray,args))
  GC_PARAM_REF(RefArray, args);
  GC_FUNC_ENTER;
{
  JInt i;
  GC_REF(se_lth_cs_realtime_semaphore_MutexSem,sem);
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem,sem2);
  GC_REF(done_ClockInput,ci);
  GC_REF(done_ClockOutput,co);
  GC_REF(todo_AlarmClock,control);
  i = 0;
  if (i > 0)
  {
    GC_PROC_CALL(done_ClockInput_giveInput);CHECK(0);
  }
  GC_PROC_CALL(done_ClockOutput_setupAlarm);CHECK(0);
  GC_PUSH_ROOT(sem);
  GC_REF_FUNC_CALL(sem, se_lth_cs_realtime_semaphore_MutexSem_MutexSem, &se_lth_cs_realtime_semaphore_MutexSem_Class, GC_PASS(se_lth_cs_realtime_semaphore_MutexSem_Layout));CHECK(0);
  GC_PUSH_ROOT(sem2);
  GC_REF_FUNC_CALL(sem2, se_lth_cs_realtime_semaphore_CountingSem_CountingSem, &se_lth_cs_realtime_semaphore_CountingSem_Class, GC_PASS(se_lth_cs_realtime_semaphore_CountingSem_Layout));CHECK(0);
  GC_PUSH_ROOT(ci);
  GC_REF_FUNC_CALL(ci, done_ClockInput_ClockInput, &done_ClockInput_Class, GC_PASS(done_ClockInput_Layout));CHECK(0);
  GC_PUSH_ROOT(co);
  GC_REF_FUNC_CALL(co, done_ClockOutput_ClockOutput, &done_ClockOutput_Class, GC_PASS(done_ClockOutput_Layout));CHECK(0);
  GC_PUSH_ROOT(control);
  GC_REF_FUNC_CALL(control, todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput, &todo_AlarmClock_Class, GC_PASS(todo_AlarmClock_Layout), GC_PASS(ci), GC_PASS(co));CHECK(0);
  {
    struct todo_AlarmClock_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, control, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(control));
  }CHECK(0);
  GC_POP_ROOT(control);
  GC_POP_ROOT(co);
  GC_POP_ROOT(ci);
  GC_POP_ROOT(sem2);
  GC_POP_ROOT(sem);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(Main_main_java_lang_StringA)


GC_PROC_BEGIN(java_lang_Thread_initializer,GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Thread_initializer)


/* constructor: Thread() */
GC_REF_FUNC_BEGIN(java_lang_Thread,
    java_lang_Thread_Thread,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Thread, java_lang_Thread_Thread)


/* init func: Thread() */
GC_PROC_BEGIN(
    java_lang_Thread_Thread_init,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JLong auxLong;
      JInt auxInt;
      if (false)
      {
        GC_REF(java_lang_InterruptedException,e);
        GC_PUSH_ROOT(e);
        GC_REF_FUNC_CALL(e, java_lang_InterruptedException_InterruptedException, &java_lang_InterruptedException_Class, GC_PASS(java_lang_InterruptedException_Layout));CHECK(0);
        GC_POP_ROOT(e);
      }
      GC_SET(this, _java_lang_Object_interruptedFlag, false);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(auxLong, _tmp_method->methodTbl->createThread, GC_PASS(this));
      }CHECK(0);
      GC_SET(this, _java_lang_Thread_target, auxLong);
      GC_SET_REF(this, _java_lang_Thread_targetRun, this);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->inheritPriority, GC_PASS(this));
      }CHECK(0);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Thread_Thread_init)


/* constructor: Thread(Runnable target) */
GC_REF_FUNC_BEGIN(java_lang_Thread,
    java_lang_Thread_Thread_java_lang_Runnable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_Runnable,target))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_Runnable, target);
  GC_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Thread_Thread_java_lang_Runnable_init, GC_PASS(this), GC_PASS(target));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Thread, java_lang_Thread_Thread_java_lang_Runnable)


/* init func: Thread(Runnable target) */
GC_PROC_BEGIN(
    java_lang_Thread_Thread_java_lang_Runnable_init,
    GC_PARAM(java_lang_Thread,this),
    GC_PARAM(java_lang_Runnable,target))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PARAM_REF(java_lang_Runnable, target);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JLong auxLong;
      JInt auxInt;
      GC_SET(this, _java_lang_Object_interruptedFlag, false);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(auxLong, _tmp_method->methodTbl->createThread, GC_PASS(this));
      }CHECK(0);
      GC_SET(this, _java_lang_Thread_target, auxLong);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->inheritPriority, GC_PASS(this));
      }CHECK(0);
      GC_SET_REF(this, _java_lang_Thread_targetRun, target);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Thread_Thread_java_lang_Runnable_init)


/* method: Thread.run() */
GC_PROC_BEGIN(
    java_lang_Thread_run,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Thread_run)


/* method: Thread.isInterrupted() */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_Thread_isInterrupted,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean tmp;
  GC_GET(tmp, this, _java_lang_Object_interruptedFlag);
  __result = tmp;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_Thread_isInterrupted)


GC_PROC_BEGIN(java_lang_Object_initializer,GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_FUNC_ENTER;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Object_initializer)


/* constructor: Object() */
GC_REF_FUNC_BEGIN(java_lang_Object,
    java_lang_Object_Object,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Object,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Object, java_lang_Object_Object)


/* init func: Object() */
GC_PROC_BEGIN(
    java_lang_Object_Object_init,
    GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Object_Object_init)


/* method: Object.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Object_toString,
    GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_0);
  GC_PUSH_ROOT(_tmp_0);
  GC_REF(java_lang_String,_tmp_1);
  GC_PUSH_ROOT(_tmp_1);
  GC_REF_FUNC_CALL(_tmp_1, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Object");
  GC_REF_FUNC_CALL(_tmp_0, java_lang_String_String_java_lang_String, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(_tmp_1));CHECK(0);
GC_ASSIGN(__result, _tmp_0);
  GC_POP_ROOT(_tmp_0);
  GC_POP_ROOT(_tmp_1);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Object_toString)


GC_PROC_BEGIN(java_lang_String_initializer,GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_String_initializer)


/* constructor: String() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String)


/* init func: String() */
GC_PROC_BEGIN(
    java_lang_String_String_init,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_lang_String_value, JAVA_NULL);
      GC_SET(this, _java_lang_String_offset, 0);
      GC_SET(this, _java_lang_String_count, 0);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_init)


/* constructor: String(String str) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, str);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_String_init, GC_PASS(this), GC_PASS(str));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_String)


/* init func: String(String str) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_String_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_REF(JCharArray,_tmp_2);
      GC_PUSH_ROOT(_tmp_2);
      GC_GET_REF(_tmp_2, str, _java_lang_String_value);
      GC_SET_REF(this, _java_lang_String_value, _tmp_2);
      JInt _tmp_3;
      GC_GET(_tmp_3, str, _java_lang_String_offset);
      GC_SET(this, _java_lang_String_offset, _tmp_3);
      JInt _tmp_4;
      GC_GET(_tmp_4, str, _java_lang_String_count);
      GC_SET(this, _java_lang_String_count, _tmp_4);
      JInt _tmp_5;
      GC_GET(_tmp_5, str, _java_lang_String_cachedHashCode);
      GC_SET(this, _java_lang_String_cachedHashCode, _tmp_5);
      GC_POP_ROOT(_tmp_2);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_String_init)


/* constructor: String(char[] data) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_init, GC_PASS(this), GC_PASS(data));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA)


/* init func: String(char[] data) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    JInt _tmp_6;
    GC_GET(_tmp_6, data, _JCharA_length);
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this),GC_PASS(data),0,_tmp_6,false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_init)


/* constructor: String(char[] data, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_init, GC_PASS(this), GC_PASS(data), offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA_int_int)


/* init func: String(char[] data, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this),GC_PASS(data),offset,count,false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_int_int_init)


/* constructor: String(byte[] ascii, int hibyte, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JByteA_int_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JByteArray,ascii),
    JInt hibyte,
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JByteArray, ascii);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JByteA_int_int_int_init, GC_PASS(this), GC_PASS(ascii), hibyte, offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JByteA_int_int_int)


/* init func: String(byte[] ascii, int hibyte, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JByteA_int_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JByteArray,ascii),
    JInt hibyte,
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JByteArray, ascii);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JBoolean _tmp_7;
      JBoolean _tmp_8;
      if (offset < 0) {
        _tmp_8 = true;
      } else {
        if (count < 0) {
          _tmp_8 = true;
        } else {
          _tmp_8 = false;
        }
      }
      if (_tmp_8) {
        _tmp_7 = true;
      } else {
        JInt _tmp_9;
        GC_GET(_tmp_9, ascii, _JByteA_length);
        if (offset + count > _tmp_9) {
          _tmp_7 = true;
        } else {
          _tmp_7 = false;
        }
      }
      if (_tmp_7)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_10);
        GC_PUSH_ROOT(_tmp_10);
        GC_GET_REF(_tmp_10, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_11);
        GC_PUSH_ROOT(_tmp_11);
        GC_REF_FUNC_CALL(_tmp_11, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(byte[],int,int,int) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_10, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_10), GC_PASS(_tmp_11));
        }CHECK(0);
        GC_POP_ROOT(_tmp_11);
        GC_POP_ROOT(_tmp_10);
      }
      GC_REF(JCharArray,_tmp_12);
      GC_PUSH_ROOT(_tmp_12);
      GC_REF_FUNC_CALL(_tmp_12, newJCharArray, count);CHECK(0);
      GC_SET_REF(this, _java_lang_String_value, _tmp_12);
      GC_SET(this, _java_lang_String_offset, 0);
      GC_SET(this, _java_lang_String_count, count);
      hibyte = hibyte << 8;
      offset = offset + count;
      {
        goto __cond_1;
__loop_1:;
        GC_REF(JCharArray,_tmp_13);
        GC_PUSH_ROOT(_tmp_13);
        GC_GET_REF(_tmp_13, this, _java_lang_String_value);
        JChar _tmp_14;
        JByte _tmp_15;
        offset = offset - 1;
        GC_GET_VAR_ARRAY(_tmp_15, ascii, offset);
        _tmp_14 = (JChar) ((hibyte | (_tmp_15 & 0xff)));        GC_SET_VAR_ARRAY(_tmp_13, count, _tmp_14);
        GC_POP_ROOT(_tmp_13);
__cond_1:;
        JBoolean _tmp_16;
        count = count - 1;
        _tmp_16 = count >= 0;
        if (_tmp_16) {
          goto __loop_1;
        }
      }
      GC_POP_ROOT(_tmp_12);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JByteA_int_int_int_init)


/* constructor: String(byte[] data, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JByteA_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JByteArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JByteArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JByteA_int_int_init, GC_PASS(this), GC_PASS(data), offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JByteA_int_int)


/* init func: String(byte[] data, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JByteA_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JByteArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JByteArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JInt o;
      JInt c;
      GC_REF(JCharArray,v);
      GC_REF(java_lang_String,encoding);
      JBoolean _tmp_17;
      JBoolean _tmp_18;
      if (offset < 0) {
        _tmp_18 = true;
      } else {
        if (count < 0) {
          _tmp_18 = true;
        } else {
          _tmp_18 = false;
        }
      }
      if (_tmp_18) {
        _tmp_17 = true;
      } else {
        JInt _tmp_19;
        GC_GET(_tmp_19, data, _JByteA_length);
        if (offset + count > _tmp_19) {
          _tmp_17 = true;
        } else {
          _tmp_17 = false;
        }
      }
      if (_tmp_17)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_20);
        GC_PUSH_ROOT(_tmp_20);
        GC_GET_REF(_tmp_20, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_21);
        GC_PUSH_ROOT(_tmp_21);
        GC_REF_FUNC_CALL(_tmp_21, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(byte[],int,int) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_20, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_20), GC_PASS(_tmp_21));
        }CHECK(0);
        GC_POP_ROOT(_tmp_21);
        GC_POP_ROOT(_tmp_20);
      }
      GC_PUSH_ROOT(v);
      GC_PUSH_ROOT(encoding);
      GC_REF_FUNC_CALL(v, newJCharArray, count);CHECK(0);
      o = 0;
      c = count;
      {
        JInt i;
        i = 0;
        {
          goto __cond_2;
__loop_2:;
          JChar _tmp_22;
          JByte _tmp_23;
          GC_GET_VAR_ARRAY(_tmp_23, data, offset + i);
          _tmp_22 = (JChar) (_tmp_23);          GC_SET_VAR_ARRAY(v, i, _tmp_22);
          i = i + 1;
__cond_2:;
          JBoolean _tmp_24;
          _tmp_24 = i < count;
          if (_tmp_24) {
            goto __loop_2;
          }
        }
      }
      GC_SET_REF(this, _java_lang_String_value, v);
      GC_SET(this, _java_lang_String_offset, o);
      GC_SET(this, _java_lang_String_count, c);
      GC_POP_ROOT(encoding);
      GC_POP_ROOT(v);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JByteA_int_int_init)


/* constructor: String(StringBuffer buffer) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_StringBuffer,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_StringBuffer,buffer))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_StringBuffer, buffer);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_StringBuffer_init, GC_PASS(this), GC_PASS(buffer));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_StringBuffer)


/* init func: String(StringBuffer buffer) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_StringBuffer_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_StringBuffer,buffer))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_StringBuffer, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      EXCEPTION_TRY
      {
        GC_PROC_CALL(ljrt_monitor_enter, GC_PASS(buffer));
        {
          JInt len;
          JBoolean cond;
          GC_SET(this, _java_lang_String_offset, 0);
          JInt _tmp_25;
          GC_GET(_tmp_25, buffer, _java_lang_StringBuffer_count);
          GC_SET(this, _java_lang_String_count, _tmp_25);
          GC_REF(JCharArray,_tmp_26);
          GC_PUSH_ROOT(_tmp_26);
          GC_GET_REF(_tmp_26, buffer, _java_lang_StringBuffer_value);
          GC_GET(len, _tmp_26, _JCharA_length);
          JInt _tmp_27;
          GC_GET(_tmp_27, this, _java_lang_String_count);
          cond = (_tmp_27 << 2) < len;
          if (cond)
          {
            GC_REF(JCharArray,_tmp_28);
            GC_PUSH_ROOT(_tmp_28);
            JInt _tmp_29;
            GC_GET(_tmp_29, this, _java_lang_String_count);
            GC_REF_FUNC_CALL(_tmp_28, newJCharArray, _tmp_29);CHECK(1);
            GC_SET_REF(this, _java_lang_String_value, _tmp_28);
            GC_REF(JCharArray,_tmp_30);
            GC_PUSH_ROOT(_tmp_30);
            GC_GET_REF(_tmp_30, buffer, _java_lang_StringBuffer_value);
            GC_REF(JCharArray,_tmp_31);
            GC_PUSH_ROOT(_tmp_31);
            GC_GET_REF(_tmp_31, this, _java_lang_String_value);
            JInt _tmp_32;
            GC_GET(_tmp_32, this, _java_lang_String_count);
            GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_30), 0, GC_PASS(_tmp_31), 0, _tmp_32);CHECK(1);
            GC_POP_ROOT(_tmp_31);
            GC_POP_ROOT(_tmp_30);
            GC_POP_ROOT(_tmp_28);
          }
          else
          {
            GC_SET(buffer, _java_lang_StringBuffer_shared, true);
            GC_REF(JCharArray,_tmp_33);
            GC_PUSH_ROOT(_tmp_33);
            GC_GET_REF(_tmp_33, buffer, _java_lang_StringBuffer_value);
            GC_SET_REF(this, _java_lang_String_value, _tmp_33);
            GC_POP_ROOT(_tmp_33);
          }
          GC_POP_ROOT(_tmp_26);
        }
      }
      EXCEPTION_NO_CATCH(1)
      EXCEPTION_FINALLY
__branch_1:;
      {
        GC_PROC_CALL(ljrt_monitor_leave, GC_PASS(buffer));
      }
      EXCEPTION_END(0)
    }
  }
  __branch_2:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_StringBuffer_init)


/* constructor: String(StringBuilder buffer) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_StringBuilder,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_StringBuilder,buffer))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_StringBuilder, buffer);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_StringBuilder_init, GC_PASS(this), GC_PASS(buffer));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_StringBuilder)


/* init func: String(StringBuilder buffer) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_StringBuilder_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_StringBuilder,buffer))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_StringBuilder, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(JCharArray,_tmp_34);
    GC_PUSH_ROOT(_tmp_34);
    GC_GET_REF(_tmp_34, buffer, _java_lang_StringBuilder_value);
    JInt _tmp_35;
    GC_GET(_tmp_35, buffer, _java_lang_StringBuilder_count);
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_init, GC_PASS(this),GC_PASS(_tmp_34),0,_tmp_35);CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_34);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_StringBuilder_init)


/* constructor: String(char[] data, int offset, int count, boolean dont_copy) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA_int_int_boolean,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count,
    JBoolean dont_copy)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this), GC_PASS(data), offset, count, dont_copy);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA_int_int_boolean)


/* init func: String(char[] data, int offset, int count, boolean dont_copy) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_int_int_boolean_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count,
    JBoolean dont_copy)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JBoolean _tmp_36;
      JBoolean _tmp_37;
      if (offset < 0) {
        _tmp_37 = true;
      } else {
        if (count < 0) {
          _tmp_37 = true;
        } else {
          _tmp_37 = false;
        }
      }
      if (_tmp_37) {
        _tmp_36 = true;
      } else {
        JInt _tmp_38;
        GC_GET(_tmp_38, data, _JCharA_length);
        if (offset + count > _tmp_38) {
          _tmp_36 = true;
        } else {
          _tmp_36 = false;
        }
      }
      if (_tmp_36)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_39);
        GC_PUSH_ROOT(_tmp_39);
        GC_GET_REF(_tmp_39, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_40);
        GC_PUSH_ROOT(_tmp_40);
        GC_REF_FUNC_CALL(_tmp_40, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(char[],int,int,boolean) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_39, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_39), GC_PASS(_tmp_40));
        }CHECK(0);
        GC_POP_ROOT(_tmp_40);
        GC_POP_ROOT(_tmp_39);
      }
      if (dont_copy)
      {
        GC_SET_REF(this, _java_lang_String_value, data);
        GC_SET(this, _java_lang_String_offset, offset);
      }
      else
      {
        GC_REF(JCharArray,_tmp_41);
        GC_PUSH_ROOT(_tmp_41);
        GC_REF_FUNC_CALL(_tmp_41, newJCharArray, count);CHECK(0);
        GC_SET_REF(this, _java_lang_String_value, _tmp_41);
        GC_REF(JCharArray,_tmp_42);
        GC_PUSH_ROOT(_tmp_42);
        GC_GET_REF(_tmp_42, this, _java_lang_String_value);
        GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(data), offset, GC_PASS(_tmp_42), 0, count);CHECK(0);
        GC_SET(this, _java_lang_String_offset, 0);
        GC_POP_ROOT(_tmp_42);
        GC_POP_ROOT(_tmp_41);
      }
      GC_SET(this, _java_lang_String_count, count);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_int_int_boolean_init)


/* method: String.length() */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_length,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_43;
  GC_GET(_tmp_43, this, _java_lang_String_count);
  __result = _tmp_43;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_length)


/* method: String.getChars(int, int, char[], int) */
GC_PROC_BEGIN(
    java_lang_String_getChars_int_int_charA_int,
    GC_PARAM(java_lang_String,this),
    JInt srcBegin,
    JInt srcEnd,
    GC_PARAM(JCharArray,dst),
    JInt dstBegin)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, dst);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_44;
  JBoolean _tmp_45;
  if (srcBegin < 0) {
    _tmp_45 = true;
  } else {
    if (srcBegin > srcEnd) {
      _tmp_45 = true;
    } else {
      _tmp_45 = false;
    }
  }
  if (_tmp_45) {
    _tmp_44 = true;
  } else {
    JInt _tmp_46;
    GC_GET(_tmp_46, this, _java_lang_String_count);
    if (srcEnd > _tmp_46) {
      _tmp_44 = true;
    } else {
      _tmp_44 = false;
    }
  }
  if (_tmp_44)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_47);
    GC_PUSH_ROOT(_tmp_47);
    GC_REF_FUNC_CALL(_tmp_47, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_47);
    GC_POP_ROOT(_tmp_47);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_47);
  }
  GC_REF(JCharArray,_tmp_48);
  GC_PUSH_ROOT(_tmp_48);
  GC_GET_REF(_tmp_48, this, _java_lang_String_value);
  JInt _tmp_49;
  GC_GET(_tmp_49, this, _java_lang_String_offset);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_48), srcBegin + _tmp_49, GC_PASS(dst), dstBegin, srcEnd - srcBegin);CHECK(0);
  GC_POP_ROOT(_tmp_48);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_String_getChars_int_int_charA_int)


/* method: String.getBytes(java.lang.String) */
GC_REF_FUNC_BEGIN(JByteArray,
    java_lang_String_getBytes_java_lang_String,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,enc))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, enc);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,_tmp_50);
  GC_PUSH_ROOT(_tmp_50);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_50, _tmp_method->methodTbl->getBytes, GC_PASS(this));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_50);
  GC_POP_ROOT(_tmp_50);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, java_lang_String_getBytes_java_lang_String)


/* method: String.getBytes() */
GC_REF_FUNC_BEGIN(JByteArray,
    java_lang_String_getBytes,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,bytes);
  GC_PUSH_ROOT(bytes);
  JInt _tmp_51;
  GC_GET(_tmp_51, this, _java_lang_String_count);
  GC_REF_FUNC_CALL(bytes, newJByteArray, _tmp_51);CHECK(0);
  {
    JInt i;
    i = 0;
    {
      goto __cond_3;
__loop_3:;
      {
        JByte _tmp_52;
        JChar _tmp_53;
        GC_REF(JCharArray,_tmp_54);
        GC_PUSH_ROOT(_tmp_54);
        GC_GET_REF(_tmp_54, this, _java_lang_String_value);
        JInt _tmp_55;
        GC_GET(_tmp_55, this, _java_lang_String_offset);
        GC_GET_VAR_ARRAY(_tmp_53, _tmp_54, _tmp_55 + i);
        _tmp_52 = (JByte) (_tmp_53);        GC_SET_VAR_ARRAY(bytes, i, _tmp_52);
        GC_POP_ROOT(_tmp_54);
      }
      i = i + 1;
__cond_3:;
      JBoolean _tmp_56;
      JInt _tmp_57;
      GC_GET(_tmp_57, this, _java_lang_String_count);
      _tmp_56 = i < _tmp_57;
      if (_tmp_56) {
        goto __loop_3;
      }
    }
  }
GC_ASSIGN(__result, bytes);
  GC_POP_ROOT(bytes);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, java_lang_String_getBytes)


/* method: String.compareTo(java.lang.String) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_compareTo_java_lang_String,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,anotherString))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, anotherString);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_58;
  GC_GET(_tmp_58, this, _java_lang_String_count);
  JInt _tmp_59;
  GC_GET(_tmp_59, anotherString, _java_lang_String_count);
  __result = _tmp_58 - _tmp_59;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_compareTo_java_lang_String)


/* method: String.regionMatches(int, java.lang.String, int, int) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_String_regionMatches_int_java_lang_String_int_int,
    GC_PARAM(java_lang_String,this),
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_60;
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_60, _tmp_method->methodTbl->regionMatches_boolean_int_java_lang_String_int_int, GC_PASS(this), false, toffset, GC_PASS(other), ooffset, len);
  }CHECK(0);
  __result = _tmp_60;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_String_regionMatches_int_java_lang_String_int_int)


/* method: String.regionMatches(boolean, int, java.lang.String, int, int) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_String_regionMatches_boolean_int_java_lang_String_int_int,
    GC_PARAM(java_lang_String,this),
    JBoolean ignoreCase,
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_61;
  JBoolean _tmp_62;
  JBoolean _tmp_63;
  if (toffset < 0) {
    _tmp_63 = true;
  } else {
    if (ooffset < 0) {
      _tmp_63 = true;
    } else {
      _tmp_63 = false;
    }
  }
  if (_tmp_63) {
    _tmp_62 = true;
  } else {
    JInt _tmp_64;
    GC_GET(_tmp_64, this, _java_lang_String_count);
    if (toffset + len > _tmp_64) {
      _tmp_62 = true;
    } else {
      _tmp_62 = false;
    }
  }
  if (_tmp_62) {
    _tmp_61 = true;
  } else {
    JInt _tmp_65;
    GC_GET(_tmp_65, other, _java_lang_String_count);
    if (ooffset + len > _tmp_65) {
      _tmp_61 = true;
    } else {
      _tmp_61 = false;
    }
  }
  if (_tmp_61)
  {
    __result = false;
    goto __branch_1;
  }
  JInt _tmp_66;
  GC_GET(_tmp_66, this, _java_lang_String_offset);
  toffset = toffset + _tmp_66;
  JInt _tmp_67;
  GC_GET(_tmp_67, other, _java_lang_String_offset);
  ooffset = ooffset + _tmp_67;
  {
    goto __cond_4;
__loop_4:;
    {
      JChar c1;
      JChar c2;
      JChar _tmp_68;
      GC_REF(JCharArray,_tmp_69);
      GC_PUSH_ROOT(_tmp_69);
      GC_GET_REF(_tmp_69, this, _java_lang_String_value);
      JInt _tmp_70;
      _tmp_70 = toffset;
      toffset = _tmp_70 + 1;
      GC_GET_VAR_ARRAY(_tmp_68, _tmp_69, _tmp_70);
      c1 = _tmp_68;
      JChar _tmp_71;
      GC_REF(JCharArray,_tmp_72);
      GC_PUSH_ROOT(_tmp_72);
      GC_GET_REF(_tmp_72, other, _java_lang_String_value);
      JInt _tmp_73;
      _tmp_73 = ooffset;
      ooffset = _tmp_73 + 1;
      GC_GET_VAR_ARRAY(_tmp_71, _tmp_72, _tmp_73);
      c2 = _tmp_71;
      JBoolean _tmp_74;
      if (c1 != c2) {
        JBoolean _tmp_75;
        if (!ignoreCase) {
          _tmp_75 = true;
        } else {
          JBoolean _tmp_76;
          JChar _tmp_77;
          GC_VAR_FUNC_CALL(_tmp_77, java_lang_Character_toLowerCase_char, c1);CHECK(0);
          JChar _tmp_78;
          GC_VAR_FUNC_CALL(_tmp_78, java_lang_Character_toLowerCase_char, c2);CHECK(0);
          if (_tmp_77 != _tmp_78) {
            JChar _tmp_79;
            GC_VAR_FUNC_CALL(_tmp_79, java_lang_Character_toUpperCase_char, c1);CHECK(0);
            JChar _tmp_80;
            GC_VAR_FUNC_CALL(_tmp_80, java_lang_Character_toUpperCase_char, c2);CHECK(0);
            if ((_tmp_79 != _tmp_80)) {
              _tmp_76 = true;
            } else {
              _tmp_76 = false;
            }
          } else {
          _tmp_76 = false;
          }
          if ((_tmp_76)) {
            _tmp_75 = true;
          } else {
            _tmp_75 = false;
          }
        }
        if ((_tmp_75)) {
          _tmp_74 = true;
        } else {
          _tmp_74 = false;
        }
      } else {
      _tmp_74 = false;
      }
      if (_tmp_74)
      {
        __result = false;
        GC_POP_ROOT(_tmp_69);
        GC_POP_ROOT(_tmp_72);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_72);
      GC_POP_ROOT(_tmp_69);
    }
__cond_4:;
    JBoolean _tmp_81;
    len = len - 1;
    _tmp_81 = len >= 0;
    if (_tmp_81) {
      goto __loop_4;
    }
  }
  __result = true;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_String_regionMatches_boolean_int_java_lang_String_int_int)


/* method: String.indexOf(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_indexOf_int_int,
    GC_PARAM(java_lang_String,this),
    JInt ch,
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JChar _tmp_82;
  _tmp_82 = (JChar) (ch);  if (_tmp_82 != ch)
  {
    __result = -1;
    goto __branch_1;
  }
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_83;
  GC_GET(_tmp_83, this, _java_lang_String_offset);
  i = fromIndex + _tmp_83;
  {
    {
      goto __cond_5;
__loop_5:;
      JChar _tmp_84;
      GC_REF(JCharArray,_tmp_85);
      GC_PUSH_ROOT(_tmp_85);
      GC_GET_REF(_tmp_85, this, _java_lang_String_value);
      JInt _tmp_86;
      _tmp_86 = i;
      i = _tmp_86 + 1;
      GC_GET_VAR_ARRAY(_tmp_84, _tmp_85, _tmp_86);
      if (_tmp_84 == ch)
      {
        __result = fromIndex;
        GC_POP_ROOT(_tmp_85);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_85);
      fromIndex = fromIndex + 1;
__cond_5:;
      JBoolean _tmp_87;
      JInt _tmp_88;
      GC_GET(_tmp_88, this, _java_lang_String_count);
      _tmp_87 = fromIndex < _tmp_88;
      if (_tmp_87) {
        goto __loop_5;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_indexOf_int_int)


/* method: String.lastIndexOf(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_lastIndexOf_int_int,
    GC_PARAM(java_lang_String,this),
    JInt ch,
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JChar _tmp_89;
  _tmp_89 = (JChar) (ch);  if (_tmp_89 != ch)
  {
    __result = -1;
    goto __branch_1;
  }
  JInt _tmp_90;
  GC_GET(_tmp_90, this, _java_lang_String_count);
  if (fromIndex >= _tmp_90)
  {
    JInt _tmp_91;
    GC_GET(_tmp_91, this, _java_lang_String_count);
    fromIndex = _tmp_91 - 1;
  }
  JInt _tmp_92;
  GC_GET(_tmp_92, this, _java_lang_String_offset);
  i = fromIndex + _tmp_92;
  {
    {
      goto __cond_6;
__loop_6:;
      JChar _tmp_93;
      GC_REF(JCharArray,_tmp_94);
      GC_PUSH_ROOT(_tmp_94);
      GC_GET_REF(_tmp_94, this, _java_lang_String_value);
      JInt _tmp_95;
      _tmp_95 = i;
      i = _tmp_95 - 1;
      GC_GET_VAR_ARRAY(_tmp_93, _tmp_94, _tmp_95);
      if (_tmp_93 == ch)
      {
        __result = fromIndex;
        GC_POP_ROOT(_tmp_94);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_94);
      fromIndex = fromIndex - 1;
__cond_6:;
      JBoolean _tmp_96;
      _tmp_96 = fromIndex >= 0;
      if (_tmp_96) {
        goto __loop_6;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_lastIndexOf_int_int)


/* method: String.indexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_indexOf_java_lang_String_int,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt limit;
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_97;
  GC_GET(_tmp_97, this, _java_lang_String_count);
  JInt _tmp_98;
  GC_GET(_tmp_98, str, _java_lang_String_count);
  limit = _tmp_97 - _tmp_98;
  {
    {
      goto __cond_7;
__loop_7:;
      JBoolean _tmp_99;
      JInt _tmp_100;
      GC_GET(_tmp_100, str, _java_lang_String_count);
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_99, _tmp_method->methodTbl->regionMatches_int_java_lang_String_int_int, GC_PASS(this), fromIndex, GC_PASS(str), 0, _tmp_100);
      }CHECK(0);
      if (_tmp_99)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex + 1;
__cond_7:;
      JBoolean _tmp_101;
      _tmp_101 = fromIndex <= limit;
      if (_tmp_101) {
        goto __loop_7;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_indexOf_java_lang_String_int)


/* method: String.lastIndexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_lastIndexOf_java_lang_String_int,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_102;
  GC_GET(_tmp_102, this, _java_lang_String_count);
  JInt _tmp_103;
  GC_GET(_tmp_103, str, _java_lang_String_count);
  GC_VAR_FUNC_CALL(fromIndex, java_lang_Math_min_int_int, fromIndex, _tmp_102 - _tmp_103);CHECK(0);
  {
    {
      goto __cond_8;
__loop_8:;
      JBoolean _tmp_104;
      JInt _tmp_105;
      GC_GET(_tmp_105, str, _java_lang_String_count);
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_104, _tmp_method->methodTbl->regionMatches_int_java_lang_String_int_int, GC_PASS(this), fromIndex, GC_PASS(str), 0, _tmp_105);
      }CHECK(0);
      if (_tmp_104)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex - 1;
__cond_8:;
      JBoolean _tmp_106;
      _tmp_106 = fromIndex >= 0;
      if (_tmp_106) {
        goto __loop_8;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_lastIndexOf_java_lang_String_int)


/* method: String.substring(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_substring_int_int,
    GC_PARAM(java_lang_String,this),
    JInt beginIndex,
    JInt endIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JInt len;
  JBoolean _tmp_107;
  JBoolean _tmp_108;
  if (beginIndex < 0) {
    _tmp_108 = true;
  } else {
    JInt _tmp_109;
    GC_GET(_tmp_109, this, _java_lang_String_count);
    if (endIndex > _tmp_109) {
      _tmp_108 = true;
    } else {
      _tmp_108 = false;
    }
  }
  if (_tmp_108) {
    _tmp_107 = true;
  } else {
    if (beginIndex > endIndex) {
      _tmp_107 = true;
    } else {
      _tmp_107 = false;
    }
  }
  if (_tmp_107)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_110);
    GC_PUSH_ROOT(_tmp_110);
    GC_REF_FUNC_CALL(_tmp_110, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_110);
    GC_POP_ROOT(_tmp_110);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_110);
  }
  JBoolean _tmp_111;
  if (beginIndex == 0) {
    JInt _tmp_112;
    GC_GET(_tmp_112, this, _java_lang_String_count);
    if (endIndex == _tmp_112) {
      _tmp_111 = true;
    } else {
      _tmp_111 = false;
    }
  } else {
  _tmp_111 = false;
  }
  if (_tmp_111)
  {
GC_ASSIGN(__result, this);
    goto __branch_1;
  }
  len = endIndex - beginIndex;
  GC_REF(java_lang_String,_tmp_113);
  GC_PUSH_ROOT(_tmp_113);
  GC_REF(JCharArray,_tmp_114);
  GC_PUSH_ROOT(_tmp_114);
  GC_GET_REF(_tmp_114, this, _java_lang_String_value);
  JInt _tmp_115;
  GC_GET(_tmp_115, this, _java_lang_String_offset);
  JInt _tmp_116;
  GC_REF(JCharArray,_tmp_117);
  GC_PUSH_ROOT(_tmp_117);
  GC_GET_REF(_tmp_117, this, _java_lang_String_value);
  GC_GET(_tmp_116, _tmp_117, _JCharA_length);
  GC_REF_FUNC_CALL(_tmp_113, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(_tmp_114), beginIndex + _tmp_115, len, (len << 2) >= _tmp_116);CHECK(0);
GC_ASSIGN(__result, _tmp_113);
  GC_POP_ROOT(_tmp_113);
  GC_POP_ROOT(_tmp_114);
  GC_POP_ROOT(_tmp_117);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_substring_int_int)


/* method: String.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_toString,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_toString)


/* method: String.valueOf(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_charA_int_int,
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_118);
  GC_PUSH_ROOT(_tmp_118);
  GC_REF_FUNC_CALL(_tmp_118, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(data), offset, count, false);CHECK(0);
GC_ASSIGN(__result, _tmp_118);
  GC_POP_ROOT(_tmp_118);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_charA_int_int)


/* method: String.copyValueOf(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_copyValueOf_charA_int_int,
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_119);
  GC_PUSH_ROOT(_tmp_119);
  GC_REF_FUNC_CALL(_tmp_119, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(data), offset, count, false);CHECK(0);
GC_ASSIGN(__result, _tmp_119);
  GC_POP_ROOT(_tmp_119);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_copyValueOf_charA_int_int)


/* method: String.valueOf(boolean) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_boolean,
    JBoolean b)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,s);
  GC_PUSH_ROOT(s);
  if (b)
  {
    GC_REF(java_lang_String,_tmp_120);
    GC_PUSH_ROOT(_tmp_120);
    GC_REF_FUNC_CALL(_tmp_120, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "true");
GC_ASSIGN(__result, _tmp_120);
    GC_POP_ROOT(_tmp_120);
    GC_POP_ROOT(s);
    goto __branch_1;
  }
  else
  {
    GC_REF(java_lang_String,_tmp_121);
    GC_PUSH_ROOT(_tmp_121);
    GC_REF_FUNC_CALL(_tmp_121, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "false");
GC_ASSIGN(__result, _tmp_121);
    GC_POP_ROOT(_tmp_121);
    GC_POP_ROOT(s);
    goto __branch_1;
  }
  GC_POP_ROOT(s);
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_boolean)


/* method: String.valueOf(int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_int,
    JInt i)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_122);
  GC_PUSH_ROOT(_tmp_122);
  GC_REF_FUNC_CALL(_tmp_122, java_lang_Integer_toString_int_int, i, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_122);
  GC_POP_ROOT(_tmp_122);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_int)


/* method: String.valueOf(long) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_long,
    JLong l)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_123);
  GC_PUSH_ROOT(_tmp_123);
  GC_REF_FUNC_CALL(_tmp_123, java_lang_Long_toString_long, l);CHECK(0);
GC_ASSIGN(__result, _tmp_123);
  GC_POP_ROOT(_tmp_123);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_long)


/* method: String.valueOf(float) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_float,
    JFloat f)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_124);
  GC_PUSH_ROOT(_tmp_124);
  GC_REF_FUNC_CALL(_tmp_124, java_lang_Float_toString_float, f);CHECK(0);
GC_ASSIGN(__result, _tmp_124);
  GC_POP_ROOT(_tmp_124);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_float)


/* method: String.valueOf(double) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_double,
    JDouble d)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_125);
  GC_PUSH_ROOT(_tmp_125);
  GC_REF_FUNC_CALL(_tmp_125, java_lang_Double_toString_double, d);CHECK(0);
GC_ASSIGN(__result, _tmp_125);
  GC_POP_ROOT(_tmp_125);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_double)


GC_PROC_BEGIN(java_lang_Throwable_initializer,GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_SET_REF(this, _java_lang_Throwable_cause, this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Throwable_initializer)


/* constructor: Throwable() */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable)


/* init func: Throwable() */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_init,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_126);
    GC_PUSH_ROOT(_tmp_126);
    GC_ASSIGN(_tmp_126, JAVA_NULL);
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(_tmp_126));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_126);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_init)


/* constructor: Throwable(String message) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this), GC_PASS(message));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_String)


/* init func: Throwable(String message) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_String_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      {
        struct java_lang_Throwable_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->fillInStackTrace, GC_PASS(this));
      }CHECK(0);
      GC_SET_REF(this, _java_lang_Throwable_detailMessage, message);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_String_init)


/* constructor: Throwable(String message, Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this), GC_PASS(message), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable)


/* init func: Throwable(String message, Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_String,message),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(message));CHECK(0);
    {
      GC_SET_REF(this, _java_lang_Throwable_cause, cause);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init)


/* constructor: Throwable(Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_Throwable_init, GC_PASS(this), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_Throwable)


/* init func: Throwable(Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_Throwable_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_127);
    GC_PUSH_ROOT(_tmp_127);
    if (GC_IS_NULL(cause)) {
      GC_ASSIGN(_tmp_127, JAVA_NULL);
    } else {
      {
        struct java_lang_Throwable_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, cause, class);
        GC_REF_FUNC_CALL(_tmp_127, _tmp_method->methodTbl->toString, GC_PASS(cause));
      }CHECK(0);
    }
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this),GC_PASS(_tmp_127),GC_PASS(cause));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_127);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_Throwable_init)


/* method: Throwable.getMessage() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_getMessage,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_128);
  GC_PUSH_ROOT(_tmp_128);
  GC_GET_REF(_tmp_128, this, _java_lang_Throwable_detailMessage);
GC_ASSIGN(__result, _tmp_128);
  GC_POP_ROOT(_tmp_128);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_getMessage)


/* method: Throwable.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_toString,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,msg);
  GC_PUSH_ROOT(msg);
  {
    struct java_lang_Throwable_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(msg, _tmp_method->methodTbl->getMessage, GC_PASS(this));
  }CHECK(0);
  if (GC_IS_NULL(msg))
  {
    GC_REF(java_lang_String,_tmp_129);
    GC_PUSH_ROOT(_tmp_129);
    GC_REF_FUNC_CALL(_tmp_129, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
GC_ASSIGN(__result, _tmp_129);
    GC_POP_ROOT(_tmp_129);
    GC_POP_ROOT(msg);
    goto __branch_1;
  }
  else
  {
GC_ASSIGN(__result, msg);
    GC_POP_ROOT(msg);
    goto __branch_1;
  }
  GC_POP_ROOT(msg);
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_toString)


/* method: Throwable.printStackTrace() */
GC_PROC_BEGIN(
    java_lang_Throwable_printStackTrace,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_ErrWriter,_tmp_130);
  GC_PUSH_ROOT(_tmp_130);
  GC_GET_REF(_tmp_130, java_lang_System_Static, _java_lang_System_err);
  {
    struct java_lang_Throwable_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->printStackTrace_java_io_PrintStream, GC_PASS(this), GC_PASS(_tmp_130));
  }CHECK(0);
  GC_POP_ROOT(_tmp_130);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Throwable_printStackTrace)


/* method: Throwable.printStackTrace(java.io.PrintStream) */
GC_PROC_BEGIN(
    java_lang_Throwable_printStackTrace_java_io_PrintStream,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_io_PrintStream,s))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_io_PrintStream, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_131);
  GC_PUSH_ROOT(_tmp_131);
  {
    struct java_lang_Throwable_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_131, _tmp_method->methodTbl->stackTraceString, GC_PASS(this));
  }CHECK(0);
  {
    struct java_io_PrintStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, s, class);
    GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String, GC_PASS(s), GC_PASS(_tmp_131));
  }CHECK(0);
  GC_POP_ROOT(_tmp_131);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Throwable_printStackTrace_java_io_PrintStream)


/* method: Throwable.stackTraceString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_stackTraceString,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,sb);
  GC_PUSH_ROOT(sb);
  GC_REF_FUNC_CALL(sb, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));CHECK(0);
  GC_REF(java_lang_String,_tmp_132);
  GC_PUSH_ROOT(_tmp_132);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(_tmp_132, _tmp_method->methodTbl->toString, GC_PASS(sb));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_132);
  GC_POP_ROOT(sb);
  GC_POP_ROOT(_tmp_132);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_stackTraceString)


/* method: Throwable.fillInStackTrace() */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_fillInStackTrace,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_Throwable, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_fillInStackTrace)


GC_PROC_BEGIN(done_ClockInput_initializer,GC_PARAM(done_ClockInput,this))
  GC_PARAM_REF(done_ClockInput,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(done_ClockInput_initializer)


/* method: ClockInput.getSemaphoreInstance() */
GC_REF_FUNC_BEGIN(se_lth_cs_realtime_semaphore_CountingSem,
    done_ClockInput_getSemaphoreInstance)
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem,_tmp_133);
  GC_PUSH_ROOT(_tmp_133);
  GC_GET_REF(_tmp_133, done_ClockInput_Static, _done_ClockInput_anyButtonChanged);
GC_ASSIGN(__result, _tmp_133);
  GC_POP_ROOT(_tmp_133);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(se_lth_cs_realtime_semaphore_CountingSem, done_ClockInput_getSemaphoreInstance)


/* method: ClockInput.giveInput() */
GC_PROC_BEGIN(
    done_ClockInput_giveInput)
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem,_tmp_134);
  GC_PUSH_ROOT(_tmp_134);
  GC_GET_REF(_tmp_134, done_ClockInput_Static, _done_ClockInput_anyButtonChanged);
  {
    struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_134, class);
    GC_PROC_CALL(_tmp_method->methodTbl->give, GC_PASS(_tmp_134));
  }CHECK(0);
  GC_POP_ROOT(_tmp_134);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(done_ClockInput_giveInput)


/* constructor: ClockInput() */
GC_REF_FUNC_BEGIN(done_ClockInput,
    done_ClockInput_ClockInput,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(done_ClockInput,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(done_ClockInput_initializer,GC_PASS(this));
    GC_PROC_CALL(done_ClockInput_ClockInput_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(done_ClockInput, done_ClockInput_ClockInput)


/* init func: ClockInput() */
GC_PROC_BEGIN(
    done_ClockInput_ClockInput_init,
    GC_PARAM(done_ClockInput,this))
  GC_PARAM_REF(done_ClockInput,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(done_ClockInput_ClockInput_init)


GC_PROC_BEGIN(done_ClockOutput_initializer,GC_PARAM(done_ClockOutput,this))
  GC_PARAM_REF(done_ClockOutput,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(done_ClockOutput_initializer)


/* method: ClockOutput.setupAlarm() */
GC_PROC_BEGIN(
    done_ClockOutput_setupAlarm)
  GC_FUNC_ENTER;
{
  GC_PROC_CALL(done_ClockOutput_setupWindow);CHECK(0);
  GC_REF(done_InputSampler,_tmp_135);
  GC_PUSH_ROOT(_tmp_135);
  GC_REF_FUNC_CALL(_tmp_135, done_InputSampler_InputSampler, &done_InputSampler_Class, GC_PASS(done_InputSampler_Layout));CHECK(0);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_135, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(_tmp_135));
  }CHECK(0);
  GC_POP_ROOT(_tmp_135);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(done_ClockOutput_setupAlarm)


/* constructor: ClockOutput() */
GC_REF_FUNC_BEGIN(done_ClockOutput,
    done_ClockOutput_ClockOutput,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(done_ClockOutput,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(done_ClockOutput_initializer,GC_PASS(this));
    GC_PROC_CALL(done_ClockOutput_ClockOutput_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(done_ClockOutput, done_ClockOutput_ClockOutput)


/* init func: ClockOutput() */
GC_PROC_BEGIN(
    done_ClockOutput_ClockOutput_init,
    GC_PARAM(done_ClockOutput,this))
  GC_PARAM_REF(done_ClockOutput,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(done_ClockOutput_ClockOutput_init)


GC_PROC_BEGIN(se_lth_cs_realtime_semaphore_MutexSem_initializer,GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_MutexSem,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_MutexSem_initializer)


/* constructor: MutexSem() */
GC_REF_FUNC_BEGIN(se_lth_cs_realtime_semaphore_MutexSem,
    se_lth_cs_realtime_semaphore_MutexSem_MutexSem,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(se_lth_cs_realtime_semaphore_MutexSem,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(se_lth_cs_realtime_semaphore_MutexSem_initializer,GC_PASS(this));
    GC_PROC_CALL(se_lth_cs_realtime_semaphore_MutexSem_MutexSem_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(se_lth_cs_realtime_semaphore_MutexSem, se_lth_cs_realtime_semaphore_MutexSem_MutexSem)


/* init func: MutexSem() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_MutexSem_MutexSem_init,
    GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_MutexSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JLong _tmp_136;
      {
        struct se_lth_cs_realtime_semaphore_MutexSem_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_136, _tmp_method->methodTbl->createMutexSem_int, GC_PASS(this), 1);
      }CHECK(0);
      GC_SET(this, _se_lth_cs_realtime_semaphore_MutexSem_target, _tmp_136);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(se_lth_cs_realtime_semaphore_MutexSem_MutexSem_init)


/* method: MutexSem.give() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_MutexSem_give,
    GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_MutexSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JLong _tmp_137;
  GC_GET(_tmp_137, this, _se_lth_cs_realtime_semaphore_MutexSem_target);
  {
    struct se_lth_cs_realtime_semaphore_MutexSem_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->giveMutexSem_long, GC_PASS(this), _tmp_137);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_MutexSem_give)


/* method: MutexSem.take() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_MutexSem_take,
    GC_PARAM(se_lth_cs_realtime_semaphore_MutexSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_MutexSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JLong _tmp_138;
  GC_GET(_tmp_138, this, _se_lth_cs_realtime_semaphore_MutexSem_target);
  {
    struct se_lth_cs_realtime_semaphore_MutexSem_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->takeMutexSem_long, GC_PASS(this), _tmp_138);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_MutexSem_take)


GC_PROC_BEGIN(se_lth_cs_realtime_semaphore_CountingSem_initializer,GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_CountingSem,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_CountingSem_initializer)


/* constructor: CountingSem() */
GC_REF_FUNC_BEGIN(se_lth_cs_realtime_semaphore_CountingSem,
    se_lth_cs_realtime_semaphore_CountingSem_CountingSem,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(se_lth_cs_realtime_semaphore_CountingSem_initializer,GC_PASS(this));
    GC_PROC_CALL(se_lth_cs_realtime_semaphore_CountingSem_CountingSem_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(se_lth_cs_realtime_semaphore_CountingSem, se_lth_cs_realtime_semaphore_CountingSem_CountingSem)


/* init func: CountingSem() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_CountingSem_CountingSem_init,
    GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_CountingSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JLong _tmp_139;
      {
        struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_139, _tmp_method->methodTbl->createCountingSem_int, GC_PASS(this), 0);
      }CHECK(0);
      GC_SET(this, _se_lth_cs_realtime_semaphore_CountingSem_target, _tmp_139);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(se_lth_cs_realtime_semaphore_CountingSem_CountingSem_init)


/* method: CountingSem.give() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_CountingSem_give,
    GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_CountingSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JLong _tmp_140;
  GC_GET(_tmp_140, this, _se_lth_cs_realtime_semaphore_CountingSem_target);
  {
    struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->giveCountingSem_long, GC_PASS(this), _tmp_140);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_CountingSem_give)


/* method: CountingSem.take() */
GC_PROC_BEGIN(
    se_lth_cs_realtime_semaphore_CountingSem_take,
    GC_PARAM(se_lth_cs_realtime_semaphore_CountingSem,this))
  GC_PARAM_REF(se_lth_cs_realtime_semaphore_CountingSem,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JLong _tmp_141;
  GC_GET(_tmp_141, this, _se_lth_cs_realtime_semaphore_CountingSem_target);
  {
    struct se_lth_cs_realtime_semaphore_CountingSem_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->takeCountingSem_long, GC_PASS(this), _tmp_141);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_realtime_semaphore_CountingSem_take)


GC_PROC_BEGIN(todo_AlarmClock_initializer,GC_PARAM(todo_AlarmClock,this))
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_SET(this, _todo_AlarmClock_alarmTime, -1);
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_initializer)


/* constructor: AlarmClock(ClockInput i, ClockOutput o) */
GC_REF_FUNC_BEGIN(todo_AlarmClock,
    todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(done_ClockInput,i),
    GC_PARAM(done_ClockOutput,o))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(done_ClockInput, i);
  GC_PARAM_REF(done_ClockOutput, o);
  GC_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(todo_AlarmClock_initializer,GC_PASS(this));
    GC_PROC_CALL(todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput_init, GC_PASS(this), GC_PASS(i), GC_PASS(o));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(todo_AlarmClock, todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput)


/* init func: AlarmClock(ClockInput i, ClockOutput o) */
GC_PROC_BEGIN(
    todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput_init,
    GC_PARAM(todo_AlarmClock,this),
    GC_PARAM(done_ClockInput,i),
    GC_PARAM(done_ClockOutput,o))
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PARAM_REF(done_ClockInput, i);
  GC_PARAM_REF(done_ClockOutput, o);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _todo_AlarmClock_input, i);
      GC_SET_REF(this, _todo_AlarmClock_output, o);
      GC_REF(se_lth_cs_realtime_semaphore_CountingSem,_tmp_142);
      GC_PUSH_ROOT(_tmp_142);
      GC_REF(done_ClockInput,_tmp_143);
      GC_PUSH_ROOT(_tmp_143);
      GC_GET_REF(_tmp_143, this, _todo_AlarmClock_input);
      GC_REF_FUNC_CALL(_tmp_142, done_ClockInput_getSemaphoreInstance);CHECK(0);
      GC_SET_REF(this, _todo_AlarmClock_signal, _tmp_142);
      GC_POP_ROOT(_tmp_143);
      GC_POP_ROOT(_tmp_142);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(todo_AlarmClock_AlarmClock_done_ClockInput_done_ClockOutput_init)


/* method: AlarmClock.start() */
GC_PROC_BEGIN(
    todo_AlarmClock_start,
    GC_PARAM(todo_AlarmClock,this))
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_144;
  JLong _tmp_145;
  GC_VAR_FUNC_CALL(_tmp_145, java_lang_System_currentTimeMillis);CHECK(0);
  _tmp_144 = (JInt) ((_tmp_145 / 1000 + 7200));  GC_SET(this, _todo_AlarmClock_ssssss, _tmp_144);
  GC_SET(this, _todo_AlarmClock_alarmFlag, false);
  GC_SET(this, _todo_AlarmClock_alarmCounter, 0);
  GC_REF(se_lth_cs_realtime_semaphore_MutexSem,_tmp_146);
  GC_PUSH_ROOT(_tmp_146);
  GC_REF_FUNC_CALL(_tmp_146, se_lth_cs_realtime_semaphore_MutexSem_MutexSem, &se_lth_cs_realtime_semaphore_MutexSem_Class, GC_PASS(se_lth_cs_realtime_semaphore_MutexSem_Layout));CHECK(0);
  GC_SET_REF(this, _todo_AlarmClock_mutex, _tmp_146);
  GC_REF(todo_AlarmClock_Time,_tmp_147);
  GC_PUSH_ROOT(_tmp_147);
  JInt _tmp_148;
  GC_GET(_tmp_148, this, _todo_AlarmClock_ssssss);
  GC_REF(todo_AlarmClock_UserInput,_tmp_149);
  GC_PUSH_ROOT(_tmp_149);
  GC_GET_REF(_tmp_149, this, _todo_AlarmClock_userInput);
  GC_REF_FUNC_CALL(_tmp_147, todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput, &todo_AlarmClock_Time_Class, GC_PASS(todo_AlarmClock_Time_Layout), GC_PASS(this), _tmp_148, GC_PASS(_tmp_149));CHECK(0);
  GC_SET_REF(this, _todo_AlarmClock_time, _tmp_147);
  GC_REF(todo_AlarmClock_UserInput,_tmp_150);
  GC_PUSH_ROOT(_tmp_150);
  GC_REF(todo_AlarmClock_Time,_tmp_151);
  GC_PUSH_ROOT(_tmp_151);
  GC_GET_REF(_tmp_151, this, _todo_AlarmClock_time);
  GC_REF_FUNC_CALL(_tmp_150, todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time, &todo_AlarmClock_UserInput_Class, GC_PASS(todo_AlarmClock_UserInput_Layout), GC_PASS(this), GC_PASS(_tmp_151));CHECK(0);
  GC_SET_REF(this, _todo_AlarmClock_userInput, _tmp_150);
  GC_REF(java_lang_Thread,_tmp_152);
  GC_PUSH_ROOT(_tmp_152);
  GC_REF(todo_AlarmClock_Time,_tmp_153);
  GC_PUSH_ROOT(_tmp_153);
  GC_GET_REF(_tmp_153, this, _todo_AlarmClock_time);
  GC_REF_FUNC_CALL(_tmp_152, java_lang_Thread_Thread_java_lang_Runnable, &java_lang_Thread_Class, GC_PASS(java_lang_Thread_Layout), GC_PASS(_tmp_153));CHECK(0);
  GC_SET_REF(this, _todo_AlarmClock_timeThread, _tmp_152);
  GC_REF(java_lang_Thread,_tmp_154);
  GC_PUSH_ROOT(_tmp_154);
  GC_REF(todo_AlarmClock_UserInput,_tmp_155);
  GC_PUSH_ROOT(_tmp_155);
  GC_GET_REF(_tmp_155, this, _todo_AlarmClock_userInput);
  GC_REF_FUNC_CALL(_tmp_154, java_lang_Thread_Thread_java_lang_Runnable, &java_lang_Thread_Class, GC_PASS(java_lang_Thread_Layout), GC_PASS(_tmp_155));CHECK(0);
  GC_SET_REF(this, _todo_AlarmClock_userInputThread, _tmp_154);
  GC_REF(java_lang_Thread,_tmp_156);
  GC_PUSH_ROOT(_tmp_156);
  GC_GET_REF(_tmp_156, this, _todo_AlarmClock_timeThread);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_156, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(_tmp_156));
  }CHECK(0);
  GC_REF(java_lang_Thread,_tmp_157);
  GC_PUSH_ROOT(_tmp_157);
  GC_GET_REF(_tmp_157, this, _todo_AlarmClock_userInputThread);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_157, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(_tmp_157));
  }CHECK(0);
  GC_POP_ROOT(_tmp_157);
  GC_POP_ROOT(_tmp_156);
  GC_POP_ROOT(_tmp_155);
  GC_POP_ROOT(_tmp_154);
  GC_POP_ROOT(_tmp_153);
  GC_POP_ROOT(_tmp_152);
  GC_POP_ROOT(_tmp_151);
  GC_POP_ROOT(_tmp_150);
  GC_POP_ROOT(_tmp_149);
  GC_POP_ROOT(_tmp_147);
  GC_POP_ROOT(_tmp_146);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_start)


/* method: AlarmClock.setTime(int) */
GC_PROC_BEGIN(
    todo_AlarmClock_setTime_int,
    GC_PARAM(todo_AlarmClock,this),
    JInt hhmmss)
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_158);
  GC_PUSH_ROOT(_tmp_158);
  GC_GET_REF(_tmp_158, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_158, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take, GC_PASS(_tmp_158));
  }CHECK(0);
  JInt _tmp_159;
  {
    struct todo_AlarmClock_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_159, _tmp_method->methodTbl->secondify_int, GC_PASS(this), hhmmss);
  }CHECK(0);
  GC_SET(this, _todo_AlarmClock_ssssss, _tmp_159);
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_160);
  GC_PUSH_ROOT(_tmp_160);
  GC_GET_REF(_tmp_160, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_160, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->give, GC_PASS(_tmp_160));
  }CHECK(0);
  GC_POP_ROOT(_tmp_160);
  GC_POP_ROOT(_tmp_158);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_setTime_int)


/* method: AlarmClock.setAlarm(int) */
GC_PROC_BEGIN(
    todo_AlarmClock_setAlarm_int,
    GC_PARAM(todo_AlarmClock,this),
    JInt hhmmss)
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_161);
  GC_PUSH_ROOT(_tmp_161);
  GC_GET_REF(_tmp_161, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_161, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take, GC_PASS(_tmp_161));
  }CHECK(0);
  GC_SET(this, _todo_AlarmClock_alarmTime, hhmmss);
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_162);
  GC_PUSH_ROOT(_tmp_162);
  GC_GET_REF(_tmp_162, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_162, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->give, GC_PASS(_tmp_162));
  }CHECK(0);
  GC_POP_ROOT(_tmp_162);
  GC_POP_ROOT(_tmp_161);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_setAlarm_int)


/* method: AlarmClock.incTime() */
GC_PROC_BEGIN(
    todo_AlarmClock_incTime,
    GC_PARAM(todo_AlarmClock,this))
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_163);
  GC_PUSH_ROOT(_tmp_163);
  GC_GET_REF(_tmp_163, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_163, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take, GC_PASS(_tmp_163));
  }CHECK(0);
  JInt _tmp_164;
  GC_GET(_tmp_164, this, _todo_AlarmClock_ssssss);
  GC_SET(this, _todo_AlarmClock_ssssss, _tmp_164 + 1);
  GC_REF(done_ClockOutput,_tmp_165);
  GC_PUSH_ROOT(_tmp_165);
  GC_GET_REF(_tmp_165, this, _todo_AlarmClock_output);
  JInt _tmp_166;
  JInt _tmp_167;
  GC_GET(_tmp_167, this, _todo_AlarmClock_ssssss);
  {
    struct todo_AlarmClock_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_166, _tmp_method->methodTbl->toHHMMSS_int, GC_PASS(this), _tmp_167);
  }CHECK(0);
  GC_PROC_CALL(done_ClockOutput_showTime_int, _tmp_166);CHECK(0);
  JBoolean _tmp_168;
  JInt _tmp_169;
  JInt _tmp_170;
  GC_GET(_tmp_170, this, _todo_AlarmClock_ssssss);
  {
    struct todo_AlarmClock_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_169, _tmp_method->methodTbl->toHHMMSS_int, GC_PASS(this), _tmp_170);
  }CHECK(0);
  JInt _tmp_171;
  GC_GET(_tmp_171, this, _todo_AlarmClock_alarmTime);
  if (_tmp_169 == _tmp_171) {
    JBoolean _tmp_172;
    GC_GET(_tmp_172, this, _todo_AlarmClock_alarmFlag);
    if (_tmp_172 == true) {
      _tmp_168 = true;
    } else {
      _tmp_168 = false;
    }
  } else {
  _tmp_168 = false;
  }
  if (_tmp_168)
  {
    GC_SET(this, _todo_AlarmClock_alarmCounter, 20);
  }
  JInt _tmp_173;
  GC_GET(_tmp_173, this, _todo_AlarmClock_alarmCounter);
  if (_tmp_173 > 0)
  {
    GC_REF(done_ClockOutput,_tmp_174);
    GC_PUSH_ROOT(_tmp_174);
    GC_GET_REF(_tmp_174, this, _todo_AlarmClock_output);
    GC_PROC_CALL(done_ClockOutput_doAlarm);CHECK(0);
    JInt _tmp_175;
    GC_GET(_tmp_175, this, _todo_AlarmClock_alarmCounter);
    GC_SET(this, _todo_AlarmClock_alarmCounter, _tmp_175 - 1);
    GC_POP_ROOT(_tmp_174);
  }
  GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_176);
  GC_PUSH_ROOT(_tmp_176);
  GC_GET_REF(_tmp_176, this, _todo_AlarmClock_mutex);
  {
    struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_176, class);
    GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->give, GC_PASS(_tmp_176));
  }CHECK(0);
  GC_POP_ROOT(_tmp_176);
  GC_POP_ROOT(_tmp_165);
  GC_POP_ROOT(_tmp_163);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_incTime)


/* method: AlarmClock.handleAlarm(boolean) */
GC_PROC_BEGIN(
    todo_AlarmClock_handleAlarm_boolean,
    GC_PARAM(todo_AlarmClock,this),
    JBoolean alarmFlag)
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  if (alarmFlag == true)
  {
    GC_SET(this, _todo_AlarmClock_alarmCounter, 0);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_handleAlarm_boolean)


/* method: AlarmClock.toHHMMSS(int) */
GC_VAR_FUNC_BEGIN(JInt,
    todo_AlarmClock_toHHMMSS_int,
    GC_PARAM(todo_AlarmClock,this),
    JInt secs)
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt hours;
  JInt mins;
  hours = (secs / 3600) % 24;
  mins = ((secs - hours * 3600) / 60) % 60;
  __result = hours * 10000 + mins * 100 + secs % 60;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, todo_AlarmClock_toHHMMSS_int)


/* method: AlarmClock.secondify(int) */
GC_VAR_FUNC_BEGIN(JInt,
    todo_AlarmClock_secondify_int,
    GC_PARAM(todo_AlarmClock,this),
    JInt HHMMSS)
  GC_PARAM_REF(todo_AlarmClock,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt hourPart;
  JInt minutePart;
  JInt secPart;
  hourPart = HHMMSS / 10000;
  minutePart = HHMMSS / 100 - 100 * hourPart;
  secPart = HHMMSS - 10000 * hourPart - 100 * minutePart;
  __result = hourPart * 3600 + minutePart * 60 + secPart;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, todo_AlarmClock_secondify_int)


GC_PROC_BEGIN(todo_AlarmClock_UserInput_initializer,GC_PARAM(todo_AlarmClock_UserInput,this))
  GC_PARAM_REF(todo_AlarmClock_UserInput,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_SET(this, _todo_AlarmClock_UserInput_prevState, 0);
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_UserInput_initializer)


/* constructor: UserInput(Time time) */
GC_REF_FUNC_BEGIN(todo_AlarmClock_UserInput,
    todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(todo_AlarmClock, _that_),
    GC_PARAM(todo_AlarmClock_Time,time))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(todo_AlarmClock, _that_);
  GC_PARAM_REF(todo_AlarmClock_Time, time);
  GC_REF(todo_AlarmClock_UserInput,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_SET_REF(this,_that_,_that_)
    GC_PROC_CALL(todo_AlarmClock_UserInput_initializer,GC_PASS(this));
    GC_PROC_CALL(todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time_init, GC_PASS(this), GC_PASS(time));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(todo_AlarmClock_UserInput, todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time)


/* init func: UserInput(Time time) */
GC_PROC_BEGIN(
    todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time_init,
    GC_PARAM(todo_AlarmClock_UserInput,this),
    GC_PARAM(todo_AlarmClock_Time,time))
  GC_PARAM_REF(todo_AlarmClock_UserInput,this);
  GC_PARAM_REF(todo_AlarmClock_Time, time);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _todo_AlarmClock_UserInput_time, time);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(todo_AlarmClock_UserInput_UserInput_todo_AlarmClock_Time_init)


/* method: UserInput.run() */
GC_PROC_BEGIN(
    todo_AlarmClock_UserInput_run,
    GC_PARAM(todo_AlarmClock_UserInput,this))
  GC_PARAM_REF(todo_AlarmClock_UserInput,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    goto __cond_9;
__loop_9:;
    {
      GC_REF(se_lth_cs_realtime_semaphore_Semaphore,_tmp_177);
      GC_PUSH_ROOT(_tmp_177);
            GC_REF(todo_AlarmClock,_tmp_178);
      GC_PUSH_ROOT(_tmp_178);
      GC_GET_REF(_tmp_178, this, _that_);
      GC_GET_REF(_tmp_177, _tmp_178, _todo_AlarmClock_signal);
      {
        struct se_lth_cs_realtime_semaphore_Semaphore_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_177, class);
        GC_PROC_CALL(_tmp_method->ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take, GC_PASS(_tmp_177));
      }CHECK(0);
            GC_REF(todo_AlarmClock,_tmp_179);
      GC_PUSH_ROOT(_tmp_179);
      GC_GET_REF(_tmp_179, this, _that_);
      JBoolean _tmp_180;
      GC_REF(done_ClockInput,_tmp_181);
      GC_PUSH_ROOT(_tmp_181);
            GC_REF(todo_AlarmClock,_tmp_182);
      GC_PUSH_ROOT(_tmp_182);
      GC_GET_REF(_tmp_182, this, _that_);
      GC_GET_REF(_tmp_181, _tmp_182, _todo_AlarmClock_input);
      GC_VAR_FUNC_CALL(_tmp_180, done_ClockInput_getAlarmFlag);CHECK(0);
      GC_SET(_tmp_179, _todo_AlarmClock_alarmFlag, _tmp_180);
      JInt _tmp_183;
      GC_REF(done_ClockInput,_tmp_184);
      GC_PUSH_ROOT(_tmp_184);
            GC_REF(todo_AlarmClock,_tmp_185);
      GC_PUSH_ROOT(_tmp_185);
      GC_GET_REF(_tmp_185, this, _that_);
      GC_GET_REF(_tmp_184, _tmp_185, _todo_AlarmClock_input);
      GC_VAR_FUNC_CALL(_tmp_183, done_ClockInput_getChoice);CHECK(0);
      GC_SET(this, _todo_AlarmClock_UserInput_newState, _tmp_183);
            GC_REF(todo_AlarmClock,_tmp_186);
      GC_PUSH_ROOT(_tmp_186);
      GC_GET_REF(_tmp_186, this, _that_);
      JBoolean _tmp_187;
            GC_REF(todo_AlarmClock,_tmp_188);
      GC_PUSH_ROOT(_tmp_188);
      GC_GET_REF(_tmp_188, this, _that_);
      GC_GET(_tmp_187, _tmp_188, _todo_AlarmClock_alarmFlag);
      {
        struct todo_AlarmClock_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_186, class);
        GC_PROC_CALL(_tmp_method->methodTbl->handleAlarm_boolean, GC_PASS(_tmp_186), _tmp_187);
      }CHECK(0);
      JInt _tmp_189;
      GC_GET(_tmp_189, this, _todo_AlarmClock_UserInput_newState);
      JInt _tmp_190;
      GC_GET(_tmp_190, this, _todo_AlarmClock_UserInput_prevState);
      if (_tmp_189 != _tmp_190)
      {
        JInt _tmp_191;
        GC_GET(_tmp_191, this, _todo_AlarmClock_UserInput_prevState);
        JInt _tmp_192;
        GC_GET(_tmp_192, done_ClockInput_Static, _done_ClockInput_SET_TIME);
        if (_tmp_191 == _tmp_192)
        {
                    GC_REF(todo_AlarmClock,_tmp_193);
          GC_PUSH_ROOT(_tmp_193);
          GC_GET_REF(_tmp_193, this, _that_);
          JInt _tmp_194;
          GC_REF(done_ClockInput,_tmp_195);
          GC_PUSH_ROOT(_tmp_195);
                    GC_REF(todo_AlarmClock,_tmp_196);
          GC_PUSH_ROOT(_tmp_196);
          GC_GET_REF(_tmp_196, this, _that_);
          GC_GET_REF(_tmp_195, _tmp_196, _todo_AlarmClock_input);
          GC_VAR_FUNC_CALL(_tmp_194, done_ClockInput_getValue);CHECK(0);
          {
            struct todo_AlarmClock_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_193, class);
            GC_PROC_CALL(_tmp_method->methodTbl->setTime_int, GC_PASS(_tmp_193), _tmp_194);
          }CHECK(0);
          GC_POP_ROOT(_tmp_196);
          GC_POP_ROOT(_tmp_195);
          GC_POP_ROOT(_tmp_193);
        }
        JInt _tmp_197;
        GC_GET(_tmp_197, this, _todo_AlarmClock_UserInput_prevState);
        JInt _tmp_198;
        GC_GET(_tmp_198, done_ClockInput_Static, _done_ClockInput_SET_ALARM);
        if (_tmp_197 == _tmp_198)
        {
                    GC_REF(todo_AlarmClock,_tmp_199);
          GC_PUSH_ROOT(_tmp_199);
          GC_GET_REF(_tmp_199, this, _that_);
          JInt _tmp_200;
          GC_REF(done_ClockInput,_tmp_201);
          GC_PUSH_ROOT(_tmp_201);
                    GC_REF(todo_AlarmClock,_tmp_202);
          GC_PUSH_ROOT(_tmp_202);
          GC_GET_REF(_tmp_202, this, _that_);
          GC_GET_REF(_tmp_201, _tmp_202, _todo_AlarmClock_input);
          GC_VAR_FUNC_CALL(_tmp_200, done_ClockInput_getValue);CHECK(0);
          {
            struct todo_AlarmClock_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_199, class);
            GC_PROC_CALL(_tmp_method->methodTbl->setAlarm_int, GC_PASS(_tmp_199), _tmp_200);
          }CHECK(0);
          GC_POP_ROOT(_tmp_202);
          GC_POP_ROOT(_tmp_201);
          GC_POP_ROOT(_tmp_199);
        }
      }
      JInt _tmp_203;
      GC_GET(_tmp_203, this, _todo_AlarmClock_UserInput_newState);
      GC_SET(this, _todo_AlarmClock_UserInput_prevState, _tmp_203);
      GC_POP_ROOT(_tmp_188);
      GC_POP_ROOT(_tmp_186);
      GC_POP_ROOT(_tmp_185);
      GC_POP_ROOT(_tmp_184);
      GC_POP_ROOT(_tmp_182);
      GC_POP_ROOT(_tmp_181);
      GC_POP_ROOT(_tmp_179);
      GC_POP_ROOT(_tmp_178);
      GC_POP_ROOT(_tmp_177);
    }
__cond_9:;
    JBoolean _tmp_204;
    JBoolean _tmp_205;
    GC_REF(java_lang_Thread,_tmp_206);
    GC_PUSH_ROOT(_tmp_206);
    GC_REF_FUNC_CALL(_tmp_206, java_lang_Thread_currentThread);CHECK(0);
    {
      struct java_lang_Thread_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_206, class);
      GC_VAR_FUNC_CALL(_tmp_205, _tmp_method->methodTbl->isInterrupted, GC_PASS(_tmp_206));
    }CHECK(0);
    _tmp_204 = !_tmp_205;
    if (_tmp_204) {
      GC_POP_ROOT(_tmp_206);
      goto __loop_9;
    }
    GC_POP_ROOT(_tmp_206);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_UserInput_run)


GC_PROC_BEGIN(todo_AlarmClock_Time_initializer,GC_PARAM(todo_AlarmClock_Time,this))
  GC_PARAM_REF(todo_AlarmClock_Time,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_Time_initializer)


/* constructor: Time(int ssssss, UserInput userInput) */
GC_REF_FUNC_BEGIN(todo_AlarmClock_Time,
    todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(todo_AlarmClock, _that_),
    JInt ssssss,
    GC_PARAM(todo_AlarmClock_UserInput,userInput))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(todo_AlarmClock, _that_);
  GC_PARAM_REF(todo_AlarmClock_UserInput, userInput);
  GC_REF(todo_AlarmClock_Time,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_SET_REF(this,_that_,_that_)
    GC_PROC_CALL(todo_AlarmClock_Time_initializer,GC_PASS(this));
    GC_PROC_CALL(todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput_init, GC_PASS(this), ssssss, GC_PASS(userInput));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(todo_AlarmClock_Time, todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput)


/* init func: Time(int ssssss, UserInput userInput) */
GC_PROC_BEGIN(
    todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput_init,
    GC_PARAM(todo_AlarmClock_Time,this),
    JInt ssssss,
    GC_PARAM(todo_AlarmClock_UserInput,userInput))
  GC_PARAM_REF(todo_AlarmClock_Time,this);
  GC_PARAM_REF(todo_AlarmClock_UserInput, userInput);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(todo_AlarmClock_Time_Time_int_todo_AlarmClock_UserInput_init)


/* method: Time.run() */
GC_PROC_BEGIN(
    todo_AlarmClock_Time_run,
    GC_PARAM(todo_AlarmClock_Time,this))
  GC_PARAM_REF(todo_AlarmClock_Time,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JLong t;
  JLong diff;
  GC_VAR_FUNC_CALL(t, java_lang_System_currentTimeMillis);CHECK(0);
  {
    goto __cond_10;
__loop_10:;
    {
      t = t + 1000;
      JLong _tmp_207;
      GC_VAR_FUNC_CALL(_tmp_207, java_lang_System_currentTimeMillis);CHECK(0);
      diff = t - _tmp_207;
      if (diff > 0)
      {
        EXCEPTION_TRY
        {
          GC_PROC_CALL(java_lang_Thread_sleep_long, diff);CHECK(1);
                    GC_REF(todo_AlarmClock,_tmp_208);
          GC_PUSH_ROOT(_tmp_208);
          GC_GET_REF(_tmp_208, this, _that_);
          {
            struct todo_AlarmClock_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_208, class);
            GC_PROC_CALL(_tmp_method->methodTbl->incTime, GC_PASS(_tmp_208));
          }CHECK(1);
          GC_POP_ROOT(_tmp_208);
        }
        EXCEPTION_CATCH(1,&java_lang_InterruptedException_Class)
__branch_2:;
          GC_REF(java_lang_InterruptedException,e);
          GC_PUSH_ROOT(e);
          EXCEPTION_GET_OBJ(e);
          {
            {
              struct java_lang_Throwable_ClassStruct *_tmp_method;
              GC_GET(_tmp_method, e, class);
              GC_PROC_CALL(_tmp_method->methodTbl->printStackTrace, GC_PASS(e));
            }CHECK(0);
          }
          GC_POP_ROOT(e);
        EXCEPTION_FINALLY
        EXCEPTION_END(0)
      }
    }
__cond_10:;
__branch_1:;
    JBoolean _tmp_209;
    _tmp_209 = true;
    if (_tmp_209) {
      goto __loop_10;
    }
  }
}
__branch_3:;
  GC_FUNC_LEAVE;
GC_PROC_END(todo_AlarmClock_Time_run)


GC_PROC_BEGIN(java_lang_InterruptedException_initializer,GC_PARAM(java_lang_InterruptedException,this))
  GC_PARAM_REF(java_lang_InterruptedException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_InterruptedException_initializer)


/* constructor: InterruptedException() */
GC_REF_FUNC_BEGIN(java_lang_InterruptedException,
    java_lang_InterruptedException_InterruptedException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_InterruptedException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_InterruptedException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_InterruptedException_InterruptedException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_InterruptedException, java_lang_InterruptedException_InterruptedException)


/* init func: InterruptedException() */
GC_PROC_BEGIN(
    java_lang_InterruptedException_InterruptedException_init,
    GC_PARAM(java_lang_InterruptedException,this))
  GC_PARAM_REF(java_lang_InterruptedException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_InterruptedException_InterruptedException_init)


GC_PROC_BEGIN(java_lang_Exception_initializer,GC_PARAM(java_lang_Exception,this))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Exception_initializer)


/* constructor: Exception() */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception)


/* init func: Exception() */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_init,
    GC_PARAM(java_lang_Exception,this))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_init)


/* constructor: Exception(String s) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_String)


/* init func: Exception(String s) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_String_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_String_init)


/* constructor: Exception(String s, Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_String_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init, GC_PASS(this), GC_PASS(s), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_String_java_lang_Throwable)


/* init func: Exception(String s, Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_String,s),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this),GC_PASS(s),GC_PASS(cause));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init)


/* constructor: Exception(Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_Throwable_init, GC_PASS(this), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_Throwable)


/* init func: Exception(Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_Throwable_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_Throwable_init, GC_PASS(this),GC_PASS(cause));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_Throwable_init)


GC_PROC_BEGIN(java_io_PrintStream_initializer,GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_FilterOutputStream_initializer,GC_PASS(this));
    GC_SET(this, _java_io_PrintStream_error_occurred, false);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_initializer)


/* constructor: PrintStream(OutputStream out) */
GC_REF_FUNC_BEGIN(java_io_PrintStream,
    java_io_PrintStream_PrintStream_java_io_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this), GC_PASS(out));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_PrintStream, java_io_PrintStream_PrintStream_java_io_OutputStream)


/* init func: PrintStream(OutputStream out) */
GC_PROC_BEGIN(
    java_io_PrintStream_PrintStream_java_io_OutputStream_init,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init, GC_PASS(this),GC_PASS(out),false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_PrintStream_PrintStream_java_io_OutputStream_init)


/* constructor: PrintStream(OutputStream out, boolean auto_flush) */
GC_REF_FUNC_BEGIN(java_io_PrintStream,
    java_io_PrintStream_PrintStream_java_io_OutputStream_boolean,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out),
    JBoolean auto_flush)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init, GC_PASS(this), GC_PASS(out), auto_flush);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_PrintStream, java_io_PrintStream_PrintStream_java_io_OutputStream_boolean)


/* init func: PrintStream(OutputStream out, boolean auto_flush) */
GC_PROC_BEGIN(
    java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_io_OutputStream,out),
    JBoolean auto_flush)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(out));CHECK(0);
    {
      GC_SET(this, _java_io_PrintStream_auto_flush, auto_flush);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init)


/* method: PrintStream.setError() */
GC_PROC_BEGIN(
    java_io_PrintStream_setError,
    GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_SET(this, _java_io_PrintStream_error_occurred, true);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_setError)


/* method: PrintStream.flush() */
GC_PROC_BEGIN(
    java_io_PrintStream_flush,
    GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_210);
    GC_PUSH_ROOT(_tmp_210);
    GC_GET_REF(_tmp_210, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_210, class);
      GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(_tmp_210));
    }CHECK(1);
    GC_POP_ROOT(_tmp_210);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_211);
      GC_PUSH_ROOT(_tmp_211);
      GC_REF_FUNC_CALL(_tmp_211, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_211, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_211));
      }CHECK(0);
      GC_POP_ROOT(_tmp_211);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_flush)


/* method: PrintStream.print(java.lang.String, boolean) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_java_lang_String_boolean,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str),
    JBoolean println)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  EXCEPTION_TRY
  {
    JInt _tmp_212;
    {
      struct java_lang_String_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, str, class);
      GC_VAR_FUNC_CALL(_tmp_212, _tmp_method->methodTbl->length, GC_PASS(str));
    }CHECK(1);
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->writeChars_java_lang_String_int_int, GC_PASS(this), GC_PASS(str), 0, _tmp_212);
    }CHECK(1);
    if (println)
    {
      GC_REF(JCharArray,_tmp_213);
      GC_PUSH_ROOT(_tmp_213);
      GC_GET_REF(_tmp_213, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      JInt _tmp_214;
      GC_REF(JCharArray,_tmp_215);
      GC_PUSH_ROOT(_tmp_215);
      GC_GET_REF(_tmp_215, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      GC_GET(_tmp_214, _tmp_215, _JCharA_length);
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(_tmp_213), 0, _tmp_214);
      }CHECK(1);
      GC_POP_ROOT(_tmp_215);
      GC_POP_ROOT(_tmp_213);
    }
    JBoolean _tmp_216;
    GC_GET(_tmp_216, this, _java_io_PrintStream_auto_flush);
    if (_tmp_216)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_217);
      GC_PUSH_ROOT(_tmp_217);
      GC_REF_FUNC_CALL(_tmp_217, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_217, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_217));
      }CHECK(0);
      GC_POP_ROOT(_tmp_217);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_java_lang_String_boolean)


/* method: PrintStream.print(char[], int, int, boolean) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_charA_int_int_boolean,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JCharArray,chars),
    JInt pos,
    JInt len,
    JBoolean println)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JCharArray, chars);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  EXCEPTION_TRY
  {
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(chars), pos, len);
    }CHECK(1);
    if (println)
    {
      GC_REF(JCharArray,_tmp_218);
      GC_PUSH_ROOT(_tmp_218);
      GC_GET_REF(_tmp_218, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      JInt _tmp_219;
      GC_REF(JCharArray,_tmp_220);
      GC_PUSH_ROOT(_tmp_220);
      GC_GET_REF(_tmp_220, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      GC_GET(_tmp_219, _tmp_220, _JCharA_length);
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(_tmp_218), 0, _tmp_219);
      }CHECK(1);
      GC_POP_ROOT(_tmp_220);
      GC_POP_ROOT(_tmp_218);
    }
    JBoolean _tmp_221;
    GC_GET(_tmp_221, this, _java_io_PrintStream_auto_flush);
    if (_tmp_221)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_222);
      GC_PUSH_ROOT(_tmp_222);
      GC_REF_FUNC_CALL(_tmp_222, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_222, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_222));
      }CHECK(0);
      GC_POP_ROOT(_tmp_222);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_charA_int_int_boolean)


/* method: PrintStream.writeChars(char[], int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_writeChars_charA_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JCharArray,buf),
    JInt offset,
    JInt count)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JCharArray, buf);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,bytes);
  GC_PUSH_ROOT(bytes);
  GC_REF(java_lang_String,_tmp_223);
  GC_PUSH_ROOT(_tmp_223);
  GC_REF_FUNC_CALL(_tmp_223, java_lang_String_String_JCharA_int_int, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buf), offset, count);CHECK(0);
  GC_REF(java_lang_String,_tmp_224);
  GC_PUSH_ROOT(_tmp_224);
  GC_GET_REF(_tmp_224, this, _java_io_PrintStream_encoding);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_223, class);
    GC_REF_FUNC_CALL(bytes, _tmp_method->methodTbl->getBytes_java_lang_String, GC_PASS(_tmp_223), GC_PASS(_tmp_224));
  }CHECK(0);
  GC_REF(java_io_OutputStream,_tmp_225);
  GC_PUSH_ROOT(_tmp_225);
  GC_GET_REF(_tmp_225, this, _java_io_FilterOutputStream_out);
  JInt _tmp_226;
  GC_GET(_tmp_226, bytes, _JByteA_length);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_225, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(_tmp_225), GC_PASS(bytes), 0, _tmp_226);
  }CHECK(0);
  GC_POP_ROOT(_tmp_225);
  GC_POP_ROOT(_tmp_224);
  GC_POP_ROOT(_tmp_223);
  GC_POP_ROOT(bytes);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_writeChars_charA_int_int)


/* method: PrintStream.writeChars(java.lang.String, int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_writeChars_java_lang_String_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str),
    JInt offset,
    JInt count)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_writeChars_java_lang_String_int_int)


/* method: PrintStream.print(java.lang.String) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_java_lang_String,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  if (GC_IS_NULL(str))
  {
    GC_REF(java_lang_String,_tmp_227);
    GC_PUSH_ROOT(_tmp_227);
    GC_REF_FUNC_CALL(_tmp_227, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String_boolean, GC_PASS(this), GC_PASS(_tmp_227), false);
    }CHECK(0);
    GC_POP_ROOT(_tmp_227);
  }
  else
  {
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String_boolean, GC_PASS(this), GC_PASS(str), false);
    }CHECK(0);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_java_lang_String)


/* method: PrintStream.write(int) */
GC_PROC_BEGIN(
    java_io_PrintStream_write_int,
    GC_PARAM(java_io_PrintStream,this),
    JInt oneByte)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_228);
    GC_PUSH_ROOT(_tmp_228);
    GC_GET_REF(_tmp_228, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_228, class);
      GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(_tmp_228), oneByte & 0xff);
    }CHECK(1);
    JBoolean _tmp_229;
    JBoolean _tmp_230;
    GC_GET(_tmp_230, this, _java_io_PrintStream_auto_flush);
    if (_tmp_230) {
      if ((oneByte == '\n')) {
        _tmp_229 = true;
      } else {
        _tmp_229 = false;
      }
    } else {
    _tmp_229 = false;
    }
    if (_tmp_229)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
    GC_POP_ROOT(_tmp_228);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_231);
      GC_PUSH_ROOT(_tmp_231);
      GC_REF_FUNC_CALL(_tmp_231, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_231, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_231));
      }CHECK(0);
      GC_POP_ROOT(_tmp_231);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_write_int)


/* method: PrintStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_write_byteA_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JByteArray,buffer),
    JInt offset,
    JInt len)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JByteArray, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_232);
    GC_PUSH_ROOT(_tmp_232);
    GC_GET_REF(_tmp_232, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_232, class);
      GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(_tmp_232), GC_PASS(buffer), offset, len);
    }CHECK(1);
    JBoolean _tmp_233;
    GC_GET(_tmp_233, this, _java_io_PrintStream_auto_flush);
    if (_tmp_233)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
    GC_POP_ROOT(_tmp_232);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_234);
      GC_PUSH_ROOT(_tmp_234);
      GC_REF_FUNC_CALL(_tmp_234, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_234, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_234));
      }CHECK(0);
      GC_POP_ROOT(_tmp_234);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_write_byteA_int_int)


GC_PROC_BEGIN(java_lang_IllegalArgumentException_initializer,GC_PARAM(java_lang_IllegalArgumentException,this))
  GC_PARAM_REF(java_lang_IllegalArgumentException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IllegalArgumentException_initializer)


/* constructor: IllegalArgumentException() */
GC_REF_FUNC_BEGIN(java_lang_IllegalArgumentException,
    java_lang_IllegalArgumentException_IllegalArgumentException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IllegalArgumentException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IllegalArgumentException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IllegalArgumentException_IllegalArgumentException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IllegalArgumentException, java_lang_IllegalArgumentException_IllegalArgumentException)


/* init func: IllegalArgumentException() */
GC_PROC_BEGIN(
    java_lang_IllegalArgumentException_IllegalArgumentException_init,
    GC_PARAM(java_lang_IllegalArgumentException,this))
  GC_PARAM_REF(java_lang_IllegalArgumentException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IllegalArgumentException_IllegalArgumentException_init)


GC_PROC_BEGIN(java_lang_RuntimeException_initializer,GC_PARAM(java_lang_RuntimeException,this))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_RuntimeException_initializer)


/* constructor: RuntimeException() */
GC_REF_FUNC_BEGIN(java_lang_RuntimeException,
    java_lang_RuntimeException_RuntimeException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_RuntimeException, java_lang_RuntimeException_RuntimeException)


/* init func: RuntimeException() */
GC_PROC_BEGIN(
    java_lang_RuntimeException_RuntimeException_init,
    GC_PARAM(java_lang_RuntimeException,this))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_RuntimeException_RuntimeException_init)


/* constructor: RuntimeException(String s) */
GC_REF_FUNC_BEGIN(java_lang_RuntimeException,
    java_lang_RuntimeException_RuntimeException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_RuntimeException, java_lang_RuntimeException_RuntimeException_java_lang_String)


/* init func: RuntimeException(String s) */
GC_PROC_BEGIN(
    java_lang_RuntimeException_RuntimeException_java_lang_String_init,
    GC_PARAM(java_lang_RuntimeException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_RuntimeException_RuntimeException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_StringBuilder_initializer,GC_PARAM(java_lang_StringBuilder,this))
  GC_PARAM_REF(java_lang_StringBuilder,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuilder_initializer)


/* method: StringBuilder.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuilder_toString,
    GC_PARAM(java_lang_StringBuilder,this))
  GC_PARAM_REF(java_lang_StringBuilder,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_235);
  GC_PUSH_ROOT(_tmp_235);
  GC_REF_FUNC_CALL(_tmp_235, java_lang_String_String_java_lang_StringBuilder, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(this));CHECK(0);
GC_ASSIGN(__result, _tmp_235);
  GC_POP_ROOT(_tmp_235);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuilder_toString)


GC_PROC_BEGIN(java_lang_StringBuffer_initializer,GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuffer_initializer)


/* constructor: StringBuffer() */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_StringBuffer,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringBuffer_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_StringBuffer)


/* init func: StringBuffer() */
GC_PROC_BEGIN(
    java_lang_StringBuffer_StringBuffer_init,
    GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    JInt _tmp_236;
    GC_GET(_tmp_236, java_lang_StringBuffer_Static, _java_lang_StringBuffer_DEFAULT_CAPACITY);
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_int_init, GC_PASS(this),_tmp_236);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringBuffer_StringBuffer_init)


/* constructor: StringBuffer(int capacity) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_StringBuffer_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt capacity)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringBuffer_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_int_init, GC_PASS(this), capacity);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_StringBuffer_int)


/* init func: StringBuffer(int capacity) */
GC_PROC_BEGIN(
    java_lang_StringBuffer_StringBuffer_int_init,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt capacity)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_REF(JCharArray,_tmp_237);
      GC_PUSH_ROOT(_tmp_237);
      GC_REF_FUNC_CALL(_tmp_237, newJCharArray, capacity);CHECK(0);
      GC_SET_REF(this, _java_lang_StringBuffer_value, _tmp_237);
      GC_POP_ROOT(_tmp_237);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringBuffer_StringBuffer_int_init)


/* method: StringBuffer.append(java.lang.Object) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_Object,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_Object,obj))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_Object, obj);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_238);
  GC_PUSH_ROOT(_tmp_238);
  GC_REF(java_lang_String,_tmp_239);
  GC_PUSH_ROOT(_tmp_239);
  if (GC_IS_NULL(obj)) {
    GC_REF_FUNC_CALL(_tmp_239, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  } else {
    {
      struct java_lang_Object_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, obj, class);
      GC_REF_FUNC_CALL(_tmp_239, _tmp_method->methodTbl->toString, GC_PASS(obj));
    }CHECK(0);
  }
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_238, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_239));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_238);
  GC_POP_ROOT(_tmp_238);
  GC_POP_ROOT(_tmp_239);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_Object)


/* method: StringBuffer.append(java.lang.String) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt len;
  if (GC_IS_NULL(str))
  {
    GC_REF_FUNC_CALL(str, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  }
  GC_GET(len, str, _java_lang_String_count);
  JInt _tmp_240;
  GC_GET(_tmp_240, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_240 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_241);
  GC_PUSH_ROOT(_tmp_241);
  GC_GET_REF(_tmp_241, this, _java_lang_StringBuffer_value);
  JInt _tmp_242;
  GC_GET(_tmp_242, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_PROC_CALL(_tmp_method->methodTbl->getChars_int_int_charA_int, GC_PASS(str), 0, len, GC_PASS(_tmp_241), _tmp_242);
  }CHECK(0);
  JInt _tmp_243;
  GC_GET(_tmp_243, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_243 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_241);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_String)


/* method: StringBuffer.append(java.lang.StringBuffer) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_StringBuffer,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_StringBuffer,stringBuffer))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_StringBuffer, stringBuffer);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  if (GC_IS_NULL(stringBuffer))
  {
    GC_REF(java_lang_StringBuffer,_tmp_244);
    GC_PUSH_ROOT(_tmp_244);
    GC_REF(java_lang_String,_tmp_245);
    GC_PUSH_ROOT(_tmp_245);
    GC_REF_FUNC_CALL(_tmp_245, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_244, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_245));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_244);
    GC_POP_ROOT(_tmp_244);
    GC_POP_ROOT(_tmp_245);
    goto __branch_2;
    GC_POP_ROOT(_tmp_245);
    GC_POP_ROOT(_tmp_244);
  }
  EXCEPTION_TRY
  {
    GC_PROC_CALL(ljrt_monitor_enter, GC_PASS(stringBuffer));
    {
      JInt len;
      GC_GET(len, stringBuffer, _java_lang_StringBuffer_count);
      JInt _tmp_246;
      GC_GET(_tmp_246, this, _java_lang_StringBuffer_count);
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_246 + len);
      }CHECK(1);
      GC_REF(JCharArray,_tmp_247);
      GC_PUSH_ROOT(_tmp_247);
      GC_GET_REF(_tmp_247, stringBuffer, _java_lang_StringBuffer_value);
      GC_REF(JCharArray,_tmp_248);
      GC_PUSH_ROOT(_tmp_248);
      GC_GET_REF(_tmp_248, this, _java_lang_StringBuffer_value);
      JInt _tmp_249;
      GC_GET(_tmp_249, this, _java_lang_StringBuffer_count);
      GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_247), 0, GC_PASS(_tmp_248), _tmp_249, len);CHECK(1);
      JInt _tmp_250;
      GC_GET(_tmp_250, this, _java_lang_StringBuffer_count);
      GC_SET(this, _java_lang_StringBuffer_count, _tmp_250 + len);
      GC_POP_ROOT(_tmp_248);
      GC_POP_ROOT(_tmp_247);
    }
  }
  EXCEPTION_NO_CATCH(1)
  EXCEPTION_FINALLY
__branch_1:;
  {
    GC_PROC_CALL(ljrt_monitor_leave, GC_PASS(stringBuffer));
  }
  EXCEPTION_END(0)
GC_ASSIGN(__result, this);
  goto __branch_2;
}
__branch_2:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_StringBuffer)


/* method: StringBuffer.append(char[]) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_charA,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_251);
  GC_PUSH_ROOT(_tmp_251);
  JInt _tmp_252;
  GC_GET(_tmp_252, data, _JCharA_length);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_251, _tmp_method->methodTbl->append_charA_int_int, GC_PASS(this), GC_PASS(data), 0, _tmp_252);
  }CHECK(0);
GC_ASSIGN(__result, _tmp_251);
  GC_POP_ROOT(_tmp_251);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_charA)


/* method: StringBuffer.append(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_charA_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_253;
  JBoolean _tmp_254;
  if (offset < 0) {
    _tmp_254 = true;
  } else {
    if (count < 0) {
      _tmp_254 = true;
    } else {
      _tmp_254 = false;
    }
  }
  if (_tmp_254) {
    _tmp_253 = true;
  } else {
    JInt _tmp_255;
    GC_GET(_tmp_255, data, _JCharA_length);
    if (offset > _tmp_255 - count) {
      _tmp_253 = true;
    } else {
      _tmp_253 = false;
    }
  }
  if (_tmp_253)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_256);
    GC_PUSH_ROOT(_tmp_256);
    GC_REF_FUNC_CALL(_tmp_256, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_256);
    GC_POP_ROOT(_tmp_256);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_256);
  }
  JInt _tmp_257;
  GC_GET(_tmp_257, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_257 + count);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_258);
  GC_PUSH_ROOT(_tmp_258);
  GC_GET_REF(_tmp_258, this, _java_lang_StringBuffer_value);
  JInt _tmp_259;
  GC_GET(_tmp_259, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(data), offset, GC_PASS(_tmp_258), _tmp_259, count);CHECK(0);
  JInt _tmp_260;
  GC_GET(_tmp_260, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_260 + count);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_258);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_charA_int_int)


/* method: StringBuffer.append(boolean) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_boolean,
    GC_PARAM(java_lang_StringBuffer,this),
    JBoolean bool)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  if (bool)
  {
    GC_REF(java_lang_StringBuffer,_tmp_261);
    GC_PUSH_ROOT(_tmp_261);
    GC_REF(java_lang_String,_tmp_262);
    GC_PUSH_ROOT(_tmp_262);
    GC_REF_FUNC_CALL(_tmp_262, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "true");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_261, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_262));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_261);
    GC_POP_ROOT(_tmp_261);
    GC_POP_ROOT(_tmp_262);
    goto __branch_1;
  }
  else
  {
    GC_REF(java_lang_StringBuffer,_tmp_263);
    GC_PUSH_ROOT(_tmp_263);
    GC_REF(java_lang_String,_tmp_264);
    GC_PUSH_ROOT(_tmp_264);
    GC_REF_FUNC_CALL(_tmp_264, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "false");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_263, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_264));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_263);
    GC_POP_ROOT(_tmp_263);
    GC_POP_ROOT(_tmp_264);
    goto __branch_1;
  }
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_boolean)


/* method: StringBuffer.append(char) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_char,
    GC_PARAM(java_lang_StringBuffer,this),
    JChar ch)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt _tmp_265;
  GC_GET(_tmp_265, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_265 + 1);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_266);
  GC_PUSH_ROOT(_tmp_266);
  GC_GET_REF(_tmp_266, this, _java_lang_StringBuffer_value);
  JInt _tmp_267;
  GC_GET(_tmp_267, this, _java_lang_StringBuffer_count);
  GC_SET_VAR_ARRAY(_tmp_266, _tmp_267, ch);
  JInt _tmp_268;
  GC_GET(_tmp_268, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_268 + 1);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_266);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_char)


/* method: StringBuffer.append(int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt inum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_269);
  GC_PUSH_ROOT(_tmp_269);
  GC_REF(java_lang_String,_tmp_270);
  GC_PUSH_ROOT(_tmp_270);
  GC_REF_FUNC_CALL(_tmp_270, java_lang_String_valueOf_int, inum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_269, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_270));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_269);
  GC_POP_ROOT(_tmp_269);
  GC_POP_ROOT(_tmp_270);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_int)


/* method: StringBuffer.append(long) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_long,
    GC_PARAM(java_lang_StringBuffer,this),
    JLong lnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_271);
  GC_PUSH_ROOT(_tmp_271);
  GC_REF(java_lang_String,_tmp_272);
  GC_PUSH_ROOT(_tmp_272);
  GC_REF_FUNC_CALL(_tmp_272, java_lang_Long_toString_long_int, lnum, 10);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_271, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_272));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_271);
  GC_POP_ROOT(_tmp_271);
  GC_POP_ROOT(_tmp_272);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_long)


/* method: StringBuffer.append(float) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_float,
    GC_PARAM(java_lang_StringBuffer,this),
    JFloat fnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_273);
  GC_PUSH_ROOT(_tmp_273);
  GC_REF(java_lang_String,_tmp_274);
  GC_PUSH_ROOT(_tmp_274);
  GC_REF_FUNC_CALL(_tmp_274, java_lang_Float_toString_float, fnum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_273, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_274));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_273);
  GC_POP_ROOT(_tmp_273);
  GC_POP_ROOT(_tmp_274);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_float)


/* method: StringBuffer.append(double) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_double,
    GC_PARAM(java_lang_StringBuffer,this),
    JDouble dnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_275);
  GC_PUSH_ROOT(_tmp_275);
  GC_REF(java_lang_String,_tmp_276);
  GC_PUSH_ROOT(_tmp_276);
  GC_REF_FUNC_CALL(_tmp_276, java_lang_Double_toString_double, dnum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_275, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_276));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_275);
  GC_POP_ROOT(_tmp_275);
  GC_POP_ROOT(_tmp_276);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_double)


/* method: StringBuffer.delete(int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_delete_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt start,
    JInt end)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_277;
  JBoolean _tmp_278;
  if (start < 0) {
    _tmp_278 = true;
  } else {
    JInt _tmp_279;
    GC_GET(_tmp_279, this, _java_lang_StringBuffer_count);
    if (start > _tmp_279) {
      _tmp_278 = true;
    } else {
      _tmp_278 = false;
    }
  }
  if (_tmp_278) {
    _tmp_277 = true;
  } else {
    if (start > end) {
      _tmp_277 = true;
    } else {
      _tmp_277 = false;
    }
  }
  if (_tmp_277)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_280);
    GC_PUSH_ROOT(_tmp_280);
    GC_REF_FUNC_CALL(_tmp_280, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout), start);CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_280);
    GC_POP_ROOT(_tmp_280);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_280);
  }
  JInt _tmp_281;
  GC_GET(_tmp_281, this, _java_lang_StringBuffer_count);
  if (end > _tmp_281)
  {
    GC_GET(end, this, _java_lang_StringBuffer_count);
  }
  JInt _tmp_282;
  GC_GET(_tmp_282, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_282);
  }CHECK(0);
  JInt _tmp_283;
  GC_GET(_tmp_283, this, _java_lang_StringBuffer_count);
  if (_tmp_283 - end != 0)
  {
    GC_REF(JCharArray,_tmp_284);
    GC_PUSH_ROOT(_tmp_284);
    GC_GET_REF(_tmp_284, this, _java_lang_StringBuffer_value);
    GC_REF(JCharArray,_tmp_285);
    GC_PUSH_ROOT(_tmp_285);
    GC_GET_REF(_tmp_285, this, _java_lang_StringBuffer_value);
    JInt _tmp_286;
    GC_GET(_tmp_286, this, _java_lang_StringBuffer_count);
    GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_284), end, GC_PASS(_tmp_285), start, _tmp_286 - end);CHECK(0);
    GC_POP_ROOT(_tmp_285);
    GC_POP_ROOT(_tmp_284);
  }
  JInt _tmp_287;
  GC_GET(_tmp_287, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_287 - end - start);
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_delete_int_int)


/* method: StringBuffer.substring(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuffer_substring_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt beginIndex,
    JInt endIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  GC_REF(java_lang_String,_tmp_288);
  GC_PUSH_ROOT(_tmp_288);
  GC_REF_FUNC_CALL(_tmp_288, java_lang_String_String, &java_lang_String_Class, GC_PASS(java_lang_String_Layout));CHECK(0);
GC_ASSIGN(__result, _tmp_288);
  GC_POP_ROOT(_tmp_288);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuffer_substring_int_int)


/* method: StringBuffer.insert(int, char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_insert_int_charA_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt offset,
    GC_PARAM(JCharArray,str),
    JInt str_offset,
    JInt len)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_289;
  JBoolean _tmp_290;
  JBoolean _tmp_291;
  JBoolean _tmp_292;
  if (offset < 0) {
    _tmp_292 = true;
  } else {
    JInt _tmp_293;
    GC_GET(_tmp_293, this, _java_lang_StringBuffer_count);
    if (offset > _tmp_293) {
      _tmp_292 = true;
    } else {
      _tmp_292 = false;
    }
  }
  if (_tmp_292) {
    _tmp_291 = true;
  } else {
    if (len < 0) {
      _tmp_291 = true;
    } else {
      _tmp_291 = false;
    }
  }
  if (_tmp_291) {
    _tmp_290 = true;
  } else {
    if (str_offset < 0) {
      _tmp_290 = true;
    } else {
      _tmp_290 = false;
    }
  }
  if (_tmp_290) {
    _tmp_289 = true;
  } else {
    JInt _tmp_294;
    GC_GET(_tmp_294, str, _JCharA_length);
    if (str_offset > _tmp_294 - len) {
      _tmp_289 = true;
    } else {
      _tmp_289 = false;
    }
  }
  if (_tmp_289)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_295);
    GC_PUSH_ROOT(_tmp_295);
    GC_REF_FUNC_CALL(_tmp_295, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_295);
    GC_POP_ROOT(_tmp_295);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_295);
  }
  JInt _tmp_296;
  GC_GET(_tmp_296, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_296 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_297);
  GC_PUSH_ROOT(_tmp_297);
  GC_GET_REF(_tmp_297, this, _java_lang_StringBuffer_value);
  GC_REF(JCharArray,_tmp_298);
  GC_PUSH_ROOT(_tmp_298);
  GC_GET_REF(_tmp_298, this, _java_lang_StringBuffer_value);
  JInt _tmp_299;
  GC_GET(_tmp_299, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_297), offset, GC_PASS(_tmp_298), offset + len, _tmp_299 - offset);CHECK(0);
  GC_REF(JCharArray,_tmp_300);
  GC_PUSH_ROOT(_tmp_300);
  GC_GET_REF(_tmp_300, this, _java_lang_StringBuffer_value);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(str), str_offset, GC_PASS(_tmp_300), offset, len);CHECK(0);
  JInt _tmp_301;
  GC_GET(_tmp_301, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_301 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_297);
  GC_POP_ROOT(_tmp_298);
  GC_POP_ROOT(_tmp_300);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_insert_int_charA_int_int)


/* method: StringBuffer.insert(int, java.lang.String) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_insert_int_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt offset,
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt len;
  JBoolean _tmp_302;
  if (offset < 0) {
    _tmp_302 = true;
  } else {
    JInt _tmp_303;
    GC_GET(_tmp_303, this, _java_lang_StringBuffer_count);
    if (offset > _tmp_303) {
      _tmp_302 = true;
    } else {
      _tmp_302 = false;
    }
  }
  if (_tmp_302)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_304);
    GC_PUSH_ROOT(_tmp_304);
    GC_REF_FUNC_CALL(_tmp_304, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout), offset);CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_304);
    GC_POP_ROOT(_tmp_304);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_304);
  }
  if (GC_IS_NULL(str))
  {
    GC_REF_FUNC_CALL(str, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  }
  GC_GET(len, str, _java_lang_String_count);
  JInt _tmp_305;
  GC_GET(_tmp_305, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_305 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_306);
  GC_PUSH_ROOT(_tmp_306);
  GC_GET_REF(_tmp_306, this, _java_lang_StringBuffer_value);
  GC_REF(JCharArray,_tmp_307);
  GC_PUSH_ROOT(_tmp_307);
  GC_GET_REF(_tmp_307, this, _java_lang_StringBuffer_value);
  JInt _tmp_308;
  GC_GET(_tmp_308, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_306), offset, GC_PASS(_tmp_307), offset + len, _tmp_308 - offset);CHECK(0);
  GC_REF(JCharArray,_tmp_309);
  GC_PUSH_ROOT(_tmp_309);
  GC_GET_REF(_tmp_309, this, _java_lang_StringBuffer_value);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_PROC_CALL(_tmp_method->methodTbl->getChars_int_int_charA_int, GC_PASS(str), 0, len, GC_PASS(_tmp_309), offset);
  }CHECK(0);
  JInt _tmp_310;
  GC_GET(_tmp_310, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_310 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_306);
  GC_POP_ROOT(_tmp_307);
  GC_POP_ROOT(_tmp_309);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_insert_int_java_lang_String)


/* method: StringBuffer.indexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_StringBuffer_indexOf_java_lang_String_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt limit;
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_311;
  GC_GET(_tmp_311, this, _java_lang_StringBuffer_count);
  JInt _tmp_312;
  GC_GET(_tmp_312, str, _java_lang_String_count);
  limit = _tmp_311 - _tmp_312;
  {
    {
      goto __cond_11;
__loop_11:;
      JBoolean _tmp_313;
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_313, _tmp_method->methodTbl->regionMatches_int_java_lang_String, GC_PASS(this), fromIndex, GC_PASS(str));
      }CHECK(0);
      if (_tmp_313)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex + 1;
__cond_11:;
      JBoolean _tmp_314;
      _tmp_314 = fromIndex <= limit;
      if (_tmp_314) {
        goto __loop_11;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_StringBuffer_indexOf_java_lang_String_int)


/* method: StringBuffer.lastIndexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_StringBuffer_lastIndexOf_java_lang_String_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt _tmp_315;
  GC_GET(_tmp_315, this, _java_lang_StringBuffer_count);
  JInt _tmp_316;
  GC_GET(_tmp_316, str, _java_lang_String_count);
  GC_VAR_FUNC_CALL(fromIndex, java_lang_Math_min_int_int, fromIndex, _tmp_315 - _tmp_316);CHECK(0);
  {
    {
      goto __cond_12;
__loop_12:;
      JBoolean _tmp_317;
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_317, _tmp_method->methodTbl->regionMatches_int_java_lang_String, GC_PASS(this), fromIndex, GC_PASS(str));
      }CHECK(0);
      if (_tmp_317)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex - 1;
__cond_12:;
      JBoolean _tmp_318;
      _tmp_318 = fromIndex >= 0;
      if (_tmp_318) {
        goto __loop_12;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_StringBuffer_lastIndexOf_java_lang_String_int)


/* method: StringBuffer.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuffer_toString,
    GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_319);
  GC_PUSH_ROOT(_tmp_319);
  GC_REF_FUNC_CALL(_tmp_319, java_lang_String_String_java_lang_StringBuffer, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(this));CHECK(0);
GC_ASSIGN(__result, _tmp_319);
  GC_POP_ROOT(_tmp_319);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuffer_toString)


/* method: StringBuffer.ensureCapacity_unsynchronized(int) */
GC_PROC_BEGIN(
    java_lang_StringBuffer_ensureCapacity_unsynchronized_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt minimumCapacity)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_320;
  JBoolean _tmp_321;
  GC_GET(_tmp_321, this, _java_lang_StringBuffer_shared);
  if (_tmp_321) {
    _tmp_320 = true;
  } else {
    JInt _tmp_322;
    GC_REF(JCharArray,_tmp_323);
    GC_PUSH_ROOT(_tmp_323);
    GC_GET_REF(_tmp_323, this, _java_lang_StringBuffer_value);
    GC_GET(_tmp_322, _tmp_323, _JCharA_length);
    if (minimumCapacity > _tmp_322) {
      _tmp_320 = true;
    } else {
      _tmp_320 = false;
    }
    GC_POP_ROOT(_tmp_323);
  }
  if (_tmp_320)
  {
    JInt max;
    GC_REF(JCharArray,nb);
    JInt _tmp_324;
    JInt _tmp_325;
    GC_REF(JCharArray,_tmp_326);
    GC_PUSH_ROOT(_tmp_326);
    GC_GET_REF(_tmp_326, this, _java_lang_StringBuffer_value);
    GC_GET(_tmp_325, _tmp_326, _JCharA_length);
    if (minimumCapacity > _tmp_325) {
      JInt _tmp_327;
      GC_REF(JCharArray,_tmp_328);
      GC_PUSH_ROOT(_tmp_328);
      GC_GET_REF(_tmp_328, this, _java_lang_StringBuffer_value);
      GC_GET(_tmp_327, _tmp_328, _JCharA_length);
      _tmp_324 = _tmp_327 * 2 + 2;
      GC_POP_ROOT(_tmp_328);
    } else {
      GC_REF(JCharArray,_tmp_329);
      GC_PUSH_ROOT(_tmp_329);
      GC_GET_REF(_tmp_329, this, _java_lang_StringBuffer_value);
      GC_GET(_tmp_324, _tmp_329, _JCharA_length);
      GC_POP_ROOT(_tmp_329);
    }
    max = _tmp_324;
    JInt _tmp_330;
    if (minimumCapacity < max) {
      _tmp_330 = max;
    } else {
      _tmp_330 = minimumCapacity;
    }
    minimumCapacity = _tmp_330;
    GC_PUSH_ROOT(nb);
    GC_REF_FUNC_CALL(nb, newJCharArray, minimumCapacity);CHECK(0);
    GC_REF(JCharArray,_tmp_331);
    GC_PUSH_ROOT(_tmp_331);
    GC_GET_REF(_tmp_331, this, _java_lang_StringBuffer_value);
    JInt _tmp_332;
    GC_GET(_tmp_332, this, _java_lang_StringBuffer_count);
    GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_331), 0, GC_PASS(nb), 0, _tmp_332);CHECK(0);
    GC_SET_REF(this, _java_lang_StringBuffer_value, nb);
    GC_SET(this, _java_lang_StringBuffer_shared, false);
    GC_POP_ROOT(_tmp_331);
    GC_POP_ROOT(nb);
    GC_POP_ROOT(_tmp_326);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuffer_ensureCapacity_unsynchronized_int)


/* method: StringBuffer.regionMatches(int, java.lang.String) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_StringBuffer_regionMatches_int_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt toffset,
    GC_PARAM(java_lang_String,other))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JInt len;
  JInt index;
  GC_GET(len, other, _java_lang_String_count);
  GC_GET(index, other, _java_lang_String_offset);
  {
    goto __cond_13;
__loop_13:;
    JChar _tmp_333;
    GC_REF(JCharArray,_tmp_334);
    GC_PUSH_ROOT(_tmp_334);
    GC_GET_REF(_tmp_334, this, _java_lang_StringBuffer_value);
    JInt _tmp_335;
    _tmp_335 = toffset;
    toffset = _tmp_335 + 1;
    GC_GET_VAR_ARRAY(_tmp_333, _tmp_334, _tmp_335);
    JChar _tmp_336;
    GC_REF(JCharArray,_tmp_337);
    GC_PUSH_ROOT(_tmp_337);
    GC_GET_REF(_tmp_337, other, _java_lang_String_value);
    JInt _tmp_338;
    _tmp_338 = index;
    index = _tmp_338 + 1;
    GC_GET_VAR_ARRAY(_tmp_336, _tmp_337, _tmp_338);
    if (_tmp_333 != _tmp_336)
    {
      __result = false;
      GC_POP_ROOT(_tmp_334);
      GC_POP_ROOT(_tmp_337);
      goto __branch_1;
    }
    GC_POP_ROOT(_tmp_337);
    GC_POP_ROOT(_tmp_334);
__cond_13:;
    JBoolean _tmp_339;
    len = len - 1;
    _tmp_339 = len >= 0;
    if (_tmp_339) {
      goto __loop_13;
    }
  }
  __result = true;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_StringBuffer_regionMatches_int_java_lang_String)


GC_PROC_BEGIN(java_lang_System_initializer,GC_PARAM(java_lang_System,this))
  GC_PARAM_REF(java_lang_System,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_System_initializer)


GC_PROC_BEGIN(java_lang_PhonyWriter_initializer,GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyWriter_initializer)


/* constructor: PhonyWriter() */
GC_REF_FUNC_BEGIN(java_lang_PhonyWriter,
    java_lang_PhonyWriter_PhonyWriter,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_PhonyWriter_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_PhonyWriter_PhonyWriter_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_PhonyWriter, java_lang_PhonyWriter_PhonyWriter)


/* init func: PhonyWriter() */
GC_PROC_BEGIN(
    java_lang_PhonyWriter_PhonyWriter_init,
    GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(JAVA_NULL));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_PhonyWriter_PhonyWriter_init)


/* method: PhonyWriter.flush() */
GC_PROC_BEGIN(
    java_lang_PhonyWriter_flush,
    GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyWriter_flush)


GC_PROC_BEGIN(java_io_FilterOutputStream_initializer,GC_PARAM(java_io_FilterOutputStream,this))
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_OutputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_initializer)


/* constructor: FilterOutputStream(OutputStream out) */
GC_REF_FUNC_BEGIN(java_io_FilterOutputStream,
    java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_FilterOutputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init, GC_PASS(this), GC_PASS(out));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_FilterOutputStream, java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream)


/* init func: FilterOutputStream(OutputStream out) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init,
    GC_PARAM(java_io_FilterOutputStream,this),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_OutputStream_OutputStream_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_io_FilterOutputStream_out, out);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init)


/* method: FilterOutputStream.close() */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_close,
    GC_PARAM(java_io_FilterOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    struct java_io_FilterOutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
  }CHECK(0);
  GC_REF(java_io_OutputStream,_tmp_340);
  GC_PUSH_ROOT(_tmp_340);
  GC_GET_REF(_tmp_340, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_340, class);
    GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(_tmp_340));
  }CHECK(0);
  GC_POP_ROOT(_tmp_340);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_close)


/* method: FilterOutputStream.flush() */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_flush,
    GC_PARAM(java_io_FilterOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_io_OutputStream,_tmp_341);
  GC_PUSH_ROOT(_tmp_341);
  GC_GET_REF(_tmp_341, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_341, class);
    GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(_tmp_341));
  }CHECK(0);
  GC_POP_ROOT(_tmp_341);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_flush)


/* method: FilterOutputStream.write(int) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_write_int,
    GC_PARAM(java_io_FilterOutputStream,this),
    JInt b)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_io_OutputStream,_tmp_342);
  GC_PUSH_ROOT(_tmp_342);
  GC_GET_REF(_tmp_342, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_342, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(_tmp_342), b);
  }CHECK(0);
  GC_POP_ROOT(_tmp_342);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_write_int)


/* method: FilterOutputStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_write_byteA_int_int,
    GC_PARAM(java_io_FilterOutputStream,this),
    GC_PARAM(JByteArray,buf),
    JInt offset,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PARAM_REF(JByteArray, buf);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    JInt i;
    i = 0;
    {
      goto __cond_14;
__loop_14:;
      JByte _tmp_343;
      GC_GET_VAR_ARRAY(_tmp_343, buf, offset + i);
      {
        struct java_io_FilterOutputStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(this), _tmp_343);
      }CHECK(0);
      i = i + 1;
__cond_14:;
      JBoolean _tmp_344;
      _tmp_344 = i < len;
      if (_tmp_344) {
        goto __loop_14;
      }
    }
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_write_byteA_int_int)


GC_PROC_BEGIN(java_io_OutputStream_initializer,GC_PARAM(java_io_OutputStream,this))
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_initializer)


/* constructor: OutputStream() */
GC_REF_FUNC_BEGIN(java_io_OutputStream,
    java_io_OutputStream_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_OutputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_OutputStream_OutputStream_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_OutputStream, java_io_OutputStream_OutputStream)


/* init func: OutputStream() */
GC_PROC_BEGIN(
    java_io_OutputStream_OutputStream_init,
    GC_PARAM(java_io_OutputStream,this))
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_OutputStream_OutputStream_init)


/* method: OutputStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_OutputStream_write_byteA_int_int,
    GC_PARAM(java_io_OutputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_345;
  JBoolean _tmp_346;
  if (off < 0) {
    _tmp_346 = true;
  } else {
    if (len < 0) {
      _tmp_346 = true;
    } else {
      _tmp_346 = false;
    }
  }
  if (_tmp_346) {
    _tmp_345 = true;
  } else {
    JInt _tmp_347;
    GC_GET(_tmp_347, b, _JByteA_length);
    if (off + len > _tmp_347) {
      _tmp_345 = true;
    } else {
      _tmp_345 = false;
    }
  }
  if (_tmp_345)
  {
    GC_REF(java_lang_ArrayIndexOutOfBoundsException,_tmp_348);
    GC_PUSH_ROOT(_tmp_348);
    GC_REF_FUNC_CALL(_tmp_348, java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException, &java_lang_ArrayIndexOutOfBoundsException_Class, GC_PASS(java_lang_ArrayIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_348);
    GC_POP_ROOT(_tmp_348);
    EXCEPTION_THROW(0,&java_lang_ArrayIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_348);
  }
  {
    JInt i;
    i = 0;
    {
      goto __cond_15;
__loop_15:;
      JByte _tmp_349;
      GC_GET_VAR_ARRAY(_tmp_349, b, off + i);
      {
        struct java_io_OutputStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(this), _tmp_349);
      }CHECK(0);
      i = i + 1;
__cond_15:;
      JBoolean _tmp_350;
      _tmp_350 = i < len;
      if (_tmp_350) {
        goto __loop_15;
      }
    }
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_write_byteA_int_int)


/* method: OutputStream.flush() */
GC_PROC_BEGIN(
    java_io_OutputStream_flush,
    GC_PARAM(java_io_OutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_flush)


/* method: OutputStream.close() */
GC_PROC_BEGIN(
    java_io_OutputStream_close,
    GC_PARAM(java_io_OutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_close)


GC_PROC_BEGIN(java_lang_StringIndexOutOfBoundsException_initializer,GC_PARAM(java_lang_StringIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_initializer)


/* constructor: StringIndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_StringIndexOutOfBoundsException,
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringIndexOutOfBoundsException, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException)


/* init func: StringIndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init,
    GC_PARAM(java_lang_StringIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init)


/* constructor: StringIndexOutOfBoundsException(int index) */
GC_REF_FUNC_BEGIN(java_lang_StringIndexOutOfBoundsException,
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt index)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init, GC_PASS(this), index);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringIndexOutOfBoundsException, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int)


/* init func: StringIndexOutOfBoundsException(int index) */
GC_PROC_BEGIN(
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init,
    GC_PARAM(java_lang_StringIndexOutOfBoundsException,this),
    JInt index)
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_351);
    GC_PUSH_ROOT(_tmp_351);
    GC_REF(java_lang_StringBuffer,_tmp_352);
    GC_PUSH_ROOT(_tmp_352);
    GC_REF_FUNC_CALL(_tmp_352, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_353);
    GC_PUSH_ROOT(_tmp_353);
    GC_REF_FUNC_CALL(_tmp_353, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String index out of range: ");
    GC_REF_FUNC_CALL(_tmp_352, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_352), GC_PASS(_tmp_353));
    GC_REF_FUNC_CALL(_tmp_352, java_lang_StringBuffer_append_int, GC_PASS(_tmp_352), index);
    GC_REF_FUNC_CALL(_tmp_351, java_lang_StringBuffer_toString, GC_PASS(_tmp_352));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init, GC_PASS(this),GC_PASS(_tmp_351));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_353);
    GC_POP_ROOT(_tmp_352);
    GC_POP_ROOT(_tmp_351);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init)


GC_PROC_BEGIN(java_lang_IndexOutOfBoundsException_initializer,GC_PARAM(java_lang_IndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IndexOutOfBoundsException_initializer)


/* constructor: IndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_IndexOutOfBoundsException,
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IndexOutOfBoundsException, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException)


/* init func: IndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init,
    GC_PARAM(java_lang_IndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init)


/* constructor: IndexOutOfBoundsException(String s) */
GC_REF_FUNC_BEGIN(java_lang_IndexOutOfBoundsException,
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IndexOutOfBoundsException, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String)


/* init func: IndexOutOfBoundsException(String s) */
GC_PROC_BEGIN(
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init,
    GC_PARAM(java_lang_IndexOutOfBoundsException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init)


GC_PROC_BEGIN(java_io_IOException_initializer,GC_PARAM(java_io_IOException,this))
  GC_PARAM_REF(java_io_IOException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_IOException_initializer)


/* constructor: IOException(String message) */
GC_REF_FUNC_BEGIN(java_io_IOException,
    java_io_IOException_IOException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_REF(java_io_IOException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_IOException_IOException_java_lang_String_init, GC_PASS(this), GC_PASS(message));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_IOException, java_io_IOException_IOException_java_lang_String)


/* init func: IOException(String message) */
GC_PROC_BEGIN(
    java_io_IOException_IOException_java_lang_String_init,
    GC_PARAM(java_io_IOException,this),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(java_io_IOException,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this),GC_PASS(message));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_IOException_IOException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_Character_initializer,GC_PARAM(java_lang_Character,this))
  GC_PARAM_REF(java_lang_Character,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Character_initializer)


GC_PROC_BEGIN(java_lang_Character_Subset_initializer,GC_PARAM(java_lang_Character_Subset,this))
  GC_PARAM_REF(java_lang_Character_Subset,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Character_Subset_initializer)


/* method: Subset.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Character_Subset_toString,
    GC_PARAM(java_lang_Character_Subset,this))
  GC_PARAM_REF(java_lang_Character_Subset,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_354);
  GC_PUSH_ROOT(_tmp_354);
  GC_GET_REF(_tmp_354, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_355);
  GC_PUSH_ROOT(_tmp_355);
  GC_REF_FUNC_CALL(_tmp_355, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toString() not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_354, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_354), GC_PASS(_tmp_355));
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_356);
  GC_PUSH_ROOT(_tmp_356);
  GC_REF_FUNC_CALL(_tmp_356, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "foo");
GC_ASSIGN(__result, _tmp_356);
  GC_POP_ROOT(_tmp_354);
  GC_POP_ROOT(_tmp_355);
  GC_POP_ROOT(_tmp_356);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Character_Subset_toString)


/* method: Character.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Character_toString,
    GC_PARAM(java_lang_Character,this))
  GC_PARAM_REF(java_lang_Character,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,tmp);
  GC_PUSH_ROOT(tmp);
  GC_REF_FUNC_CALL(tmp, newJCharArray, 1);CHECK(0);
  JChar _tmp_357;
  GC_GET(_tmp_357, this, _java_lang_Character_value);
  GC_SET_VAR_ARRAY(tmp, 0, _tmp_357);
  GC_REF(java_lang_String,_tmp_358);
  GC_PUSH_ROOT(_tmp_358);
  GC_REF_FUNC_CALL(_tmp_358, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(tmp), 0, 1, true);CHECK(0);
GC_ASSIGN(__result, _tmp_358);
  GC_POP_ROOT(tmp);
  GC_POP_ROOT(_tmp_358);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Character_toString)


/* method: Character.toLowerCase(char) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_Character_toLowerCase_char,
    JChar ch)
  JChar __result;
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_359);
  GC_PUSH_ROOT(_tmp_359);
  GC_GET_REF(_tmp_359, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_360);
  GC_PUSH_ROOT(_tmp_360);
  GC_REF_FUNC_CALL(_tmp_360, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toLowerCase(char) not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_359, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_359), GC_PASS(_tmp_360));
  }CHECK(0);
  __result = 'a';
  GC_POP_ROOT(_tmp_359);
  GC_POP_ROOT(_tmp_360);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_Character_toLowerCase_char)


/* method: Character.toUpperCase(char) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_Character_toUpperCase_char,
    JChar ch)
  JChar __result;
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_361);
  GC_PUSH_ROOT(_tmp_361);
  GC_GET_REF(_tmp_361, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_362);
  GC_PUSH_ROOT(_tmp_362);
  GC_REF_FUNC_CALL(_tmp_362, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toUpperCase(char) not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_361, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_361), GC_PASS(_tmp_362));
  }CHECK(0);
  __result = 'a';
  GC_POP_ROOT(_tmp_361);
  GC_POP_ROOT(_tmp_362);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_Character_toUpperCase_char)


GC_PROC_BEGIN(java_lang_Math_initializer,GC_PARAM(java_lang_Math,this))
  GC_PARAM_REF(java_lang_Math,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Math_initializer)


/* method: Math.min(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_Math_min_int_int,
    JInt a,
    JInt b)
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_363;
  if ((a < b)) {
    _tmp_363 = a;
  } else {
    _tmp_363 = b;
  }
  __result = _tmp_363;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_Math_min_int_int)


GC_PROC_BEGIN(java_lang_Integer_initializer,GC_PARAM(java_lang_Integer,this))
  GC_PARAM_REF(java_lang_Integer,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Integer_initializer)


/* method: Integer.toString(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Integer_toString_int_int,
    JInt num,
    JInt radix)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,buffer);
  JInt i;
  JBoolean isNeg;
  JBoolean _tmp_364;
  JInt _tmp_365;
  GC_GET(_tmp_365, java_lang_Character_Static, _java_lang_Character_MIN_RADIX);
  if (radix < _tmp_365) {
    _tmp_364 = true;
  } else {
    JInt _tmp_366;
    GC_GET(_tmp_366, java_lang_Character_Static, _java_lang_Character_MAX_RADIX);
    if (radix > _tmp_366) {
      _tmp_364 = true;
    } else {
      _tmp_364 = false;
    }
  }
  if (_tmp_364)
  {
    radix = 10;
  }
  GC_PUSH_ROOT(buffer);
  GC_REF_FUNC_CALL(buffer, newJCharArray, 33);CHECK(0);
  i = 33;
  isNeg = false;
  if (num < 0)
  {
    isNeg = true;
    num = -num;
    if (num < 0)
    {
      i = i - 1;
      JChar _tmp_367;
      GC_REF(JCharArray,_tmp_368);
      GC_PUSH_ROOT(_tmp_368);
      GC_GET_REF(_tmp_368, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_369;
      _tmp_369 = (JInt) ((-(num + radix) % radix));      GC_GET_VAR_ARRAY(_tmp_367, _tmp_368, _tmp_369);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_367);
      num = -(num / radix);
      GC_POP_ROOT(_tmp_368);
    }
  }
  {
__loop_16:;
    {
      JInt x;
      x = num % radix;
      i = i - 1;
      JChar _tmp_370;
      GC_REF(JCharArray,_tmp_371);
      GC_PUSH_ROOT(_tmp_371);
      GC_GET_REF(_tmp_371, java_lang_Number_Static, _java_lang_Number_digits);
      GC_GET_VAR_ARRAY(_tmp_370, _tmp_371, x);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_370);
      num = num / radix;
      GC_POP_ROOT(_tmp_371);
    }
    JBoolean _tmp_372;
    _tmp_372 = num > 0;
    if (_tmp_372) {
      goto __loop_16;
    }
  }
  if (isNeg)
  {
    i = i - 1;
    GC_SET_VAR_ARRAY(buffer, i, '-');
  }
  GC_REF(java_lang_String,_tmp_373);
  GC_PUSH_ROOT(_tmp_373);
  GC_REF_FUNC_CALL(_tmp_373, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buffer), i, 33 - i, true);CHECK(0);
GC_ASSIGN(__result, _tmp_373);
  GC_POP_ROOT(buffer);
  GC_POP_ROOT(_tmp_373);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Integer_toString_int_int)


/* method: Integer.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Integer_toString,
    GC_PARAM(java_lang_Integer,this))
  GC_PARAM_REF(java_lang_Integer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_374);
  GC_PUSH_ROOT(_tmp_374);
  JInt _tmp_375;
  GC_GET(_tmp_375, this, _java_lang_Integer_value);
  GC_REF_FUNC_CALL(_tmp_374, java_lang_String_valueOf_int, _tmp_375);CHECK(0);
GC_ASSIGN(__result, _tmp_374);
  GC_POP_ROOT(_tmp_374);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Integer_toString)


GC_PROC_BEGIN(java_lang_Number_initializer,GC_PARAM(java_lang_Number,this))
  GC_PARAM_REF(java_lang_Number,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Number_initializer)


GC_PROC_BEGIN(java_lang_Long_initializer,GC_PARAM(java_lang_Long,this))
  GC_PARAM_REF(java_lang_Long,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Long_initializer)


/* method: Long.toString(long, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString_long_int,
    JLong num,
    JInt radix)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,buffer);
  JInt i;
  JBoolean isNeg;
  JInt _tmp_376;
  _tmp_376 = (JInt) (num);  if (_tmp_376 == num)
  {
    GC_REF(java_lang_String,_tmp_377);
    GC_PUSH_ROOT(_tmp_377);
    JInt _tmp_378;
    _tmp_378 = (JInt) (num);    GC_REF_FUNC_CALL(_tmp_377, java_lang_Integer_toString_int_int, _tmp_378, radix);CHECK(0);
GC_ASSIGN(__result, _tmp_377);
    GC_POP_ROOT(_tmp_377);
    goto __branch_1;
    GC_POP_ROOT(_tmp_377);
  }
  JBoolean _tmp_379;
  JInt _tmp_380;
  GC_GET(_tmp_380, java_lang_Character_Static, _java_lang_Character_MIN_RADIX);
  if (radix < _tmp_380) {
    _tmp_379 = true;
  } else {
    JInt _tmp_381;
    GC_GET(_tmp_381, java_lang_Character_Static, _java_lang_Character_MAX_RADIX);
    if (radix > _tmp_381) {
      _tmp_379 = true;
    } else {
      _tmp_379 = false;
    }
  }
  if (_tmp_379)
  {
    radix = 10;
  }
  GC_PUSH_ROOT(buffer);
  GC_REF_FUNC_CALL(buffer, newJCharArray, 65);CHECK(0);
  i = 65;
  isNeg = false;
  if (num < 0)
  {
    isNeg = true;
    num = -num;
    if (num < 0)
    {
      i = i - 1;
      JChar _tmp_382;
      GC_REF(JCharArray,_tmp_383);
      GC_PUSH_ROOT(_tmp_383);
      GC_GET_REF(_tmp_383, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_384;
      _tmp_384 = (JInt) ((-(num + radix) % radix));      GC_GET_VAR_ARRAY(_tmp_382, _tmp_383, _tmp_384);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_382);
      num = -(num / radix);
      GC_POP_ROOT(_tmp_383);
    }
  }
  {
__loop_17:;
    {
      i = i - 1;
      JChar _tmp_385;
      GC_REF(JCharArray,_tmp_386);
      GC_PUSH_ROOT(_tmp_386);
      GC_GET_REF(_tmp_386, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_387;
      _tmp_387 = (JInt) ((num % radix));      GC_GET_VAR_ARRAY(_tmp_385, _tmp_386, _tmp_387);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_385);
      num = num / radix;
      GC_POP_ROOT(_tmp_386);
    }
    JBoolean _tmp_388;
    _tmp_388 = num > 0;
    if (_tmp_388) {
      goto __loop_17;
    }
  }
  if (isNeg)
  {
    i = i - 1;
    GC_SET_VAR_ARRAY(buffer, i, '-');
  }
  GC_REF(java_lang_String,_tmp_389);
  GC_PUSH_ROOT(_tmp_389);
  GC_REF_FUNC_CALL(_tmp_389, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buffer), i, 65 - i, true);CHECK(0);
GC_ASSIGN(__result, _tmp_389);
  GC_POP_ROOT(buffer);
  GC_POP_ROOT(_tmp_389);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString_long_int)


/* method: Long.toString(long) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString_long,
    JLong num)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_390);
  GC_PUSH_ROOT(_tmp_390);
  GC_REF_FUNC_CALL(_tmp_390, java_lang_Long_toString_long_int, num, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_390);
  GC_POP_ROOT(_tmp_390);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString_long)


/* method: Long.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString,
    GC_PARAM(java_lang_Long,this))
  GC_PARAM_REF(java_lang_Long,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_391);
  GC_PUSH_ROOT(_tmp_391);
  JLong _tmp_392;
  GC_GET(_tmp_392, this, _java_lang_Long_value);
  GC_REF_FUNC_CALL(_tmp_391, java_lang_Long_toString_long_int, _tmp_392, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_391);
  GC_POP_ROOT(_tmp_391);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString)


GC_PROC_BEGIN(java_lang_Float_initializer,GC_PARAM(java_lang_Float,this))
  GC_PARAM_REF(java_lang_Float,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Float_initializer)


/* method: Float.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Float_toString,
    GC_PARAM(java_lang_Float,this))
  GC_PARAM_REF(java_lang_Float,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_393);
  GC_PUSH_ROOT(_tmp_393);
  JFloat _tmp_394;
  GC_GET(_tmp_394, this, _java_lang_Float_value);
  GC_REF_FUNC_CALL(_tmp_393, java_lang_Float_toString_float, _tmp_394);CHECK(0);
GC_ASSIGN(__result, _tmp_393);
  GC_POP_ROOT(_tmp_393);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Float_toString)


GC_PROC_BEGIN(java_lang_Double_initializer,GC_PARAM(java_lang_Double,this))
  GC_PARAM_REF(java_lang_Double,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Double_initializer)


/* method: Double.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Double_toString,
    GC_PARAM(java_lang_Double,this))
  GC_PARAM_REF(java_lang_Double,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_395);
  GC_PUSH_ROOT(_tmp_395);
  JDouble _tmp_396;
  GC_GET(_tmp_396, this, _java_lang_Double_value);
  GC_REF_FUNC_CALL(_tmp_395, java_lang_Double_toString_double, _tmp_396);CHECK(0);
GC_ASSIGN(__result, _tmp_395);
  GC_POP_ROOT(_tmp_395);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Double_toString)


GC_PROC_BEGIN(java_lang_StackTraceElement_initializer,GC_PARAM(java_lang_StackTraceElement,this))
  GC_PARAM_REF(java_lang_StackTraceElement,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StackTraceElement_initializer)


/* method: StackTraceElement.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StackTraceElement_toString,
    GC_PARAM(java_lang_StackTraceElement,this))
  GC_PARAM_REF(java_lang_StackTraceElement,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,sb);
  GC_PUSH_ROOT(sb);
  GC_REF_FUNC_CALL(sb, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));CHECK(0);
  GC_REF(java_lang_String,_tmp_397);
  GC_PUSH_ROOT(_tmp_397);
  GC_GET_REF(_tmp_397, this, _java_lang_StackTraceElement_declaringClass);
  if (!(GC_IS_NULL(_tmp_397)))
  {
    GC_REF(java_lang_String,_tmp_398);
    GC_PUSH_ROOT(_tmp_398);
    GC_GET_REF(_tmp_398, this, _java_lang_StackTraceElement_declaringClass);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_398));
    }CHECK(0);
    GC_REF(java_lang_String,_tmp_399);
    GC_PUSH_ROOT(_tmp_399);
    GC_GET_REF(_tmp_399, this, _java_lang_StackTraceElement_methodName);
    if (!(GC_IS_NULL(_tmp_399)))
    {
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, sb, class);
        GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_char, GC_PASS(sb), '.');
      }CHECK(0);
    }
    GC_POP_ROOT(_tmp_399);
    GC_POP_ROOT(_tmp_398);
  }
  GC_REF(java_lang_String,_tmp_400);
  GC_PUSH_ROOT(_tmp_400);
  GC_GET_REF(_tmp_400, this, _java_lang_StackTraceElement_methodName);
  if (!(GC_IS_NULL(_tmp_400)))
  {
    GC_REF(java_lang_String,_tmp_401);
    GC_PUSH_ROOT(_tmp_401);
    GC_GET_REF(_tmp_401, this, _java_lang_StackTraceElement_methodName);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_401));
    }CHECK(0);
    GC_POP_ROOT(_tmp_401);
  }
  GC_REF(java_lang_String,_tmp_402);
  GC_PUSH_ROOT(_tmp_402);
  GC_REF_FUNC_CALL(_tmp_402, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), " (");
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_402));
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_403);
  GC_PUSH_ROOT(_tmp_403);
  GC_GET_REF(_tmp_403, this, _java_lang_StackTraceElement_fileName);
  if (!(GC_IS_NULL(_tmp_403)))
  {
    GC_REF(java_lang_String,_tmp_404);
    GC_PUSH_ROOT(_tmp_404);
    GC_GET_REF(_tmp_404, this, _java_lang_StackTraceElement_fileName);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_404));
    }CHECK(0);
    GC_POP_ROOT(_tmp_404);
  }
  else
  {
    GC_REF(java_lang_String,_tmp_405);
    GC_PUSH_ROOT(_tmp_405);
    JBoolean _tmp_406;
    GC_GET(_tmp_406, this, _java_lang_StackTraceElement_isNative);
    if (_tmp_406) {
      GC_REF_FUNC_CALL(_tmp_405, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Native Method");
    } else {
      GC_REF_FUNC_CALL(_tmp_405, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Unknown Source");
    }
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_405));
    }CHECK(0);
    GC_POP_ROOT(_tmp_405);
  }
  JInt _tmp_407;
  GC_GET(_tmp_407, this, _java_lang_StackTraceElement_lineNumber);
  if (_tmp_407 >= 0)
  {
    GC_REF(java_lang_StringBuffer,_tmp_408);
    GC_PUSH_ROOT(_tmp_408);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(_tmp_408, _tmp_method->methodTbl->append_char, GC_PASS(sb), ':');
    }CHECK(0);
    JInt _tmp_409;
    GC_GET(_tmp_409, this, _java_lang_StackTraceElement_lineNumber);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_408, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_int, GC_PASS(_tmp_408), _tmp_409);
    }CHECK(0);
    GC_POP_ROOT(_tmp_408);
  }
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_char, GC_PASS(sb), ')');
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_410);
  GC_PUSH_ROOT(_tmp_410);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(_tmp_410, _tmp_method->methodTbl->toString, GC_PASS(sb));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_410);
  GC_POP_ROOT(sb);
  GC_POP_ROOT(_tmp_397);
  GC_POP_ROOT(_tmp_400);
  GC_POP_ROOT(_tmp_402);
  GC_POP_ROOT(_tmp_403);
  GC_POP_ROOT(_tmp_410);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StackTraceElement_toString)


GC_PROC_BEGIN(java_lang_IllegalStateException_initializer,GC_PARAM(java_lang_IllegalStateException,this))
  GC_PARAM_REF(java_lang_IllegalStateException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IllegalStateException_initializer)


/* constructor: IllegalStateException() */
GC_REF_FUNC_BEGIN(java_lang_IllegalStateException,
    java_lang_IllegalStateException_IllegalStateException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IllegalStateException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IllegalStateException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IllegalStateException_IllegalStateException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IllegalStateException, java_lang_IllegalStateException_IllegalStateException)


/* init func: IllegalStateException() */
GC_PROC_BEGIN(
    java_lang_IllegalStateException_IllegalStateException_init,
    GC_PARAM(java_lang_IllegalStateException,this))
  GC_PARAM_REF(java_lang_IllegalStateException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IllegalStateException_IllegalStateException_init)


GC_PROC_BEGIN(java_lang_ErrWriter_initializer,GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ErrWriter_initializer)


/* constructor: ErrWriter() */
GC_REF_FUNC_BEGIN(java_lang_ErrWriter,
    java_lang_ErrWriter_ErrWriter,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_ErrWriter_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_ErrWriter_ErrWriter_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_ErrWriter, java_lang_ErrWriter_ErrWriter)


/* init func: ErrWriter() */
GC_PROC_BEGIN(
    java_lang_ErrWriter_ErrWriter_init,
    GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(JAVA_NULL));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_ErrWriter_ErrWriter_init)


/* method: ErrWriter.flush() */
GC_PROC_BEGIN(
    java_lang_ErrWriter_flush,
    GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ErrWriter_flush)


GC_PROC_BEGIN(java_lang_NullPointerException_initializer,GC_PARAM(java_lang_NullPointerException,this))
  GC_PARAM_REF(java_lang_NullPointerException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_NullPointerException_initializer)


/* constructor: NullPointerException(String s) */
GC_REF_FUNC_BEGIN(java_lang_NullPointerException,
    java_lang_NullPointerException_NullPointerException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_NullPointerException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_NullPointerException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_NullPointerException_NullPointerException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_NullPointerException, java_lang_NullPointerException_NullPointerException_java_lang_String)


/* init func: NullPointerException(String s) */
GC_PROC_BEGIN(
    java_lang_NullPointerException_NullPointerException_java_lang_String_init,
    GC_PARAM(java_lang_NullPointerException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_NullPointerException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_NullPointerException_NullPointerException_java_lang_String_init)


GC_PROC_BEGIN(done_InputSampler_initializer,GC_PARAM(done_InputSampler,this))
  GC_PARAM_REF(done_InputSampler,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(done_InputSampler_initializer)


/* method: InputSampler.run() */
GC_PROC_BEGIN(
    done_InputSampler_run,
    GC_PARAM(done_InputSampler,this))
  GC_PARAM_REF(done_InputSampler,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    {
      goto __cond_18;
__loop_18:;
      {
        JBoolean _tmp_411;
        GC_VAR_FUNC_CALL(_tmp_411, done_InputSampler_haveInput);CHECK(1);
        if (_tmp_411)
        {
          GC_PROC_CALL(done_ClockInput_giveInput);CHECK(1);
        }
        GC_PROC_CALL(java_lang_Thread_sleep_long, 50);CHECK(1);
      }
__cond_18:;
      JBoolean _tmp_412;
      JBoolean _tmp_413;
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_413, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
      }CHECK(1);
      _tmp_412 = !_tmp_413;
      if (_tmp_412) {
        goto __loop_18;
      }
    }
  }
  EXCEPTION_CATCH(1,&java_lang_InterruptedException_Class)
__branch_1:;
    GC_REF(java_lang_InterruptedException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(done_InputSampler_run)


/* constructor: InputSampler() */
GC_REF_FUNC_BEGIN(done_InputSampler,
    done_InputSampler_InputSampler,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(done_InputSampler,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(done_InputSampler_initializer,GC_PASS(this));
    GC_PROC_CALL(done_InputSampler_InputSampler_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(done_InputSampler, done_InputSampler_InputSampler)


/* init func: InputSampler() */
GC_PROC_BEGIN(
    done_InputSampler_InputSampler_init,
    GC_PARAM(done_InputSampler,this))
  GC_PARAM_REF(done_InputSampler,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(done_InputSampler_InputSampler_init)


GC_PROC_BEGIN(java_io_InterruptedIOException_initializer,GC_PARAM(java_io_InterruptedIOException,this))
  GC_PARAM_REF(java_io_InterruptedIOException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_InterruptedIOException_initializer)


GC_PROC_BEGIN(java_lang_PhonyReader_initializer,GC_PARAM(java_lang_PhonyReader,this))
  GC_PARAM_REF(java_lang_PhonyReader,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_InputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyReader_initializer)


/* constructor: PhonyReader() */
GC_REF_FUNC_BEGIN(java_lang_PhonyReader,
    java_lang_PhonyReader_PhonyReader,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_PhonyReader,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_PhonyReader_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_PhonyReader_PhonyReader_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_PhonyReader, java_lang_PhonyReader_PhonyReader)


/* init func: PhonyReader() */
GC_PROC_BEGIN(
    java_lang_PhonyReader_PhonyReader_init,
    GC_PARAM(java_lang_PhonyReader,this))
  GC_PARAM_REF(java_lang_PhonyReader,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_InputStream_InputStream_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_PhonyReader_PhonyReader_init)


GC_PROC_BEGIN(java_lang_ArrayIndexOutOfBoundsException_initializer,GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ArrayIndexOutOfBoundsException_initializer)


/* constructor: ArrayIndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_ArrayIndexOutOfBoundsException,
    java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_ArrayIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_ArrayIndexOutOfBoundsException, java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException)


/* init func: ArrayIndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init,
    GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init)


GC_PROC_BEGIN(java_io_InputStream_initializer,GC_PARAM(java_io_InputStream,this))
  GC_PARAM_REF(java_io_InputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_InputStream_initializer)


/* constructor: InputStream() */
GC_REF_FUNC_BEGIN(java_io_InputStream,
    java_io_InputStream_InputStream,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_InputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_InputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_InputStream_InputStream_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_InputStream, java_io_InputStream_InputStream)


/* init func: InputStream() */
GC_PROC_BEGIN(
    java_io_InputStream_InputStream_init,
    GC_PARAM(java_io_InputStream,this))
  GC_PARAM_REF(java_io_InputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_InputStream_InputStream_init)


/* method: InputStream.read(byte[], int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_io_InputStream_read_byteA_int_int,
    GC_PARAM(java_io_InputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_InputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JInt ch;
  JBoolean _tmp_414;
  JBoolean _tmp_415;
  if (off < 0) {
    _tmp_415 = true;
  } else {
    if (len < 0) {
      _tmp_415 = true;
    } else {
      _tmp_415 = false;
    }
  }
  if (_tmp_415) {
    _tmp_414 = true;
  } else {
    JInt _tmp_416;
    GC_GET(_tmp_416, b, _JByteA_length);
    if (off + len > _tmp_416) {
      _tmp_414 = true;
    } else {
      _tmp_414 = false;
    }
  }
  if (_tmp_414)
  {
    GC_REF(java_lang_IndexOutOfBoundsException,_tmp_417);
    GC_PUSH_ROOT(_tmp_417);
    GC_REF_FUNC_CALL(_tmp_417, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException, &java_lang_IndexOutOfBoundsException_Class, GC_PASS(java_lang_IndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_417);
    GC_POP_ROOT(_tmp_417);
    EXCEPTION_THROW(0,&java_lang_IndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_417);
  }
  JInt _tmp_418;
  GC_GET(_tmp_418, b, _JByteA_length);
  if (_tmp_418 == 0)
  {
    __result = 0;
    goto __branch_2;
  }
  {
    i = 0;
    {
      goto __cond_19;
__loop_19:;
      EXCEPTION_TRY
      {
        {
          struct java_io_InputStream_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, this, class);
          GC_VAR_FUNC_CALL(ch, _tmp_method->methodTbl->read, GC_PASS(this));
        }CHECK(1);
        if ((ch) < 0)
        {
          JInt _tmp_419;
          if (i == 0) {
            _tmp_419 = -1;
          } else {
            _tmp_419 = i;
          }
          __result = _tmp_419;
          goto __branch_2;
        }
        JByte _tmp_420;
        _tmp_420 = (JByte) (ch);        GC_SET_VAR_ARRAY(b, off + i, _tmp_420);
      }
      EXCEPTION_CATCH(1,&java_io_IOException_Class)
        GC_REF(java_io_IOException,ex);
        GC_PUSH_ROOT(ex);
        EXCEPTION_GET_OBJ(ex);
        {
          if (i == 0)
          {
            EXCEPTION_STORE_OBJ(ex);
            GC_POP_ROOT(ex);
            EXCEPTION_THROW(0,&java_io_IOException_Class)
          }
          __result = i;
          GC_POP_ROOT(ex);
          goto __branch_2;
        }
        GC_POP_ROOT(ex);
      EXCEPTION_FINALLY
      EXCEPTION_END(0)
__branch_1:;
      i = i + 1;
__cond_19:;
      JBoolean _tmp_421;
      _tmp_421 = i < len;
      if (_tmp_421) {
        goto __loop_19;
      }
    }
  }
  __result = i;
  goto __branch_2;
}
__branch_2:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_io_InputStream_read_byteA_int_int)


void Fields_Init(void **__eFlag__) {
  GC__GET_THREAD_ROOT;
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_MAX_PRIORITY, 10);
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_MIN_PRIORITY, 1);
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_NORM_PRIORITY, 5);
  GC_SET(java_lang_String_Static, _java_lang_String_serialVersionUID, -6849794470754667710L);
  GC_SET(java_lang_Throwable_Static, _java_lang_Throwable_serialVersionUID, -3042686055658047285L);
  GC_REF(se_lth_cs_realtime_semaphore_CountingSem,_tmp_422);
  GC_PUSH_ROOT(_tmp_422);
  GC_REF_FUNC_CALL(_tmp_422, se_lth_cs_realtime_semaphore_CountingSem_CountingSem, &se_lth_cs_realtime_semaphore_CountingSem_Class, GC_PASS(se_lth_cs_realtime_semaphore_CountingSem_Layout));CHECK(0);
  GC_SET_REF(done_ClockInput_Static, _done_ClockInput_anyButtonChanged, _tmp_422);
  GC_POP_ROOT(_tmp_422);
  GC_SET(done_ClockInput_Static, _done_ClockInput_SHOW_TIME, 0);
  GC_SET(done_ClockInput_Static, _done_ClockInput_SET_ALARM, 1);
  GC_SET(done_ClockInput_Static, _done_ClockInput_SET_TIME, 2);
  GC_SET(java_lang_InterruptedException_Static, _java_lang_InterruptedException_serialVersionUID, 6700697376100628473L);
  GC_SET(java_lang_Exception_Static, _java_lang_Exception_serialVersionUID, -3387516993124229948L);
  {
  }
  GC_REF(JCharArray,_tmp_423);
  GC_PUSH_ROOT(_tmp_423);
  GC_REF_FUNC_CALL(_tmp_423, newJCharArray, 1);CHECK(0);
  GC_SET_REF(java_io_PrintStream_Static, _java_io_PrintStream_line_separator, _tmp_423);
  GC_POP_ROOT(_tmp_423);
  GC_SET(java_lang_IllegalArgumentException_Static, _java_lang_IllegalArgumentException_serialVersionUID, -5365630128856068164L);
  GC_SET(java_lang_RuntimeException_Static, _java_lang_RuntimeException_serialVersionUID, -7034897190745766939L);
  GC_SET(java_lang_StringBuilder_Static, _java_lang_StringBuilder_serialVersionUID, 4383685877147921099L);
  GC_SET(java_lang_StringBuilder_Static, _java_lang_StringBuilder_DEFAULT_CAPACITY, 16);
  GC_SET(java_lang_StringBuffer_Static, _java_lang_StringBuffer_serialVersionUID, 3388685877147921107L);
  GC_SET(java_lang_StringBuffer_Static, _java_lang_StringBuffer_DEFAULT_CAPACITY, 16);
  {
    GC_REF(java_lang_PhonyWriter,_tmp_424);
    GC_PUSH_ROOT(_tmp_424);
    GC_REF_FUNC_CALL(_tmp_424, java_lang_PhonyWriter_PhonyWriter, &java_lang_PhonyWriter_Class, GC_PASS(java_lang_PhonyWriter_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_out, _tmp_424);
    GC_REF(java_lang_PhonyReader,_tmp_425);
    GC_PUSH_ROOT(_tmp_425);
    GC_REF_FUNC_CALL(_tmp_425, java_lang_PhonyReader_PhonyReader, &java_lang_PhonyReader_Class, GC_PASS(java_lang_PhonyReader_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_in, _tmp_425);
    GC_REF(java_lang_ErrWriter,_tmp_426);
    GC_PUSH_ROOT(_tmp_426);
    GC_REF_FUNC_CALL(_tmp_426, java_lang_ErrWriter_ErrWriter, &java_lang_ErrWriter_Class, GC_PASS(java_lang_ErrWriter_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_err, _tmp_426);
    GC_POP_ROOT(_tmp_426);
    GC_POP_ROOT(_tmp_425);
    GC_POP_ROOT(_tmp_424);
  }
  GC_SET(java_lang_StringIndexOutOfBoundsException_Static, _java_lang_StringIndexOutOfBoundsException_serialVersionUID, -6762910422159637258L);
  GC_SET(java_lang_IndexOutOfBoundsException_Static, _java_lang_IndexOutOfBoundsException_serialVersionUID, 234122996006267687L);
  GC_SET(java_io_IOException_Static, _java_io_IOException_serialVersionUID, 7818375828146090155L);
  GC_SET(java_lang_Character_Static, _java_lang_Character_serialVersionUID, 3786198910865385080L);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIN_RADIX, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MAX_RADIX, 36);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIN_VALUE, ' ');
  GC_SET(java_lang_Character_Static, _java_lang_Character_MAX_VALUE, '￿');
  GC_SET(java_lang_Character_Static, _java_lang_Character_UPPERCASE_LETTER, 1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LOWERCASE_LETTER, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_TITLECASE_LETTER, 3);
  GC_SET(java_lang_Character_Static, _java_lang_Character_NON_SPACING_MARK, 6);
  GC_SET(java_lang_Character_Static, _java_lang_Character_COMBINING_SPACING_MARK, 8);
  GC_SET(java_lang_Character_Static, _java_lang_Character_ENCLOSING_MARK, 7);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DECIMAL_DIGIT_NUMBER, 9);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LETTER_NUMBER, 10);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_NUMBER, 11);
  GC_SET(java_lang_Character_Static, _java_lang_Character_SPACE_SEPARATOR, 12);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LINE_SEPARATOR, 13);
  GC_SET(java_lang_Character_Static, _java_lang_Character_PARAGRAPH_SEPARATOR, 14);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CONTROL, 15);
  GC_SET(java_lang_Character_Static, _java_lang_Character_FORMAT, 16);
  GC_SET(java_lang_Character_Static, _java_lang_Character_SURROGATE, 19);
  GC_SET(java_lang_Character_Static, _java_lang_Character_PRIVATE_USE, 18);
  GC_SET(java_lang_Character_Static, _java_lang_Character_UNASSIGNED, 0);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MODIFIER_LETTER, 4);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_LETTER, 5);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CONNECTOR_PUNCTUATION, 23);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DASH_PUNCTUATION, 20);
  GC_SET(java_lang_Character_Static, _java_lang_Character_START_PUNCTUATION, 21);
  GC_SET(java_lang_Character_Static, _java_lang_Character_END_PUNCTUATION, 22);
  GC_SET(java_lang_Character_Static, _java_lang_Character_INITIAL_QUOTE_PUNCTUATION, 29);
  GC_SET(java_lang_Character_Static, _java_lang_Character_FINAL_QUOTE_PUNCTUATION, 30);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_PUNCTUATION, 24);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MATH_SYMBOL, 25);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CURRENCY_SYMBOL, 26);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MODIFIER_SYMBOL, 27);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_SYMBOL, 28);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_UNDEFINED, -1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT, 0);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT, 1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER, 3);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR, 4);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR, 5);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER, 6);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR, 7);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_NONSPACING_MARK, 8);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL, 9);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR, 10);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR, 11);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_WHITESPACE, 12);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS, 13);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING, 14);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE, 15);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING, 16);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE, 17);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT, 18);
  GC_REF(java_lang_String,_tmp_427);
  GC_PUSH_ROOT(_tmp_427);
  GC_REF_FUNC_CALL(_tmp_427, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿\n\f\r !\"#￿￿\n\f\r !\"#￿￿￿￿￿￿￿￿￾￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿￿￿ \t￿\ndϨ￿￿￿(2<FPZ✐￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿￿\t\n\f2dǴϨ\t\n\f2dǴϨϨᎈ✐￿\n\f\r￿￿\t\n \t\n\t￿￿");
  GC_SET_REF(java_lang_Character_Static, _java_lang_Character_NUM_VALUE, _tmp_427);
  GC_POP_ROOT(_tmp_427);
  GC_SET(java_lang_Character_Static, _java_lang_Character_TYPE_MASK, 0x1F);
  GC_SET(java_lang_Character_Static, _java_lang_Character_NO_BREAK_MASK, 0x20);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIRROR_MASK, 0x40);
  GC_SET(java_lang_Math_Static, _java_lang_Math_E, 2.718281828459045);
  GC_SET(java_lang_Math_Static, _java_lang_Math_PI, 3.141592653589793);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_serialVersionUID, 1360826667806852920L);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MIN_VALUE, 0x80000000);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MAX_VALUE, 0x7fffffff);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_SIZE, 32);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MIN_CACHE, -128);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MAX_CACHE, 127);
  GC_REF(RefArray,_tmp_428);
  GC_PUSH_ROOT(_tmp_428);
  GC_REF_FUNC_CALL(_tmp_428, newRefArray, 256);CHECK(0);
  GC_SET_REF(java_lang_Integer_Static, _java_lang_Integer_intCache, _tmp_428);
  GC_POP_ROOT(_tmp_428);
  GC_SET(java_lang_Number_Static, _java_lang_Number_serialVersionUID, -8742448824652078965L);
  GC_REF(JCharArray,_tmp_429);
  GC_PUSH_ROOT(_tmp_429);
  GC_REF_FUNC_CALL(_tmp_429, newJCharArray, 36);CHECK(0);
  GC_SET_VAR_ARRAY(_tmp_429, 0, '0');
  GC_SET_VAR_ARRAY(_tmp_429, 1, '1');
  GC_SET_VAR_ARRAY(_tmp_429, 2, '2');
  GC_SET_VAR_ARRAY(_tmp_429, 3, '3');
  GC_SET_VAR_ARRAY(_tmp_429, 4, '4');
  GC_SET_VAR_ARRAY(_tmp_429, 5, '5');
  GC_SET_VAR_ARRAY(_tmp_429, 6, '6');
  GC_SET_VAR_ARRAY(_tmp_429, 7, '7');
  GC_SET_VAR_ARRAY(_tmp_429, 8, '8');
  GC_SET_VAR_ARRAY(_tmp_429, 9, '9');
  GC_SET_VAR_ARRAY(_tmp_429, 10, 'a');
  GC_SET_VAR_ARRAY(_tmp_429, 11, 'b');
  GC_SET_VAR_ARRAY(_tmp_429, 12, 'c');
  GC_SET_VAR_ARRAY(_tmp_429, 13, 'd');
  GC_SET_VAR_ARRAY(_tmp_429, 14, 'e');
  GC_SET_VAR_ARRAY(_tmp_429, 15, 'f');
  GC_SET_VAR_ARRAY(_tmp_429, 16, 'g');
  GC_SET_VAR_ARRAY(_tmp_429, 17, 'h');
  GC_SET_VAR_ARRAY(_tmp_429, 18, 'i');
  GC_SET_VAR_ARRAY(_tmp_429, 19, 'j');
  GC_SET_VAR_ARRAY(_tmp_429, 20, 'k');
  GC_SET_VAR_ARRAY(_tmp_429, 21, 'l');
  GC_SET_VAR_ARRAY(_tmp_429, 22, 'm');
  GC_SET_VAR_ARRAY(_tmp_429, 23, 'n');
  GC_SET_VAR_ARRAY(_tmp_429, 24, 'o');
  GC_SET_VAR_ARRAY(_tmp_429, 25, 'p');
  GC_SET_VAR_ARRAY(_tmp_429, 26, 'q');
  GC_SET_VAR_ARRAY(_tmp_429, 27, 'r');
  GC_SET_VAR_ARRAY(_tmp_429, 28, 's');
  GC_SET_VAR_ARRAY(_tmp_429, 29, 't');
  GC_SET_VAR_ARRAY(_tmp_429, 30, 'u');
  GC_SET_VAR_ARRAY(_tmp_429, 31, 'v');
  GC_SET_VAR_ARRAY(_tmp_429, 32, 'w');
  GC_SET_VAR_ARRAY(_tmp_429, 33, 'x');
  GC_SET_VAR_ARRAY(_tmp_429, 34, 'y');
  GC_SET_VAR_ARRAY(_tmp_429, 35, 'z');
  GC_SET_REF(java_lang_Number_Static, _java_lang_Number_digits, _tmp_429);
  GC_POP_ROOT(_tmp_429);
  GC_SET(java_lang_Long_Static, _java_lang_Long_serialVersionUID, 4290774380558885855L);
  GC_SET(java_lang_Long_Static, _java_lang_Long_MIN_VALUE, 0x8000000000000000L);
  GC_SET(java_lang_Long_Static, _java_lang_Long_MAX_VALUE, 0x7fffffffffffffffL);
  GC_SET(java_lang_Float_Static, _java_lang_Float_serialVersionUID, -2671257302660747028L);
  GC_SET(java_lang_Float_Static, _java_lang_Float_MAX_VALUE, 3.4028235e+38);
  GC_SET(java_lang_Float_Static, _java_lang_Float_MIN_VALUE, 1.4e-45);
  GC_SET(java_lang_Float_Static, _java_lang_Float_NEGATIVE_INFINITY, -HUGE_VALF);
  GC_SET(java_lang_Float_Static, _java_lang_Float_POSITIVE_INFINITY, HUGE_VALF);
  GC_SET(java_lang_Float_Static, _java_lang_Float_NaN, NAN);
  GC_SET(java_lang_Double_Static, _java_lang_Double_serialVersionUID, -9172774392245257468L);
  GC_SET(java_lang_Double_Static, _java_lang_Double_MAX_VALUE, 1.7976931348623157e+308);
  GC_SET(java_lang_Double_Static, _java_lang_Double_MIN_VALUE, 5e-324);
  GC_SET(java_lang_Double_Static, _java_lang_Double_NEGATIVE_INFINITY, -HUGE_VALL);
  GC_SET(java_lang_Double_Static, _java_lang_Double_POSITIVE_INFINITY, HUGE_VALL);
  GC_SET(java_lang_Double_Static, _java_lang_Double_NaN, NAN);
  GC_SET(java_lang_StackTraceElement_Static, _java_lang_StackTraceElement_serialVersionUID, 6992337162326171013L);
  GC_SET(java_lang_IllegalStateException_Static, _java_lang_IllegalStateException_serialVersionUID, -1848914673093119416L);
  GC_SET(java_lang_NullPointerException_Static, _java_lang_NullPointerException_serialVersionUID, 5162710183389028792L);
  GC_SET(java_io_InterruptedIOException_Static, _java_io_InterruptedIOException_serialVersionUID, 4020568460727500567L);
  GC_SET(java_lang_ArrayIndexOutOfBoundsException_Static, _java_lang_ArrayIndexOutOfBoundsException_serialVersionUID, -5116101128118950844L);
catch_0:
gc_leave:
return;
}
void javaClasses_Init(void **__eFlag__) {
  // Declare phony Object ref to be used when
  // return value is not used by tha application
  GC_PUSH_ALIAS(___phonyObj___);


/* AST.NullType.genInit() not implemented yet */

/* AST.VoidType.genInit() not implemented yet */
  GC_PUSH_STATIC_ROOT(java_lang_Thread_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Thread_LayoutStatic,java_lang_Thread_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Thread_Layout);
  GC_NEW_LAYOUT(java_lang_Thread_Layout,java_lang_Thread,  2,  GC_LAYOUT_FIELD(java_lang_Thread,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(java_lang_Thread,_java_lang_Thread_name));

  GC_PUSH_STATIC_ROOT(java_lang_Thread_Static);
  GC_NEW(java_lang_Thread_Static,java_lang_Thread_LayoutStatic);

  java_lang_Thread_Class.super = &java_lang_Object_Class;
  java_lang_Thread_Class.methodTbl = &java_lang_Thread_MethodTbl;
  java_lang_Thread_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Thread_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Thread_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Thread_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  java_lang_Thread_MethodTbl.createThread = java_lang_Thread_createThread;
  java_lang_Thread_MethodTbl.start = java_lang_Thread_start;
  java_lang_Thread_MethodTbl.run = java_lang_Thread_run;
  java_lang_Thread_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  java_lang_Thread_MethodTbl.interrupt = java_lang_Thread_interrupt;
  java_lang_Thread_Class.ifazTbl = &java_lang_Thread_ifazTbl;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl = &java_lang_Thread_java_lang_Runnable_MethodTblStruct;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->run = java_lang_Thread_MethodTbl.run;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = java_lang_Thread_MethodTbl.toString;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = java_lang_Thread_MethodTbl.wait_long_int;
  java_lang_Thread_Class.iface_size = 1;
  java_lang_Thread_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  java_lang_Thread_Class.classIndex = JAVA_LANG_THREAD_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Runnable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Runnable_LayoutStatic,java_lang_Runnable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Runnable_Static);
  GC_NEW(java_lang_Runnable_Static,java_lang_Runnable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_Object_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Object_LayoutStatic,java_lang_Object_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Object_Layout);
  GC_NEW_LAYOUT(java_lang_Object_Layout,java_lang_Object,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Object_Static);
  GC_NEW(java_lang_Object_Static,java_lang_Object_LayoutStatic);

  java_lang_Object_Class.super = (void *) 0;
  java_lang_Object_Class.methodTbl = &java_lang_Object_MethodTbl;
  java_lang_Object_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Object_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Object_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Object_Class.classIndex = JAVA_LANG_OBJECT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_String_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_String_LayoutStatic,java_lang_String_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_String_Layout);
  GC_NEW_LAYOUT(java_lang_String_Layout,java_lang_String,  1,  GC_LAYOUT_FIELD(java_lang_String,_java_lang_String_value));

  GC_PUSH_STATIC_ROOT(java_lang_String_Static);
  GC_NEW(java_lang_String_Static,java_lang_String_LayoutStatic);

  java_lang_String_Class.super = &java_lang_Object_Class;
  java_lang_String_Class.methodTbl = &java_lang_String_MethodTbl;
  java_lang_String_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_String_MethodTbl.toString = java_lang_String_toString;
  java_lang_String_MethodTbl.clone = java_lang_Object_clone;
  java_lang_String_MethodTbl.length = java_lang_String_length;
  java_lang_String_MethodTbl.getChars_int_int_charA_int = java_lang_String_getChars_int_int_charA_int;
  java_lang_String_MethodTbl.getBytes_java_lang_String = java_lang_String_getBytes_java_lang_String;
  java_lang_String_MethodTbl.getBytes = java_lang_String_getBytes;
  java_lang_String_MethodTbl.compareTo_java_lang_String = java_lang_String_compareTo_java_lang_String;
  java_lang_String_MethodTbl.regionMatches_int_java_lang_String_int_int = java_lang_String_regionMatches_int_java_lang_String_int_int;
  java_lang_String_MethodTbl.regionMatches_boolean_int_java_lang_String_int_int = java_lang_String_regionMatches_boolean_int_java_lang_String_int_int;
  java_lang_String_MethodTbl.indexOf_int_int = java_lang_String_indexOf_int_int;
  java_lang_String_MethodTbl.lastIndexOf_int_int = java_lang_String_lastIndexOf_int_int;
  java_lang_String_MethodTbl.indexOf_java_lang_String_int = java_lang_String_indexOf_java_lang_String_int;
  java_lang_String_MethodTbl.lastIndexOf_java_lang_String_int = java_lang_String_lastIndexOf_java_lang_String_int;
  java_lang_String_MethodTbl.substring_int_int = java_lang_String_substring_int_int;
  java_lang_String_Class.ifazTbl = &java_lang_String_ifazTbl;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_String_java_io_Serializable_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_String_java_lang_Comparable_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_String_java_lang_CharSequence_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.iface_size = 3;
  java_lang_String_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_String_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_String_Class.iface_array[2] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_String_Class.classIndex = JAVA_LANG_STRING_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Cloneable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Cloneable_LayoutStatic,java_lang_Cloneable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Cloneable_Static);
  GC_NEW(java_lang_Cloneable_Static,java_lang_Cloneable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_io_Serializable_LayoutStatic);
  GC_NEW_LAYOUT(java_io_Serializable_LayoutStatic,java_io_Serializable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_Serializable_Static);
  GC_NEW(java_io_Serializable_Static,java_io_Serializable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_Throwable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Throwable_LayoutStatic,java_lang_Throwable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Throwable_Layout);
  GC_NEW_LAYOUT(java_lang_Throwable_Layout,java_lang_Throwable,  3,  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_Throwable_Static);
  GC_NEW(java_lang_Throwable_Static,java_lang_Throwable_LayoutStatic);

  java_lang_Throwable_Class.super = &java_lang_Object_Class;
  java_lang_Throwable_Class.methodTbl = &java_lang_Throwable_MethodTbl;
  java_lang_Throwable_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Throwable_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_Throwable_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Throwable_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_Throwable_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_Throwable_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_Throwable_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_Throwable_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_Throwable_Class.ifazTbl = &java_lang_Throwable_ifazTbl;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Throwable_java_io_Serializable_MethodTblStruct;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Throwable_MethodTbl.toString;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Throwable_MethodTbl.wait_long_int;
  java_lang_Throwable_Class.iface_size = 1;
  java_lang_Throwable_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Throwable_Class.classIndex = JAVA_LANG_THROWABLE_INDEX;

  GC_PUSH_STATIC_ROOT(done_ClockInput_LayoutStatic);
  GC_NEW_LAYOUT(done_ClockInput_LayoutStatic,done_ClockInput_ClassStatic,  1,  GC_LAYOUT_FIELD(done_ClockInput_ClassStatic,_done_ClockInput_anyButtonChanged));

  GC_PUSH_STATIC_ROOT(done_ClockInput_Layout);
  GC_NEW_LAYOUT(done_ClockInput_Layout,done_ClockInput,  0);

  GC_PUSH_STATIC_ROOT(done_ClockInput_Static);
  GC_NEW(done_ClockInput_Static,done_ClockInput_LayoutStatic);

  done_ClockInput_Class.super = &java_lang_Object_Class;
  done_ClockInput_Class.methodTbl = &done_ClockInput_MethodTbl;
  done_ClockInput_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  done_ClockInput_MethodTbl.toString = java_lang_Object_toString;
  done_ClockInput_MethodTbl.clone = java_lang_Object_clone;
  done_ClockInput_Class.classIndex = DONE_CLOCKINPUT_INDEX;

  GC_PUSH_STATIC_ROOT(done_ClockOutput_LayoutStatic);
  GC_NEW_LAYOUT(done_ClockOutput_LayoutStatic,done_ClockOutput_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(done_ClockOutput_Layout);
  GC_NEW_LAYOUT(done_ClockOutput_Layout,done_ClockOutput,  0);

  GC_PUSH_STATIC_ROOT(done_ClockOutput_Static);
  GC_NEW(done_ClockOutput_Static,done_ClockOutput_LayoutStatic);

  done_ClockOutput_Class.super = &java_lang_Object_Class;
  done_ClockOutput_Class.methodTbl = &done_ClockOutput_MethodTbl;
  done_ClockOutput_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  done_ClockOutput_MethodTbl.toString = java_lang_Object_toString;
  done_ClockOutput_MethodTbl.clone = java_lang_Object_clone;
  done_ClockOutput_Class.classIndex = DONE_CLOCKOUTPUT_INDEX;

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_MutexSem_LayoutStatic);
  GC_NEW_LAYOUT(se_lth_cs_realtime_semaphore_MutexSem_LayoutStatic,se_lth_cs_realtime_semaphore_MutexSem_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_MutexSem_Layout);
  GC_NEW_LAYOUT(se_lth_cs_realtime_semaphore_MutexSem_Layout,se_lth_cs_realtime_semaphore_MutexSem,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_MutexSem_Static);
  GC_NEW(se_lth_cs_realtime_semaphore_MutexSem_Static,se_lth_cs_realtime_semaphore_MutexSem_LayoutStatic);

  se_lth_cs_realtime_semaphore_MutexSem_Class.super = &java_lang_Object_Class;
  se_lth_cs_realtime_semaphore_MutexSem_Class.methodTbl = &se_lth_cs_realtime_semaphore_MutexSem_MethodTbl;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.toString = java_lang_Object_toString;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.clone = java_lang_Object_clone;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.give = se_lth_cs_realtime_semaphore_MutexSem_give;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.take = se_lth_cs_realtime_semaphore_MutexSem_take;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.createMutexSem_int = se_lth_cs_realtime_semaphore_MutexSem_createMutexSem_int;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.giveMutexSem_long = se_lth_cs_realtime_semaphore_MutexSem_giveMutexSem_long;
  se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.takeMutexSem_long = se_lth_cs_realtime_semaphore_MutexSem_takeMutexSem_long;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl = &se_lth_cs_realtime_semaphore_MutexSem_ifazTbl;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl = &se_lth_cs_realtime_semaphore_MutexSem_se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->give = se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.give;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take = se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.take;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->toString = se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.toString;
  se_lth_cs_realtime_semaphore_MutexSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->wait_long_int = se_lth_cs_realtime_semaphore_MutexSem_MethodTbl.wait_long_int;
  se_lth_cs_realtime_semaphore_MutexSem_Class.iface_size = 1;
  se_lth_cs_realtime_semaphore_MutexSem_Class.iface_array[0] = SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_INDEX;
  se_lth_cs_realtime_semaphore_MutexSem_Class.classIndex = SE_LTH_CS_REALTIME_SEMAPHORE_MUTEXSEM_INDEX;

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_CountingSem_LayoutStatic);
  GC_NEW_LAYOUT(se_lth_cs_realtime_semaphore_CountingSem_LayoutStatic,se_lth_cs_realtime_semaphore_CountingSem_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_CountingSem_Layout);
  GC_NEW_LAYOUT(se_lth_cs_realtime_semaphore_CountingSem_Layout,se_lth_cs_realtime_semaphore_CountingSem,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_CountingSem_Static);
  GC_NEW(se_lth_cs_realtime_semaphore_CountingSem_Static,se_lth_cs_realtime_semaphore_CountingSem_LayoutStatic);

  se_lth_cs_realtime_semaphore_CountingSem_Class.super = &java_lang_Object_Class;
  se_lth_cs_realtime_semaphore_CountingSem_Class.methodTbl = &se_lth_cs_realtime_semaphore_CountingSem_MethodTbl;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.toString = java_lang_Object_toString;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.clone = java_lang_Object_clone;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.give = se_lth_cs_realtime_semaphore_CountingSem_give;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.take = se_lth_cs_realtime_semaphore_CountingSem_take;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.createCountingSem_int = se_lth_cs_realtime_semaphore_CountingSem_createCountingSem_int;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.giveCountingSem_long = se_lth_cs_realtime_semaphore_CountingSem_giveCountingSem_long;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.takeCountingSem_long = se_lth_cs_realtime_semaphore_CountingSem_takeCountingSem_long;
  se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.takeCountingSem_long_long = se_lth_cs_realtime_semaphore_CountingSem_takeCountingSem_long_long;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl = &se_lth_cs_realtime_semaphore_CountingSem_ifazTbl;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl = &se_lth_cs_realtime_semaphore_CountingSem_se_lth_cs_realtime_semaphore_Semaphore_MethodTblStruct;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->give = se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.give;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->take = se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.take;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->toString = se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.toString;
  se_lth_cs_realtime_semaphore_CountingSem_Class.ifazTbl->se_lth_cs_realtime_semaphore_Semaphore_methodTbl->wait_long_int = se_lth_cs_realtime_semaphore_CountingSem_MethodTbl.wait_long_int;
  se_lth_cs_realtime_semaphore_CountingSem_Class.iface_size = 1;
  se_lth_cs_realtime_semaphore_CountingSem_Class.iface_array[0] = SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_INDEX;
  se_lth_cs_realtime_semaphore_CountingSem_Class.classIndex = SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_INDEX;

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_LayoutStatic);
  GC_NEW_LAYOUT(todo_AlarmClock_LayoutStatic,todo_AlarmClock_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_Layout);
  GC_NEW_LAYOUT(todo_AlarmClock_Layout,todo_AlarmClock,  9,  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_input),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_output),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_signal),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_alarmOnOff),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_mutex),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_time),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_userInput),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_timeThread),  GC_LAYOUT_FIELD(todo_AlarmClock,_todo_AlarmClock_userInputThread));

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_Static);
  GC_NEW(todo_AlarmClock_Static,todo_AlarmClock_LayoutStatic);

  todo_AlarmClock_Class.super = &java_lang_Object_Class;
  todo_AlarmClock_Class.methodTbl = &todo_AlarmClock_MethodTbl;
  todo_AlarmClock_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  todo_AlarmClock_MethodTbl.toString = java_lang_Object_toString;
  todo_AlarmClock_MethodTbl.clone = java_lang_Object_clone;
  todo_AlarmClock_MethodTbl.start = todo_AlarmClock_start;
  todo_AlarmClock_MethodTbl.setTime_int = todo_AlarmClock_setTime_int;
  todo_AlarmClock_MethodTbl.setAlarm_int = todo_AlarmClock_setAlarm_int;
  todo_AlarmClock_MethodTbl.incTime = todo_AlarmClock_incTime;
  todo_AlarmClock_MethodTbl.handleAlarm_boolean = todo_AlarmClock_handleAlarm_boolean;
  todo_AlarmClock_MethodTbl.toHHMMSS_int = todo_AlarmClock_toHHMMSS_int;
  todo_AlarmClock_MethodTbl.secondify_int = todo_AlarmClock_secondify_int;
  todo_AlarmClock_Class.classIndex = TODO_ALARMCLOCK_INDEX;

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_UserInput_LayoutStatic);
  GC_NEW_LAYOUT(todo_AlarmClock_UserInput_LayoutStatic,todo_AlarmClock_UserInput_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_UserInput_Layout);
  GC_NEW_LAYOUT(todo_AlarmClock_UserInput_Layout,todo_AlarmClock_UserInput,  1,  GC_LAYOUT_FIELD(todo_AlarmClock_UserInput,_todo_AlarmClock_UserInput_time));

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_UserInput_Static);
  GC_NEW(todo_AlarmClock_UserInput_Static,todo_AlarmClock_UserInput_LayoutStatic);

  todo_AlarmClock_UserInput_Class.super = &java_lang_Object_Class;
  todo_AlarmClock_UserInput_Class.methodTbl = &todo_AlarmClock_UserInput_MethodTbl;
  todo_AlarmClock_UserInput_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  todo_AlarmClock_UserInput_MethodTbl.toString = java_lang_Object_toString;
  todo_AlarmClock_UserInput_MethodTbl.clone = java_lang_Object_clone;
  todo_AlarmClock_UserInput_MethodTbl.run = todo_AlarmClock_UserInput_run;
  todo_AlarmClock_UserInput_Class.ifazTbl = &todo_AlarmClock_UserInput_ifazTbl;
  todo_AlarmClock_UserInput_Class.ifazTbl->java_lang_Runnable_methodTbl = &todo_AlarmClock_UserInput_java_lang_Runnable_MethodTblStruct;
  todo_AlarmClock_UserInput_Class.ifazTbl->java_lang_Runnable_methodTbl->run = todo_AlarmClock_UserInput_MethodTbl.run;
  todo_AlarmClock_UserInput_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = todo_AlarmClock_UserInput_MethodTbl.toString;
  todo_AlarmClock_UserInput_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = todo_AlarmClock_UserInput_MethodTbl.wait_long_int;
  todo_AlarmClock_UserInput_Class.iface_size = 1;
  todo_AlarmClock_UserInput_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  todo_AlarmClock_UserInput_Class.classIndex = TODO_ALARMCLOCK_USERINPUT_INDEX;

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_Time_LayoutStatic);
  GC_NEW_LAYOUT(todo_AlarmClock_Time_LayoutStatic,todo_AlarmClock_Time_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_Time_Layout);
  GC_NEW_LAYOUT(todo_AlarmClock_Time_Layout,todo_AlarmClock_Time,  0);

  GC_PUSH_STATIC_ROOT(todo_AlarmClock_Time_Static);
  GC_NEW(todo_AlarmClock_Time_Static,todo_AlarmClock_Time_LayoutStatic);

  todo_AlarmClock_Time_Class.super = &java_lang_Object_Class;
  todo_AlarmClock_Time_Class.methodTbl = &todo_AlarmClock_Time_MethodTbl;
  todo_AlarmClock_Time_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  todo_AlarmClock_Time_MethodTbl.toString = java_lang_Object_toString;
  todo_AlarmClock_Time_MethodTbl.clone = java_lang_Object_clone;
  todo_AlarmClock_Time_MethodTbl.run = todo_AlarmClock_Time_run;
  todo_AlarmClock_Time_Class.ifazTbl = &todo_AlarmClock_Time_ifazTbl;
  todo_AlarmClock_Time_Class.ifazTbl->java_lang_Runnable_methodTbl = &todo_AlarmClock_Time_java_lang_Runnable_MethodTblStruct;
  todo_AlarmClock_Time_Class.ifazTbl->java_lang_Runnable_methodTbl->run = todo_AlarmClock_Time_MethodTbl.run;
  todo_AlarmClock_Time_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = todo_AlarmClock_Time_MethodTbl.toString;
  todo_AlarmClock_Time_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = todo_AlarmClock_Time_MethodTbl.wait_long_int;
  todo_AlarmClock_Time_Class.iface_size = 1;
  todo_AlarmClock_Time_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  todo_AlarmClock_Time_Class.classIndex = TODO_ALARMCLOCK_TIME_INDEX;

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_Semaphore_LayoutStatic);
  GC_NEW_LAYOUT(se_lth_cs_realtime_semaphore_Semaphore_LayoutStatic,se_lth_cs_realtime_semaphore_Semaphore_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_realtime_semaphore_Semaphore_Static);
  GC_NEW(se_lth_cs_realtime_semaphore_Semaphore_Static,se_lth_cs_realtime_semaphore_Semaphore_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_InterruptedException_LayoutStatic,java_lang_InterruptedException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_Layout);
  GC_NEW_LAYOUT(java_lang_InterruptedException_Layout,java_lang_InterruptedException,  3,  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_Static);
  GC_NEW(java_lang_InterruptedException_Static,java_lang_InterruptedException_LayoutStatic);

  java_lang_InterruptedException_Class.super = &java_lang_Exception_Class;
  java_lang_InterruptedException_Class.methodTbl = &java_lang_InterruptedException_MethodTbl;
  java_lang_InterruptedException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_InterruptedException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_InterruptedException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_InterruptedException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_InterruptedException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_InterruptedException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_InterruptedException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_InterruptedException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_InterruptedException_Class.ifazTbl = &java_lang_InterruptedException_ifazTbl;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_InterruptedException_java_io_Serializable_MethodTblStruct;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_InterruptedException_MethodTbl.toString;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_InterruptedException_MethodTbl.wait_long_int;
  java_lang_InterruptedException_Class.iface_size = 1;
  java_lang_InterruptedException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_InterruptedException_Class.classIndex = JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Exception_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Exception_LayoutStatic,java_lang_Exception_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Exception_Layout);
  GC_NEW_LAYOUT(java_lang_Exception_Layout,java_lang_Exception,  3,  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_Exception_Static);
  GC_NEW(java_lang_Exception_Static,java_lang_Exception_LayoutStatic);

  java_lang_Exception_Class.super = &java_lang_Throwable_Class;
  java_lang_Exception_Class.methodTbl = &java_lang_Exception_MethodTbl;
  java_lang_Exception_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Exception_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_Exception_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Exception_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_Exception_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_Exception_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_Exception_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_Exception_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_Exception_Class.ifazTbl = &java_lang_Exception_ifazTbl;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Exception_java_io_Serializable_MethodTblStruct;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Exception_MethodTbl.toString;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Exception_MethodTbl.wait_long_int;
  java_lang_Exception_Class.iface_size = 1;
  java_lang_Exception_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Exception_Class.classIndex = JAVA_LANG_EXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_PrintStream_LayoutStatic,java_io_PrintStream_ClassStatic,  1,  GC_LAYOUT_FIELD(java_io_PrintStream_ClassStatic,_java_io_PrintStream_line_separator));

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_Layout);
  GC_NEW_LAYOUT(java_io_PrintStream_Layout,java_io_PrintStream,  2,  GC_LAYOUT_FIELD(java_io_PrintStream,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_io_PrintStream,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_Static);
  GC_NEW(java_io_PrintStream_Static,java_io_PrintStream_LayoutStatic);

  java_io_PrintStream_Class.super = &java_io_FilterOutputStream_Class;
  java_io_PrintStream_Class.methodTbl = &java_io_PrintStream_MethodTbl;
  java_io_PrintStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_PrintStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_PrintStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_PrintStream_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_io_PrintStream_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_io_PrintStream_MethodTbl.flush = java_io_PrintStream_flush;
  java_io_PrintStream_MethodTbl.setError = java_io_PrintStream_setError;
  java_io_PrintStream_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_io_PrintStream_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_io_PrintStream_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_io_PrintStream_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_io_PrintStream_MethodTbl.print_java_lang_String = java_io_PrintStream_print_java_lang_String;
  java_io_PrintStream_Class.classIndex = JAVA_IO_PRINTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IllegalArgumentException_LayoutStatic,java_lang_IllegalArgumentException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_Layout);
  GC_NEW_LAYOUT(java_lang_IllegalArgumentException_Layout,java_lang_IllegalArgumentException,  3,  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_Static);
  GC_NEW(java_lang_IllegalArgumentException_Static,java_lang_IllegalArgumentException_LayoutStatic);

  java_lang_IllegalArgumentException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IllegalArgumentException_Class.methodTbl = &java_lang_IllegalArgumentException_MethodTbl;
  java_lang_IllegalArgumentException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IllegalArgumentException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IllegalArgumentException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IllegalArgumentException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IllegalArgumentException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_IllegalArgumentException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IllegalArgumentException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IllegalArgumentException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IllegalArgumentException_Class.ifazTbl = &java_lang_IllegalArgumentException_ifazTbl;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IllegalArgumentException_java_io_Serializable_MethodTblStruct;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IllegalArgumentException_MethodTbl.toString;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IllegalArgumentException_MethodTbl.wait_long_int;
  java_lang_IllegalArgumentException_Class.iface_size = 1;
  java_lang_IllegalArgumentException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IllegalArgumentException_Class.classIndex = JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_RuntimeException_LayoutStatic,java_lang_RuntimeException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_Layout);
  GC_NEW_LAYOUT(java_lang_RuntimeException_Layout,java_lang_RuntimeException,  3,  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_Static);
  GC_NEW(java_lang_RuntimeException_Static,java_lang_RuntimeException_LayoutStatic);

  java_lang_RuntimeException_Class.super = &java_lang_Exception_Class;
  java_lang_RuntimeException_Class.methodTbl = &java_lang_RuntimeException_MethodTbl;
  java_lang_RuntimeException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_RuntimeException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_RuntimeException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_RuntimeException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_RuntimeException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_RuntimeException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_RuntimeException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_RuntimeException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_RuntimeException_Class.ifazTbl = &java_lang_RuntimeException_ifazTbl;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_RuntimeException_java_io_Serializable_MethodTblStruct;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_RuntimeException_MethodTbl.toString;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_RuntimeException_MethodTbl.wait_long_int;
  java_lang_RuntimeException_Class.iface_size = 1;
  java_lang_RuntimeException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_RuntimeException_Class.classIndex = JAVA_LANG_RUNTIMEEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Comparable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Comparable_LayoutStatic,java_lang_Comparable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Comparable_Static);
  GC_NEW(java_lang_Comparable_Static,java_lang_Comparable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_CharSequence_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_CharSequence_LayoutStatic,java_lang_CharSequence_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_CharSequence_Static);
  GC_NEW(java_lang_CharSequence_Static,java_lang_CharSequence_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringBuilder_LayoutStatic,java_lang_StringBuilder_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_Layout);
  GC_NEW_LAYOUT(java_lang_StringBuilder_Layout,java_lang_StringBuilder,  1,  GC_LAYOUT_FIELD(java_lang_StringBuilder,_java_lang_StringBuilder_value));

  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_Static);
  GC_NEW(java_lang_StringBuilder_Static,java_lang_StringBuilder_LayoutStatic);

  java_lang_StringBuilder_Class.super = &java_lang_Object_Class;
  java_lang_StringBuilder_Class.methodTbl = &java_lang_StringBuilder_MethodTbl;
  java_lang_StringBuilder_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringBuilder_MethodTbl.toString = java_lang_StringBuilder_toString;
  java_lang_StringBuilder_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringBuilder_Class.ifazTbl = &java_lang_StringBuilder_ifazTbl;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringBuilder_java_io_Serializable_MethodTblStruct;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringBuilder_MethodTbl.toString;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringBuilder_MethodTbl.wait_long_int;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_StringBuilder_java_lang_CharSequence_MethodTblStruct;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_StringBuilder_MethodTbl.toString;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_StringBuilder_MethodTbl.wait_long_int;
  java_lang_StringBuilder_Class.iface_size = 2;
  java_lang_StringBuilder_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringBuilder_Class.iface_array[1] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_StringBuilder_Class.classIndex = JAVA_LANG_STRINGBUILDER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringBuffer_LayoutStatic,java_lang_StringBuffer_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_Layout);
  GC_NEW_LAYOUT(java_lang_StringBuffer_Layout,java_lang_StringBuffer,  1,  GC_LAYOUT_FIELD(java_lang_StringBuffer,_java_lang_StringBuffer_value));

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_Static);
  GC_NEW(java_lang_StringBuffer_Static,java_lang_StringBuffer_LayoutStatic);

  java_lang_StringBuffer_Class.super = &java_lang_Object_Class;
  java_lang_StringBuffer_Class.methodTbl = &java_lang_StringBuffer_MethodTbl;
  java_lang_StringBuffer_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringBuffer_MethodTbl.toString = java_lang_StringBuffer_toString;
  java_lang_StringBuffer_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringBuffer_MethodTbl.append_java_lang_Object = java_lang_StringBuffer_append_java_lang_Object;
  java_lang_StringBuffer_MethodTbl.append_java_lang_String = java_lang_StringBuffer_append_java_lang_String;
  java_lang_StringBuffer_MethodTbl.append_java_lang_StringBuffer = java_lang_StringBuffer_append_java_lang_StringBuffer;
  java_lang_StringBuffer_MethodTbl.append_charA = java_lang_StringBuffer_append_charA;
  java_lang_StringBuffer_MethodTbl.append_charA_int_int = java_lang_StringBuffer_append_charA_int_int;
  java_lang_StringBuffer_MethodTbl.append_boolean = java_lang_StringBuffer_append_boolean;
  java_lang_StringBuffer_MethodTbl.append_char = java_lang_StringBuffer_append_char;
  java_lang_StringBuffer_MethodTbl.append_int = java_lang_StringBuffer_append_int;
  java_lang_StringBuffer_MethodTbl.append_long = java_lang_StringBuffer_append_long;
  java_lang_StringBuffer_MethodTbl.append_float = java_lang_StringBuffer_append_float;
  java_lang_StringBuffer_MethodTbl.append_double = java_lang_StringBuffer_append_double;
  java_lang_StringBuffer_MethodTbl.delete_int_int = java_lang_StringBuffer_delete_int_int;
  java_lang_StringBuffer_MethodTbl.substring_int_int = java_lang_StringBuffer_substring_int_int;
  java_lang_StringBuffer_MethodTbl.insert_int_charA_int_int = java_lang_StringBuffer_insert_int_charA_int_int;
  java_lang_StringBuffer_MethodTbl.insert_int_java_lang_String = java_lang_StringBuffer_insert_int_java_lang_String;
  java_lang_StringBuffer_MethodTbl.indexOf_java_lang_String_int = java_lang_StringBuffer_indexOf_java_lang_String_int;
  java_lang_StringBuffer_MethodTbl.lastIndexOf_java_lang_String_int = java_lang_StringBuffer_lastIndexOf_java_lang_String_int;
  java_lang_StringBuffer_MethodTbl.ensureCapacity_unsynchronized_int = java_lang_StringBuffer_ensureCapacity_unsynchronized_int;
  java_lang_StringBuffer_MethodTbl.regionMatches_int_java_lang_String = java_lang_StringBuffer_regionMatches_int_java_lang_String;
  java_lang_StringBuffer_Class.ifazTbl = &java_lang_StringBuffer_ifazTbl;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringBuffer_java_io_Serializable_MethodTblStruct;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringBuffer_MethodTbl.toString;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringBuffer_MethodTbl.wait_long_int;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_StringBuffer_java_lang_CharSequence_MethodTblStruct;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_StringBuffer_MethodTbl.toString;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_StringBuffer_MethodTbl.wait_long_int;
  java_lang_StringBuffer_Class.iface_size = 2;
  java_lang_StringBuffer_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringBuffer_Class.iface_array[1] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_StringBuffer_Class.classIndex = JAVA_LANG_STRINGBUFFER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_System_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_System_LayoutStatic,java_lang_System_ClassStatic,  3,  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_out),  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_in),  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_err));

  GC_PUSH_STATIC_ROOT(java_lang_System_Layout);
  GC_NEW_LAYOUT(java_lang_System_Layout,java_lang_System,  0);

  GC_PUSH_STATIC_ROOT(java_lang_System_Static);
  GC_NEW(java_lang_System_Static,java_lang_System_LayoutStatic);

  java_lang_System_Class.super = &java_lang_Object_Class;
  java_lang_System_Class.methodTbl = &java_lang_System_MethodTbl;
  java_lang_System_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_System_MethodTbl.toString = java_lang_Object_toString;
  java_lang_System_MethodTbl.clone = java_lang_Object_clone;
  java_lang_System_Class.classIndex = JAVA_LANG_SYSTEM_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_PhonyWriter_LayoutStatic,java_lang_PhonyWriter_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_Layout);
  GC_NEW_LAYOUT(java_lang_PhonyWriter_Layout,java_lang_PhonyWriter,  2,  GC_LAYOUT_FIELD(java_lang_PhonyWriter,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_lang_PhonyWriter,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_Static);
  GC_NEW(java_lang_PhonyWriter_Static,java_lang_PhonyWriter_LayoutStatic);

  java_lang_PhonyWriter_Class.super = &java_io_PrintStream_Class;
  java_lang_PhonyWriter_Class.methodTbl = &java_lang_PhonyWriter_MethodTbl;
  java_lang_PhonyWriter_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_PhonyWriter_MethodTbl.toString = java_lang_Object_toString;
  java_lang_PhonyWriter_MethodTbl.clone = java_lang_Object_clone;
  java_lang_PhonyWriter_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_lang_PhonyWriter_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_lang_PhonyWriter_MethodTbl.flush = java_lang_PhonyWriter_flush;
  java_lang_PhonyWriter_MethodTbl.setError = java_io_PrintStream_setError;
  java_lang_PhonyWriter_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_lang_PhonyWriter_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_lang_PhonyWriter_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_lang_PhonyWriter_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_lang_PhonyWriter_MethodTbl.print_java_lang_String = java_lang_PhonyWriter_print_java_lang_String;
  java_lang_PhonyWriter_MethodTbl.println_java_lang_String = java_lang_PhonyWriter_println_java_lang_String;
  java_lang_PhonyWriter_Class.classIndex = JAVA_LANG_PHONYWRITER_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_FilterOutputStream_LayoutStatic,java_io_FilterOutputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_Layout);
  GC_NEW_LAYOUT(java_io_FilterOutputStream_Layout,java_io_FilterOutputStream,  1,  GC_LAYOUT_FIELD(java_io_FilterOutputStream,_java_io_FilterOutputStream_out));

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_Static);
  GC_NEW(java_io_FilterOutputStream_Static,java_io_FilterOutputStream_LayoutStatic);

  java_io_FilterOutputStream_Class.super = &java_io_OutputStream_Class;
  java_io_FilterOutputStream_Class.methodTbl = &java_io_FilterOutputStream_MethodTbl;
  java_io_FilterOutputStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_FilterOutputStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_FilterOutputStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_FilterOutputStream_MethodTbl.write_int = java_io_FilterOutputStream_write_int;
  java_io_FilterOutputStream_MethodTbl.write_byteA_int_int = java_io_FilterOutputStream_write_byteA_int_int;
  java_io_FilterOutputStream_MethodTbl.flush = java_io_FilterOutputStream_flush;
  java_io_FilterOutputStream_MethodTbl.close = java_io_FilterOutputStream_close;
  java_io_FilterOutputStream_Class.classIndex = JAVA_IO_FILTEROUTPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_OutputStream_LayoutStatic,java_io_OutputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_Layout);
  GC_NEW_LAYOUT(java_io_OutputStream_Layout,java_io_OutputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_Static);
  GC_NEW(java_io_OutputStream_Static,java_io_OutputStream_LayoutStatic);

  java_io_OutputStream_Class.super = &java_lang_Object_Class;
  java_io_OutputStream_Class.classIndex = JAVA_IO_OUTPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringIndexOutOfBoundsException_LayoutStatic,java_lang_StringIndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_StringIndexOutOfBoundsException_Layout,java_lang_StringIndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_Static);
  GC_NEW(java_lang_StringIndexOutOfBoundsException_Static,java_lang_StringIndexOutOfBoundsException_LayoutStatic);

  java_lang_StringIndexOutOfBoundsException_Class.super = &java_lang_IndexOutOfBoundsException_Class;
  java_lang_StringIndexOutOfBoundsException_Class.methodTbl = &java_lang_StringIndexOutOfBoundsException_MethodTbl;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl = &java_lang_StringIndexOutOfBoundsException_ifazTbl;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringIndexOutOfBoundsException_MethodTbl.toString;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringIndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_StringIndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_StringIndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringIndexOutOfBoundsException_Class.classIndex = JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IndexOutOfBoundsException_LayoutStatic,java_lang_IndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_IndexOutOfBoundsException_Layout,java_lang_IndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_Static);
  GC_NEW(java_lang_IndexOutOfBoundsException_Static,java_lang_IndexOutOfBoundsException_LayoutStatic);

  java_lang_IndexOutOfBoundsException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IndexOutOfBoundsException_Class.methodTbl = &java_lang_IndexOutOfBoundsException_MethodTbl;
  java_lang_IndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IndexOutOfBoundsException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_IndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl = &java_lang_IndexOutOfBoundsException_ifazTbl;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IndexOutOfBoundsException_MethodTbl.toString;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_IndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_IndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IndexOutOfBoundsException_Class.classIndex = JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_IOException_LayoutStatic);
  GC_NEW_LAYOUT(java_io_IOException_LayoutStatic,java_io_IOException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_IOException_Layout);
  GC_NEW_LAYOUT(java_io_IOException_Layout,java_io_IOException,  3,  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_io_IOException_Static);
  GC_NEW(java_io_IOException_Static,java_io_IOException_LayoutStatic);

  java_io_IOException_Class.super = &java_lang_Exception_Class;
  java_io_IOException_Class.methodTbl = &java_io_IOException_MethodTbl;
  java_io_IOException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_IOException_MethodTbl.toString = java_lang_Throwable_toString;
  java_io_IOException_MethodTbl.clone = java_lang_Object_clone;
  java_io_IOException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_io_IOException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_io_IOException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_io_IOException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_io_IOException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_io_IOException_Class.ifazTbl = &java_io_IOException_ifazTbl;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_io_IOException_java_io_Serializable_MethodTblStruct;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_io_IOException_MethodTbl.toString;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_io_IOException_MethodTbl.wait_long_int;
  java_io_IOException_Class.iface_size = 1;
  java_io_IOException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_io_IOException_Class.classIndex = JAVA_IO_IOEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Character_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Character_LayoutStatic,java_lang_Character_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Character_ClassStatic,_java_lang_Character_NUM_VALUE));

  GC_PUSH_STATIC_ROOT(java_lang_Character_Layout);
  GC_NEW_LAYOUT(java_lang_Character_Layout,java_lang_Character,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Character_Static);
  GC_NEW(java_lang_Character_Static,java_lang_Character_LayoutStatic);

  java_lang_Character_Class.super = &java_lang_Object_Class;
  java_lang_Character_Class.methodTbl = &java_lang_Character_MethodTbl;
  java_lang_Character_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Character_MethodTbl.toString = java_lang_Character_toString;
  java_lang_Character_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Character_Class.ifazTbl = &java_lang_Character_ifazTbl;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Character_java_io_Serializable_MethodTblStruct;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Character_MethodTbl.toString;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Character_MethodTbl.wait_long_int;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Character_java_lang_Comparable_MethodTblStruct;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Character_MethodTbl.toString;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Character_MethodTbl.wait_long_int;
  java_lang_Character_Class.iface_size = 2;
  java_lang_Character_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Character_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Character_Class.classIndex = JAVA_LANG_CHARACTER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Character_Subset_LayoutStatic,java_lang_Character_Subset_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_Layout);
  GC_NEW_LAYOUT(java_lang_Character_Subset_Layout,java_lang_Character_Subset,  1,  GC_LAYOUT_FIELD(java_lang_Character_Subset,_java_lang_Character_Subset_name));

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_Static);
  GC_NEW(java_lang_Character_Subset_Static,java_lang_Character_Subset_LayoutStatic);

  java_lang_Character_Subset_Class.super = &java_lang_Object_Class;
  java_lang_Character_Subset_Class.methodTbl = &java_lang_Character_Subset_MethodTbl;
  java_lang_Character_Subset_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Character_Subset_MethodTbl.toString = java_lang_Character_Subset_toString;
  java_lang_Character_Subset_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Character_Subset_Class.classIndex = JAVA_LANG_CHARACTER_SUBSET_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Math_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Math_LayoutStatic,java_lang_Math_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Math_ClassStatic,_java_lang_Math_rand));

  GC_PUSH_STATIC_ROOT(java_lang_Math_Layout);
  GC_NEW_LAYOUT(java_lang_Math_Layout,java_lang_Math,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Math_Static);
  GC_NEW(java_lang_Math_Static,java_lang_Math_LayoutStatic);

  java_lang_Math_Class.super = &java_lang_Object_Class;
  java_lang_Math_Class.methodTbl = &java_lang_Math_MethodTbl;
  java_lang_Math_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Math_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Math_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Math_Class.classIndex = JAVA_LANG_MATH_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Integer_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Integer_LayoutStatic,java_lang_Integer_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Integer_ClassStatic,_java_lang_Integer_intCache));

  GC_PUSH_STATIC_ROOT(java_lang_Integer_Layout);
  GC_NEW_LAYOUT(java_lang_Integer_Layout,java_lang_Integer,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Integer_Static);
  GC_NEW(java_lang_Integer_Static,java_lang_Integer_LayoutStatic);

  java_lang_Integer_Class.super = &java_lang_Number_Class;
  java_lang_Integer_Class.methodTbl = &java_lang_Integer_MethodTbl;
  java_lang_Integer_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Integer_MethodTbl.toString = java_lang_Integer_toString;
  java_lang_Integer_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Integer_Class.ifazTbl = &java_lang_Integer_ifazTbl;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Integer_java_io_Serializable_MethodTblStruct;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Integer_MethodTbl.toString;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Integer_MethodTbl.wait_long_int;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Integer_java_lang_Comparable_MethodTblStruct;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Integer_MethodTbl.toString;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Integer_MethodTbl.wait_long_int;
  java_lang_Integer_Class.iface_size = 2;
  java_lang_Integer_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Integer_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Integer_Class.classIndex = JAVA_LANG_INTEGER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Number_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Number_LayoutStatic,java_lang_Number_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Number_ClassStatic,_java_lang_Number_digits));

  GC_PUSH_STATIC_ROOT(java_lang_Number_Layout);
  GC_NEW_LAYOUT(java_lang_Number_Layout,java_lang_Number,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Number_Static);
  GC_NEW(java_lang_Number_Static,java_lang_Number_LayoutStatic);

  java_lang_Number_Class.super = &java_lang_Object_Class;
  java_lang_Number_Class.classIndex = JAVA_LANG_NUMBER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Long_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Long_LayoutStatic,java_lang_Long_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Long_Layout);
  GC_NEW_LAYOUT(java_lang_Long_Layout,java_lang_Long,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Long_Static);
  GC_NEW(java_lang_Long_Static,java_lang_Long_LayoutStatic);

  java_lang_Long_Class.super = &java_lang_Number_Class;
  java_lang_Long_Class.methodTbl = &java_lang_Long_MethodTbl;
  java_lang_Long_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Long_MethodTbl.toString = java_lang_Long_toString;
  java_lang_Long_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Long_Class.ifazTbl = &java_lang_Long_ifazTbl;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Long_java_io_Serializable_MethodTblStruct;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Long_MethodTbl.toString;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Long_MethodTbl.wait_long_int;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Long_java_lang_Comparable_MethodTblStruct;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Long_MethodTbl.toString;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Long_MethodTbl.wait_long_int;
  java_lang_Long_Class.iface_size = 2;
  java_lang_Long_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Long_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Long_Class.classIndex = JAVA_LANG_LONG_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Float_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Float_LayoutStatic,java_lang_Float_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Float_Layout);
  GC_NEW_LAYOUT(java_lang_Float_Layout,java_lang_Float,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Float_Static);
  GC_NEW(java_lang_Float_Static,java_lang_Float_LayoutStatic);

  java_lang_Float_Class.super = &java_lang_Number_Class;
  java_lang_Float_Class.methodTbl = &java_lang_Float_MethodTbl;
  java_lang_Float_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Float_MethodTbl.toString = java_lang_Float_toString;
  java_lang_Float_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Float_Class.ifazTbl = &java_lang_Float_ifazTbl;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Float_java_io_Serializable_MethodTblStruct;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Float_MethodTbl.toString;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Float_MethodTbl.wait_long_int;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Float_java_lang_Comparable_MethodTblStruct;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Float_MethodTbl.toString;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Float_MethodTbl.wait_long_int;
  java_lang_Float_Class.iface_size = 2;
  java_lang_Float_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Float_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Float_Class.classIndex = JAVA_LANG_FLOAT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Double_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Double_LayoutStatic,java_lang_Double_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Double_Layout);
  GC_NEW_LAYOUT(java_lang_Double_Layout,java_lang_Double,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Double_Static);
  GC_NEW(java_lang_Double_Static,java_lang_Double_LayoutStatic);

  java_lang_Double_Class.super = &java_lang_Number_Class;
  java_lang_Double_Class.methodTbl = &java_lang_Double_MethodTbl;
  java_lang_Double_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Double_MethodTbl.toString = java_lang_Double_toString;
  java_lang_Double_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Double_Class.ifazTbl = &java_lang_Double_ifazTbl;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Double_java_io_Serializable_MethodTblStruct;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Double_MethodTbl.toString;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Double_MethodTbl.wait_long_int;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Double_java_lang_Comparable_MethodTblStruct;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Double_MethodTbl.toString;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Double_MethodTbl.wait_long_int;
  java_lang_Double_Class.iface_size = 2;
  java_lang_Double_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Double_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Double_Class.classIndex = JAVA_LANG_DOUBLE_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StackTraceElement_LayoutStatic,java_lang_StackTraceElement_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_Layout);
  GC_NEW_LAYOUT(java_lang_StackTraceElement_Layout,java_lang_StackTraceElement,  3,  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_fileName),  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_declaringClass),  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_methodName));

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_Static);
  GC_NEW(java_lang_StackTraceElement_Static,java_lang_StackTraceElement_LayoutStatic);

  java_lang_StackTraceElement_Class.super = &java_lang_Object_Class;
  java_lang_StackTraceElement_Class.methodTbl = &java_lang_StackTraceElement_MethodTbl;
  java_lang_StackTraceElement_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StackTraceElement_MethodTbl.toString = java_lang_StackTraceElement_toString;
  java_lang_StackTraceElement_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StackTraceElement_Class.ifazTbl = &java_lang_StackTraceElement_ifazTbl;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StackTraceElement_java_io_Serializable_MethodTblStruct;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StackTraceElement_MethodTbl.toString;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StackTraceElement_MethodTbl.wait_long_int;
  java_lang_StackTraceElement_Class.iface_size = 1;
  java_lang_StackTraceElement_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StackTraceElement_Class.classIndex = JAVA_LANG_STACKTRACEELEMENT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IllegalStateException_LayoutStatic,java_lang_IllegalStateException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_Layout);
  GC_NEW_LAYOUT(java_lang_IllegalStateException_Layout,java_lang_IllegalStateException,  3,  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_Static);
  GC_NEW(java_lang_IllegalStateException_Static,java_lang_IllegalStateException_LayoutStatic);

  java_lang_IllegalStateException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IllegalStateException_Class.methodTbl = &java_lang_IllegalStateException_MethodTbl;
  java_lang_IllegalStateException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IllegalStateException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IllegalStateException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IllegalStateException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IllegalStateException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_IllegalStateException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IllegalStateException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IllegalStateException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IllegalStateException_Class.ifazTbl = &java_lang_IllegalStateException_ifazTbl;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IllegalStateException_java_io_Serializable_MethodTblStruct;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IllegalStateException_MethodTbl.toString;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IllegalStateException_MethodTbl.wait_long_int;
  java_lang_IllegalStateException_Class.iface_size = 1;
  java_lang_IllegalStateException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IllegalStateException_Class.classIndex = JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_ErrWriter_LayoutStatic,java_lang_ErrWriter_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_Layout);
  GC_NEW_LAYOUT(java_lang_ErrWriter_Layout,java_lang_ErrWriter,  2,  GC_LAYOUT_FIELD(java_lang_ErrWriter,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_lang_ErrWriter,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_Static);
  GC_NEW(java_lang_ErrWriter_Static,java_lang_ErrWriter_LayoutStatic);

  java_lang_ErrWriter_Class.super = &java_io_PrintStream_Class;
  java_lang_ErrWriter_Class.methodTbl = &java_lang_ErrWriter_MethodTbl;
  java_lang_ErrWriter_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_ErrWriter_MethodTbl.toString = java_lang_Object_toString;
  java_lang_ErrWriter_MethodTbl.clone = java_lang_Object_clone;
  java_lang_ErrWriter_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_lang_ErrWriter_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_lang_ErrWriter_MethodTbl.flush = java_lang_ErrWriter_flush;
  java_lang_ErrWriter_MethodTbl.setError = java_io_PrintStream_setError;
  java_lang_ErrWriter_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_lang_ErrWriter_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_lang_ErrWriter_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_lang_ErrWriter_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_lang_ErrWriter_MethodTbl.print_java_lang_String = java_lang_ErrWriter_print_java_lang_String;
  java_lang_ErrWriter_Class.classIndex = JAVA_LANG_ERRWRITER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_NullPointerException_LayoutStatic,java_lang_NullPointerException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_Layout);
  GC_NEW_LAYOUT(java_lang_NullPointerException_Layout,java_lang_NullPointerException,  3,  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_Static);
  GC_NEW(java_lang_NullPointerException_Static,java_lang_NullPointerException_LayoutStatic);

  java_lang_NullPointerException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_NullPointerException_Class.methodTbl = &java_lang_NullPointerException_MethodTbl;
  java_lang_NullPointerException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_NullPointerException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_NullPointerException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_NullPointerException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_NullPointerException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_NullPointerException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_NullPointerException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_NullPointerException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_NullPointerException_Class.ifazTbl = &java_lang_NullPointerException_ifazTbl;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_NullPointerException_java_io_Serializable_MethodTblStruct;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_NullPointerException_MethodTbl.toString;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_NullPointerException_MethodTbl.wait_long_int;
  java_lang_NullPointerException_Class.iface_size = 1;
  java_lang_NullPointerException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_NullPointerException_Class.classIndex = JAVA_LANG_NULLPOINTEREXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(done_InputSampler_LayoutStatic);
  GC_NEW_LAYOUT(done_InputSampler_LayoutStatic,done_InputSampler_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(done_InputSampler_Layout);
  GC_NEW_LAYOUT(done_InputSampler_Layout,done_InputSampler,  2,  GC_LAYOUT_FIELD(done_InputSampler,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(done_InputSampler,_java_lang_Thread_name));

  GC_PUSH_STATIC_ROOT(done_InputSampler_Static);
  GC_NEW(done_InputSampler_Static,done_InputSampler_LayoutStatic);

  done_InputSampler_Class.super = &java_lang_Thread_Class;
  done_InputSampler_Class.methodTbl = &done_InputSampler_MethodTbl;
  done_InputSampler_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  done_InputSampler_MethodTbl.toString = java_lang_Object_toString;
  done_InputSampler_MethodTbl.clone = java_lang_Object_clone;
  done_InputSampler_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  done_InputSampler_MethodTbl.createThread = java_lang_Thread_createThread;
  done_InputSampler_MethodTbl.start = java_lang_Thread_start;
  done_InputSampler_MethodTbl.run = done_InputSampler_run;
  done_InputSampler_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  done_InputSampler_MethodTbl.interrupt = java_lang_Thread_interrupt;
  done_InputSampler_Class.ifazTbl = &done_InputSampler_ifazTbl;
  done_InputSampler_Class.ifazTbl->java_lang_Runnable_methodTbl = &done_InputSampler_java_lang_Runnable_MethodTblStruct;
  done_InputSampler_Class.ifazTbl->java_lang_Runnable_methodTbl->run = done_InputSampler_MethodTbl.run;
  done_InputSampler_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = done_InputSampler_MethodTbl.toString;
  done_InputSampler_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = done_InputSampler_MethodTbl.wait_long_int;
  done_InputSampler_Class.iface_size = 1;
  done_InputSampler_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  done_InputSampler_Class.classIndex = DONE_INPUTSAMPLER_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_LayoutStatic);
  GC_NEW_LAYOUT(java_io_InterruptedIOException_LayoutStatic,java_io_InterruptedIOException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_Layout);
  GC_NEW_LAYOUT(java_io_InterruptedIOException_Layout,java_io_InterruptedIOException,  3,  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_Static);
  GC_NEW(java_io_InterruptedIOException_Static,java_io_InterruptedIOException_LayoutStatic);

  java_io_InterruptedIOException_Class.super = &java_io_IOException_Class;
  java_io_InterruptedIOException_Class.methodTbl = &java_io_InterruptedIOException_MethodTbl;
  java_io_InterruptedIOException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_InterruptedIOException_MethodTbl.toString = java_lang_Throwable_toString;
  java_io_InterruptedIOException_MethodTbl.clone = java_lang_Object_clone;
  java_io_InterruptedIOException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_io_InterruptedIOException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_io_InterruptedIOException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_io_InterruptedIOException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_io_InterruptedIOException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_io_InterruptedIOException_Class.ifazTbl = &java_io_InterruptedIOException_ifazTbl;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_io_InterruptedIOException_java_io_Serializable_MethodTblStruct;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_io_InterruptedIOException_MethodTbl.toString;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_io_InterruptedIOException_MethodTbl.wait_long_int;
  java_io_InterruptedIOException_Class.iface_size = 1;
  java_io_InterruptedIOException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_io_InterruptedIOException_Class.classIndex = JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_PhonyReader_LayoutStatic,java_lang_PhonyReader_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_Layout);
  GC_NEW_LAYOUT(java_lang_PhonyReader_Layout,java_lang_PhonyReader,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_Static);
  GC_NEW(java_lang_PhonyReader_Static,java_lang_PhonyReader_LayoutStatic);

  java_lang_PhonyReader_Class.super = &java_io_InputStream_Class;
  java_lang_PhonyReader_Class.methodTbl = &java_lang_PhonyReader_MethodTbl;
  java_lang_PhonyReader_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_PhonyReader_MethodTbl.toString = java_lang_Object_toString;
  java_lang_PhonyReader_MethodTbl.clone = java_lang_Object_clone;
  java_lang_PhonyReader_MethodTbl.read = java_lang_PhonyReader_read;
  java_lang_PhonyReader_MethodTbl.read_byteA_int_int = java_io_InputStream_read_byteA_int_int;
  java_lang_PhonyReader_Class.classIndex = JAVA_LANG_PHONYREADER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_ArrayIndexOutOfBoundsException_LayoutStatic,java_lang_ArrayIndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_ArrayIndexOutOfBoundsException_Layout,java_lang_ArrayIndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_Static);
  GC_NEW(java_lang_ArrayIndexOutOfBoundsException_Static,java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);

  java_lang_ArrayIndexOutOfBoundsException_Class.super = &java_lang_IndexOutOfBoundsException_Class;
  java_lang_ArrayIndexOutOfBoundsException_Class.methodTbl = &java_lang_ArrayIndexOutOfBoundsException_MethodTbl;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.printStackTrace = java_lang_Throwable_printStackTrace;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl = &java_lang_ArrayIndexOutOfBoundsException_ifazTbl;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_ArrayIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.toString;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_ArrayIndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_ArrayIndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_ArrayIndexOutOfBoundsException_Class.classIndex = JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_InputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_InputStream_LayoutStatic,java_io_InputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_InputStream_Layout);
  GC_NEW_LAYOUT(java_io_InputStream_Layout,java_io_InputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_InputStream_Static);
  GC_NEW(java_io_InputStream_Static,java_io_InputStream_LayoutStatic);

  java_io_InputStream_Class.super = &java_lang_Object_Class;
  java_io_InputStream_Class.classIndex = JAVA_IO_INPUTSTREAM_INDEX;

#if HAS_REFLECTION > 0

  clazzes[JAVA_LANG_THREAD_INDEX].name = "java.lang.Thread";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_THREAD_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_THREAD_INDEX].clazz);
  clazzes[JAVA_LANG_RUNNABLE_INDEX].name = "java.lang.Runnable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_RUNNABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_RUNNABLE_INDEX].clazz);
  clazzes[JAVA_LANG_OBJECT_INDEX].name = "java.lang.Object";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_OBJECT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_OBJECT_INDEX].clazz);
  clazzes[JAVA_LANG_STRING_INDEX].name = "java.lang.String";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRING_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRING_INDEX].clazz);
  clazzes[JAVA_LANG_CLONEABLE_INDEX].name = "java.lang.Cloneable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CLONEABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CLONEABLE_INDEX].clazz);
  clazzes[JAVA_IO_SERIALIZABLE_INDEX].name = "java.io.Serializable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_SERIALIZABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_SERIALIZABLE_INDEX].clazz);
  clazzes[JAVA_LANG_THROWABLE_INDEX].name = "java.lang.Throwable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_THROWABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_THROWABLE_INDEX].clazz);
  clazzes[DONE_CLOCKINPUT_INDEX].name = "done.ClockInput";
  GC_PUSH_STATIC_ROOT(clazzes[DONE_CLOCKINPUT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[DONE_CLOCKINPUT_INDEX].clazz);
  clazzes[DONE_CLOCKOUTPUT_INDEX].name = "done.ClockOutput";
  GC_PUSH_STATIC_ROOT(clazzes[DONE_CLOCKOUTPUT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[DONE_CLOCKOUTPUT_INDEX].clazz);
  clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_MUTEXSEM_INDEX].name = "se.lth.cs.realtime.semaphore.MutexSem";
  GC_PUSH_STATIC_ROOT(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_MUTEXSEM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_MUTEXSEM_INDEX].clazz);
  clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_INDEX].name = "se.lth.cs.realtime.semaphore.CountingSem";
  GC_PUSH_STATIC_ROOT(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_COUNTINGSEM_INDEX].clazz);
  clazzes[TODO_ALARMCLOCK_INDEX].name = "todo.AlarmClock";
  GC_PUSH_STATIC_ROOT(clazzes[TODO_ALARMCLOCK_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[TODO_ALARMCLOCK_INDEX].clazz);
  clazzes[TODO_ALARMCLOCK_USERINPUT_INDEX].name = "todo.AlarmClock.UserInput";
  GC_PUSH_STATIC_ROOT(clazzes[TODO_ALARMCLOCK_USERINPUT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[TODO_ALARMCLOCK_USERINPUT_INDEX].clazz);
  clazzes[TODO_ALARMCLOCK_TIME_INDEX].name = "todo.AlarmClock.Time";
  GC_PUSH_STATIC_ROOT(clazzes[TODO_ALARMCLOCK_TIME_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[TODO_ALARMCLOCK_TIME_INDEX].clazz);
  clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_INDEX].name = "se.lth.cs.realtime.semaphore.Semaphore";
  GC_PUSH_STATIC_ROOT(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[SE_LTH_CS_REALTIME_SEMAPHORE_SEMAPHORE_INDEX].clazz);
  clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].name = "java.lang.InterruptedException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_EXCEPTION_INDEX].name = "java.lang.Exception";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_EXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_EXCEPTION_INDEX].clazz);
  clazzes[JAVA_IO_PRINTSTREAM_INDEX].name = "java.io.PrintStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_PRINTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_PRINTSTREAM_INDEX].clazz);
  clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].name = "java.lang.IllegalArgumentException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].name = "java.lang.RuntimeException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_COMPARABLE_INDEX].name = "java.lang.Comparable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_COMPARABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_COMPARABLE_INDEX].clazz);
  clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].name = "java.lang.CharSequence";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGBUILDER_INDEX].name = "java.lang.StringBuilder";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGBUILDER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGBUILDER_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGBUFFER_INDEX].name = "java.lang.StringBuffer";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGBUFFER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGBUFFER_INDEX].clazz);
  clazzes[JAVA_LANG_SYSTEM_INDEX].name = "java.lang.System";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_SYSTEM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_SYSTEM_INDEX].clazz);
  clazzes[JAVA_LANG_PHONYWRITER_INDEX].name = "java.lang.PhonyWriter";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_PHONYWRITER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_PHONYWRITER_INDEX].clazz);
  clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].name = "java.io.FilterOutputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].name = "java.io.OutputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.StringIndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.IndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_IO_IOEXCEPTION_INDEX].name = "java.io.IOException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_IOEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_IOEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_CHARACTER_INDEX].name = "java.lang.Character";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARACTER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARACTER_INDEX].clazz);
  clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].name = "java.lang.Character.Subset";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].clazz);
  clazzes[JAVA_LANG_MATH_INDEX].name = "java.lang.Math";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_MATH_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_MATH_INDEX].clazz);
  clazzes[JAVA_LANG_INTEGER_INDEX].name = "java.lang.Integer";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INTEGER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INTEGER_INDEX].clazz);
  clazzes[JAVA_LANG_NUMBER_INDEX].name = "java.lang.Number";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_NUMBER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_NUMBER_INDEX].clazz);
  clazzes[JAVA_LANG_LONG_INDEX].name = "java.lang.Long";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_LONG_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_LONG_INDEX].clazz);
  clazzes[JAVA_LANG_FLOAT_INDEX].name = "java.lang.Float";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_FLOAT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_FLOAT_INDEX].clazz);
  clazzes[JAVA_LANG_DOUBLE_INDEX].name = "java.lang.Double";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_DOUBLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_DOUBLE_INDEX].clazz);
  clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].name = "java.lang.StackTraceElement";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].clazz);
  clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].name = "java.lang.IllegalStateException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_ERRWRITER_INDEX].name = "java.lang.ErrWriter";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ERRWRITER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ERRWRITER_INDEX].clazz);
  clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].name = "java.lang.NullPointerException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].clazz);
  clazzes[DONE_INPUTSAMPLER_INDEX].name = "done.InputSampler";
  GC_PUSH_STATIC_ROOT(clazzes[DONE_INPUTSAMPLER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[DONE_INPUTSAMPLER_INDEX].clazz);
  clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].name = "java.io.InterruptedIOException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_PHONYREADER_INDEX].name = "java.lang.PhonyReader";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_PHONYREADER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_PHONYREADER_INDEX].clazz);
  clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.ArrayIndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_IO_INPUTSTREAM_INDEX].name = "java.io.InputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_INPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_INPUTSTREAM_INDEX].clazz);
#endif
  // Push a static null reference, declared in javatypes.h
  GC__IMPL_PUSH_STATIC_ROOT(nullRef);
  Fields_Init(__eFlag__);
}
