#ifndef _DATADIRECTORY_H
#define _DATADIRECTORY_H

extern INT_PTR CALLBACK DirectoryDlgProc(HWND hWndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);

// ��ʼ���Ի�������
extern VOID InitStaticText(HWND hWnd);

// ��������Ŀ¼��
extern VOID ShowDataDirectoryInfo(HWND hWnd);

#endif // !_DATADIRECTORY_H