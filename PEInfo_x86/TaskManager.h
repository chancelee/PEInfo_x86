#ifndef _TASKMANAGER_H

#include <CommCtrl.h>

extern INT_PTR CALLBACK TaskMgrDlgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

extern VOID InitList(HWND hWnd);

// ��ʾ��ǰϵͳ�����н�����Ϣ
extern VOID InitProcessInfo(HWND hWnd);

// ��ʾѡ�н��̵�����ģ����Ϣ
extern VOID ShowProcessModule(HWND hWnd, int index);

#endif // !_TASKMANAGER_H
