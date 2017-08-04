#ifndef MYDLL_H_INCLUDED
#define MYDLL_H_INCLUDED

#include<windows.h>

//***********************************************************
// ���������ӿ�

#ifdef _USRDLL
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
//######################## ����ͨ�ú��� #################################

DLL_API void HelloDll(void);

#ifdef __cplusplus
}
#endif

// �Զ������������������

#ifdef _DEBUG
#ifndef _USRDLL
#pragma comment(lib, "../Debug/mydll.lib")
#pragma message("======== DEBUG mode ========")
#endif
#else
#ifndef _USRDLL
#pragma comment(lib, "../Release/mydll.lib")
#pragma message("======== RELEASE mode ========")
#endif

#endif


#endif // MYDLL_H_INCLUDED
