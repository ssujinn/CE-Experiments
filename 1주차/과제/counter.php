<?php
	header("Content-Type:php;charset=utf-8");

	$fp = fopen("counter.txt", "r");		 			// 'counter.txt' ������ �б���� �ҷ��´�

	if(filesize("counter.txt")==0){
		$count = 0;										//'counter.txt'�� �� �����̸� count�� 0�� �����Ѵ�
	}
	else{
		$count = fread($fp, filesize("counter.txt"));	//'counter.txt'�� �� ������ �ƴϸ� count�� ���� ������ �����Ѵ�
	}
	
	fclose($fp);										// ���������� fp�� �ݴ´�

	if (!$_COOKIE['ip'])								
	{													
		setcookie("ip", $_SERVER["REMOTE_ADDR"]);		// �湮�ߴ� �����ǰ� �ƴϸ� ��Ű�� �����Ѵ�
		$count++;										// �湮�ߴ� �����ǰ� �ƴϸ� count�� 1 �ø���
	}												
	
	$fp = fopen("counter.txt", "w");					// 'counter.txt' ������ ������� �ҷ��´�
	fwrite($fp, "$count", strlen($count));				// count�� ����� ���� 'counter.txt'�� �Է��Ѵ�
	fclose($fp);										// ���������� fp�� �ݴ´�

	$string = (string)$count;							// count�� string���·� ��ȯ�Ͽ� ���� string�� ����
	echo("<font size=7>�湮�� �� : </font>");				// ȭ�鿡 "�湮�� �� : "�� ����Ѵ�

	for ( $i=0; $i<strlen($string); $i++)				// string�� ���� ��ŭ for�� �ݺ�
	{   
		$ch = substr($string,$i,1);						// string�� i��° ���ڸ� ���� ch�� ����
		echo("<img src=".$ch.".jpg>");					// Ȯ���ڰ� jpg �̰� ���ϸ��� ch�� ����� ���� ������ �̹��� ���
	}
?>
