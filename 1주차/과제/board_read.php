<?php
	header("Content-Type:php;charset=utf-8");

	echo("<h1>�Խ��� �б�</h1><p>");												// ȭ�鿡 '�Խ��� �б�' ��� (h1 �±׷� ���� ũ�� ����)

	$fp=fopen("Data.txt", "r");													// 'Data.txt' ������ �б���� �ҷ��´�
	$string = fread($fp, filesize("Data.txt"));									// 'Data.txt' ���ϳ����� ���� string�� ����
	
	fclose($fp);																// ���������� fp�� �ݴ´�

	echo("<textarea rows=7 cols=50 name='outputform'>$string</textarea><p>");	// textarea �����ϰ� ���� string�� ����� ���� ȭ�鿡 ��� �ǵ����Ѵ�
																						

	echo("<a href=board_main.php>�ǵ��� ����</a>");									// �����۸�ũ �̿��Ͽ� '�ǵ��� ����' ������ 'board_main.php' �������� �̵�
?>
