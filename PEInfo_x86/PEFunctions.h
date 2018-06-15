#pragma once

typedef struct _MAP_FILE_STRUCT
{
	HANDLE hFile;
	HANDLE hMapping;
	LPVOID ImageBase;
} MAP_FILE_STRUCT, *LPMAP_FILE_STRUCT;

// ���ļ�ӳ����Ϣװ�ص�ȫ�ֱ�����
extern BOOL RoadFile(LPCTSTR szFileName, LPMAP_FILE_STRUCT pMFS);

extern BOOL IsPE32File(LPVOID ImageBase);

// ��������ַת��Ϊԭʼ�ļ�ƫ��
extern BOOL Rva2offset(LPVOID ImageBase, DWORD VirtualAddress, PDWORD dwOffset);

extern BOOL HasExportTable(LPVOID ImageBase);

extern BOOL HasImportTable(LPVOID ImageBase);

extern BOOL HasResourceTable(LPVOID ImageBase);