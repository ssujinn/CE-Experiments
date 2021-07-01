<?php
	header("Content-Type:php;charset=utf-8");

	echo("<h1>게시판 읽기</h1><p>");												// 화면에 '게시판 읽기' 출력 (h1 태그로 제목 크기 설정)

	$fp=fopen("Data.txt", "r");													// 'Data.txt' 파일을 읽기모드로 불러온다
	$string = fread($fp, filesize("Data.txt"));									// 'Data.txt' 파일내용을 변수 string에 저장
	
	fclose($fp);																// 파일포인터 fp를 닫는다

	echo("<textarea rows=7 cols=50 name='outputform'>$string</textarea><p>");	// textarea 설정하고 변수 string에 저장된 값이 화면에 출력 되도록한다
																						

	echo("<a href=board_main.php>되돌아 가기</a>");									// 하이퍼링크 이용하여 '되돌아 가기' 누르면 'board_main.php' 페이지로 이동
?>
