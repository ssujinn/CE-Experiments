<?php
	header("Content-Type:php;charset=utf-8");

	$fp = fopen("counter.txt", "r");		 			// 'counter.txt' 파일을 읽기모드로 불러온다

	if(filesize("counter.txt")==0){
		$count = 0;										//'counter.txt'가 빈 파일이면 count에 0을 저장한다
	}
	else{
		$count = fread($fp, filesize("counter.txt"));	//'counter.txt'가 빈 파일이 아니면 count에 파일 내용을 저장한다
	}
	
	fclose($fp);										// 파일포인터 fp를 닫는다

	if (!$_COOKIE['ip'])								
	{													
		setcookie("ip", $_SERVER["REMOTE_ADDR"]);		// 방문했던 아이피가 아니면 쿠키를 설정한다
		$count++;										// 방문했던 아이피가 아니면 count를 1 올린다
	}												
	
	$fp = fopen("counter.txt", "w");					// 'counter.txt' 파일을 쓰기모드로 불러온다
	fwrite($fp, "$count", strlen($count));				// count에 저장된 값을 'counter.txt'에 입력한다
	fclose($fp);										// 파일포인터 fp를 닫는다

	$string = (string)$count;							// count를 string형태로 변환하여 변수 string에 저장
	echo("<font size=7>방문자 수 : </font>");				// 화면에 "방문자 수 : "를 출력한다

	for ( $i=0; $i<strlen($string); $i++)				// string의 길이 만큼 for문 반복
	{   
		$ch = substr($string,$i,1);						// string의 i번째 문자를 변수 ch에 저장
		echo("<img src=".$ch.".jpg>");					// 확장자가 jpg 이고 파일명이 ch에 저장된 값과 동일한 이미지 출력
	}
?>
