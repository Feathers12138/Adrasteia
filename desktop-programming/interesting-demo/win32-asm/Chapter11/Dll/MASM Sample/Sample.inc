;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
; Author:	���Ʊ�
; Web:		http://asm.yeah.net �����Ʊ�ı����԰��
; E-mail:	luoyunbin@sina.com
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
; Version	1.0
;		Date: 2004.05.01
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
; Sample.dll ����������
;
; 1��invoke _IncCounter
;	���� Dll �ڲ���������ֵ��������ӵ�10�������ؼ���ֵ
; 2��invoke _DecCounter
;	���� Dll �ڲ���������ֵ����С���ٵ�0�������ؼ���ֵ
; 3��invoke _Mod,dwNumber1,dwNumber2
;	���룺dwNumber1 �� dwNumber2 Ϊ��������
;	�����������ģ dwNumber1 % dwNumber2
;>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

_IncCounter	proto
_DecCounter	proto
_Mod		proto	dwNumber1:dword,dwNumber2:dword