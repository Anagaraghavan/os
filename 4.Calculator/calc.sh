echo " enter the numbers "
read a b
echo " Arthematic calculator "
while true
do
echo "1.addition"
echo "2.subtraction"
echo "3.multiplication"
echo " 4.division"
read n
case $n in
      1) result=$(($a+$b))
         echo "sum =$result";;
      2) result=$(($a-$b))  
        echo "difference=$result";;
      3) result=$(($a*$b))
         echo "product=$result";;
      4) result=$(($a/$b))  
        echo "quotient=$result";;
      *) echo "invalid "
 esac
 done
  
