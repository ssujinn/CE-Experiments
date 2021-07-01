echo 'Working directory' #/sogang/under/cse20171640/shell
read dirname #directory 이름을 입력을 저장

if [ -n "$dirname" ]	#dirname string이 NOT NULL 이고
then
	if [ -d "$dirname" ]	#dirname의 이름을 가진 directory가 존재하고
	then
		if [ -x "$dirname" ]	#dirname directory 실행 권한이 있으면
		then
			cd "$dirname"	#dirname directory로 이동한다
		else
			echo "Error message: Impossible to change directory"	#그렇지 않으면 에러 출력하고
			exit 0	#프로그램 종료
		fi
	else	#dirname의 이름을 가진 directory가 존재하지 않으면
		echo "Error message: No Directory"	#에러 출력하고
		exit 0	#프로그램 종료
	fi
fi
for dir in *	#directory 내 모든 파일에 대해 수행한다
do

newname=`echo $dir | tr "[a-z] [A-Z]" "[A-Z] [a-z]"` #변수 newname은 dir의  대소문자를tr을 이용해서 바꾼것
mv $dir $newname #$dir을 newname으로 바꾼다. 
done #끝~~
