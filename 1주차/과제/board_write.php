<?php
	header("Content-Type:php;charset=utf-8");

	echo("<h1>�Խ��� ����</h1>");													// '�Խ��� ����' ȭ�鿡 ��� (h1 �±׷� ���� ũ�� ����)
	
	$string = $_POST[string];													// �Էµ� ���ڿ��� string ������ ����

	if($string)																	// �Էµ� ���ڿ��� �ִ��� Ȯ��
	{																			
		$fp=fopen("Data.txt","w");												// ���� fp�� Data.txt�� ������� ����
		fwrite($fp, "$string", strlen($string));								// 'Data.txt'�� string�� ����� ���ڿ��� �Է��Ѵ�
		fclose($fp);															// ���������� fp�� �ݴ´�
		echo("<meta http-equiv='refresh' content='1; URL=board_main.php'>");	// META �±� �̿��Ͽ� 1�� �� �������� ���ư���
	}

	echo("
		<form name='inputform' method='post' action='$PHP_SELF'>	
		<textarea rows=7 cols=50 name = 'string'></textarea><br><br>			
		<input type='submit' value='����ϱ�'<br>									
		<input type='reset' value='�ٽñ���' <br><br><br>						
		</form>
		");																		
		/* ����ϱ� ��ư�� ������ textarea���� �Է¹��� ���ڿ��� FORM �±� �̿��Ͽ� �ڱ��ڽ��� php�� �����Ѵ�
		   �ٽñ��� ��ư�� ������ textarea�� �Էµ� ������ �����ǰ� �ٽ� �ۼ� �� �� �ִ� */

	echo("<a href='board_main.php'>�ǵ��� ����</a>");								// �����۸�ũ �̿��Ͽ� '�ǵ��� ����' ������ 'board_main.php'�� �̵�
?>
