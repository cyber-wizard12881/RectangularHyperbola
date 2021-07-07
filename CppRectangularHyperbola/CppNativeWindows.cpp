#include <windows.h>
#include <string>

#pragma comment (lib, "User32.lib")

/*
*	Run the below command to generate the following .h file .....
	javac -h . ..\JRectangularHyperbola\src\main\java\com\winterop\jrectangularhyperbola\Java2Win.java
*/

#include "com_winterop_jrectangularhyperbola_Java2Win.h"

JNIEXPORT jint JNICALL Java_com_winterop_jrectangularhyperbola_Java2Win_CppMessageBox(JNIEnv *env, jclass cls, jstring text, jstring caption) 
{
	const jchar* _caption = env->GetStringChars(caption, 0);
	const jchar* _text = env->GetStringChars(text, 0);
	const int result = MessageBoxW(NULL, (wchar_t*) _text, (wchar_t*) _caption, MB_OK | MB_TASKMODAL);
	env->ReleaseStringChars(caption, _caption);
	env->ReleaseStringChars(text, _text);
	return result;
}
