/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_hit_ir_ltp4j_SRL */

#ifndef _Included_edu_hit_ir_ltp4j_SRL
#define _Included_edu_hit_ir_ltp4j_SRL
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_hit_ir_ltp4j_SRL
 * Method:    create
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_edu_hit_ir_ltp4j_SRL_create
  (JNIEnv *, jclass, jstring);

/*
 * Class:     edu_hit_ir_ltp4j_SRL
 * Method:    srl
 * Signature: (Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)I
 */
JNIEXPORT jint JNICALL Java_edu_hit_ir_ltp4j_SRL_srl
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject, jobject, jobject);

/*
 * Class:     edu_hit_ir_ltp4j_SRL
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_edu_hit_ir_ltp4j_SRL_release
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
