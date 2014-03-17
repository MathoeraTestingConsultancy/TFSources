/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class TestFrame_Engine */

#ifndef _Included_TestFrame_Engine
#define _Included_TestFrame_Engine
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     TestFrame_Engine
 * Method:    RegisterActionWord
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_RegisterActionWord
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    RegisterHeaderWord
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_RegisterHeaderWord
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    CreateActionWordSynonym
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_CreateActionWordSynonym
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    UnregisterActionWord
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_UnregisterActionWord
  (JNIEnv *, jclass, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    UnRegisterHeaderWord
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_UnRegisterHeaderWord
  (JNIEnv *, jclass, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    UnregisterAllActionWords
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_UnregisterAllActionWords
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    StartEngine
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_StartEngine
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    StopEngine
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_StopEngine
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GenerateReport
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GenerateReport
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GenerateReportFromLog
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GenerateReportFromLog
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    ProcessNextLine
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_ProcessNextLine
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetActionWord
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetActionWord
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetActionWordFunction
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetActionWordFunction
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetArgument
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetArgument
  (JNIEnv *, jclass, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    GetNumberOfArguments
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GetNumberOfArguments
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetParameter
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetParameter
  (JNIEnv *, jclass, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    GetNumberOfParameters
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GetNumberOfParameters
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetTestCase
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetTestCase
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetTestCondition
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetTestCondition
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetSection
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetSection
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetScenario
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetScenario
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetClusterFile
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetClusterFile
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetLineNumber
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GetLineNumber
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetNumberOfErrors
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_GetNumberOfErrors
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetLatestError
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetLatestError
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetArgumentDescription
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetArgumentDescription
  (JNIEnv *, jclass, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    GetParameterDescription
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetParameterDescription
  (JNIEnv *, jclass, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    GetCopyright
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetCopyright
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetVersion
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetBuild
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetBuild
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    GetLogFile
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_TestFrame_Engine_GetLogFile
  (JNIEnv *, jclass);

/*
 * Class:     TestFrame_Engine
 * Method:    ReportComment
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_ReportComment
  (JNIEnv *, jclass, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    ReportError
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_ReportError
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    ReportCheck
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_ReportCheck
  (JNIEnv *, jclass, jstring, jstring, jstring, jint);

/*
 * Class:     TestFrame_Engine
 * Method:    CheckString
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_CheckString
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    CheckArgument
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_CheckArgument
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    CheckParameter
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_CheckParameter
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    KeepArgument
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_KeepArgument
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    KeepParameter
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_KeepParameter
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     TestFrame_Engine
 * Method:    DisplayMessage
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_TestFrame_Engine_DisplayMessage
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif