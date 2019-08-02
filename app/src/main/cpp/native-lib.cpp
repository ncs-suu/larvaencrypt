#include <jni.h>
#include <string>



extern "C"
JNIEXPORT jstring JNICALL
Java_com_larvasoft_larvaencrypt_MainActivity_encryptAES(JNIEnv *env, jobject instance,
                                                        jstring text_, jstring key_) {
    const char *text = env->GetStringUTFChars(text_, 0);
    const char *key = env->GetStringUTFChars(key_, 0);

    env->ReleaseStringUTFChars(text_, text);
    env->ReleaseStringUTFChars(key_, key);

    return env->NewStringUTF(key);
}extern "C"
JNIEXPORT jstring JNICALL
Java_com_larvasoft_larvaencrypt_MainActivity_descrypt(JNIEnv *env, jobject instance,
                                                      jstring encryptedText_, jstring key_) {
    const char *encryptedText = env->GetStringUTFChars(encryptedText_, 0);
    const char *key = env->GetStringUTFChars(key_, 0);

    // TODO

    env->ReleaseStringUTFChars(encryptedText_, encryptedText);
    env->ReleaseStringUTFChars(key_, key);

    return env->NewStringUTF(key);
}