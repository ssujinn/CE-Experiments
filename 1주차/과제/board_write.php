<?php
	header("Content-Type:php;charset=utf-8");

	echo("<h1>게시판 쓰기</h1>");													// '게시판 쓰기' 화면에 출력 (h1 태그로 제목 크기 설정)
	
	$string = $_POST[string];													// 입력된 문자열을 string 변수에 저장

	if($string)																	// 입력된 문자열이 있는지 확인
	{																			
		$fp=fopen("Data.txt","w");												// 변수 fp에 Data.txt를 쓰기모드로 열기
		fwrite($fp, "$string", strlen($string));								// 'Data.txt'에 string에 저장된 문자열을 입력한다
		fclose($fp);															// 파일포인터 fp를 닫는다
		echo("<meta http-equiv='refresh' content='1; URL=board_main.php'>");	// META 태그 이용하여 1초 후 메인으로 돌아간다
	}

	echo("
		<form name='inputform' method='post' action='$PHP_SELF'>	
		<textarea rows=7 cols=50 name = 'string'></textarea><br><br>			
		<input type='submit' value='등록하기'<br>									
		<input type='reset' value='다시기입' <br><br><br>						
		</form>
		");																		
		/* 등록하기 버튼을 누르면 textarea에서 입력받은 문자열을 FORM 태그 이용하여 자기자신의 php로 전송한다
		   다시기입 버튼을 누르면 textarea에 입력된 내용이 삭제되고 다시 작성 할 수 있다 */

	echo("<a href='board_main.php'>되돌아 가기</a>");								// 하이퍼링크 이용하여 '되돌아 가기' 누르면 'board_main.php'로 이동
?>
