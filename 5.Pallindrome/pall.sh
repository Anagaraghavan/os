echo "enter the number "
read n
org=$n
rev=0
while [ $n -ne 0 ]
do
i=$(($n%10))
rev=$((i + $rev * 10))
n=$(($n/10))
done
if [ $org -eq $rev ]
then
echo " $org is a palindrome"
else
echo " $org is not a palindrome"
fi

