echo "enter the number"
read n
sum=0
while [ $n -gt 0 ]
do
digit=$(($n%10))
sum=$(($sum+$digit))
n=$(($n/10))
done
echo "sum of digit:$sum"
